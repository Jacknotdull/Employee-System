#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct EmployeeRecord //structure that can store various data variables
{
	int id, salary, departmentnum, overallperformance, 
		jday, jmonth, jyear, lday, lmonth, lyear;
	string name, phonenum, address, departmentname;
}re;

struct node //node that will be inserted into doubly linked list
{
	EmployeeRecord er;
	node* previous;
	node* next;
};

int sz = 0, id;
char cont; double total;
node *head, *tail, *before, *next;

bool checklist() {
	cout << "Enter Employee ID: ";
	cin >> id;
	while (cin.fail()) { //if get wrong input, it will loop
		cout << "Invalid input and try again\nEnter Employee ID: ";
		cin.clear(); //will clear the error flag
		cin.ignore(256, '\n'); //will ignore the wrong input
		cin >> id;
	}
	node* check = head; //check pointer will go to the first node
	if (check == NULL) { //check if the list is empty
		cout << "Record is empty." << endl;
		return false;
	}
	else
		return true;
}

void display() { //display all records
	int num;
	char select;
	node* current;
	current = head;
	cout << "\n----------------------Record----------------------\n";
	if (current == NULL) {
		cout << "No record" << endl;
		return;
	}
	while (current != NULL) {
		cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name 
			<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " <<current->er.phonenum 
			<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum 
			<< "\nDepartment\t\t: "<< current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance 
			<<"\nDate Joined\t\t: "<<current->er.jday<<"/" << current->er.jmonth << "/" << current->er.jyear << endl << endl;
		current = current->next;
	}
	cout << "---------------------------------------------------\n" << endl;
	do {
		cout << "Do you wish to sort records by department? ((Y)es/(N)o)" << endl; //allow the user to view record by department
		cin >> select;
		if (select == 'Y' || select == 'y') {
			cout << "\nWhich of the following department would you like to view?\n1.Finance\n2.HR\n3.IT\n4.Marketing\n5.Sales" << endl;
			cin >> num;
			while (cin.fail()) {
				cout << "Invalid input and try again" << endl;
				cin.clear();
				cin.ignore(256, '\n');
				cin >> num;
			}
			if (num == 1) {
				node* current = head;
				if (current == NULL) {
					cout << "Record is empty." << endl;
				}
				while (current) {
					if (current->er.departmentnum == num) {
						cout << "--------------------------------------------" << endl;
						cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name
							<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " << current->er.phonenum
							<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum
							<< "\nDepartment\t\t: " << current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance
							<< "\nDate Joined\t\t: " << current->er.jday << "/" << current->er.jmonth << "/" << current->er.jyear << endl;
						current = current->next;
					}
					else
						current = current->next;
				}
			}
			else if (num == 2) {
				node* current = head;
				if (current == NULL) {
					cout << "Record is empty." << endl;
				}
				while (current) {
					if (current->er.departmentnum == num) {
						cout << "--------------------------------------------" << endl;
						cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name
							<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " << current->er.phonenum
							<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum
							<< "\nDepartment\t\t: " << current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance
							<< "\nDate Joined\t\t: " << current->er.jday << "/" << current->er.jmonth << "/" << current->er.jyear << endl;
						current = current->next;
					}
					else
						current = current->next;
				}
			}
			else if (num == 3) {
				node* current = head;
				if (current == NULL) {
					cout << "Record is empty." << endl;
				}
				while (current) {
					if (current->er.departmentnum == num) {
						cout << "--------------------------------------------" << endl;
						cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name
							<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " << current->er.phonenum
							<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum
							<< "\nDepartment\t\t: " << current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance
							<< "\nDate Joined\t\t: " << current->er.jday << "/" << current->er.jmonth << "/" << current->er.jyear << endl;
						current = current->next;
					}
					else
						current = current->next;
				}
			}
			else if (num == 4) {
				node* current = head;
				if (current == NULL) {
					cout << "Record is empty." << endl;
				}
				while (current) {
					if (current->er.departmentnum == num) {
						cout << "--------------------------------------------" << endl;
						cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name
							<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " << current->er.phonenum
							<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum
							<< "\nDepartment\t\t: " << current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance
							<< "\nDate Joined\t\t: " << current->er.jday << "/" << current->er.jmonth << "/" << current->er.jyear << endl;
						current = current->next;
					}
					else
						current = current->next;
				}
			}
			else if (num == 5) {
				node* current = head;
				if (current == NULL) {
					cout << "Record is empty." << endl;
				}
				while (current) {
					if (current->er.departmentnum == num) {
						cout << "--------------------------------------------" << endl;
						cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name
							<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " << current->er.phonenum
							<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum
							<< "\nDepartment\t\t: " << current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance
							<< "\nDate Joined\t\t: " << current->er.jday << "/" << current->er.jmonth << "/" << current->er.jyear << endl;
						current = current->next;
					}
					else
						current = current->next;
				}
			}
			else
				return;
		}
		else if (select == 'N' || select == 'n') {
			return;
		}
	} while ((select != 'n') && (select != 'N'));

}

int bigid() { //look for the largest ID
	node *max, *temp;
	temp = max = head; //2 pointers at the first node
	while(temp!=NULL){
		if (temp->er.id > max->er.id)
			max = temp;
		temp = temp->next;
	}
	return max->er.id;
}

void salarypackage() { //calculate employee salary package
	double basic, rental, conveyance; //double type can deal with decimals
	cout << "----------------------Salary Package----------------------" << endl;
	cout << "Basic salary\t: RM ";
	cin >> basic;
	while (cin.fail()) {
		cout << "Invalid input and try again\nBasic salary\t: RM ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> basic;
	}
	rental = basic*0.5;
	cout << "House rent\t: RM " << rental;
	conveyance = basic*0.1;
	cout << "\nConveyance\t: RM " << conveyance;
	cout << "\nMedical\t\t: RM 200";
	total = basic + rental + conveyance + 200;
	cout << "\nTotal\t\t: RM " << total << endl << endl;
	cout << "Proceeding to add new record..." << endl << endl;
	system("pause");
}

void addRecord(EmployeeRecord newRecord) { //adding new employee record
	node* newnode = new node; //create new node object
	if (head == NULL) { //if the list is empty, the node will be the first record
		newnode->er = newRecord;
		newnode->next = NULL;
		newnode->previous = NULL;
		head = tail = newnode;
	}
	else { //else it will add behind of the list
		newnode->er = newRecord;
		newnode->next = NULL;
		newnode->previous = tail;
		tail = newnode;
		newnode->previous->next = newnode;
	}
	sz++;//size of the list increase by 1
}

bool searchID(int checkid) { //search record by ID
	node* current = head;
	while (current) {
		if (current->er.id == checkid) {
			cout << "----------------------Result----------------------" << endl;
			cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name
				<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " << current->er.phonenum
				<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum
				<< "\nDepartment\t\t: " << current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance
				<< "\nDate Joined\t\t: " << current->er.jday << "/" << current->er.jmonth << "/" << current->er.jyear << endl << endl;
			return true;
		}
		else
			current = current->next;
	}
	return false;
}

void searchPerformance(int performance) {
	node* current = head;
	cout << "----------------------Result----------------------" << endl;
	if (current == NULL) {
		cout << "Empty list" << endl;
		return;
	}
	while (current != NULL) {
		if (current->er.overallperformance == performance) {
			cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name
				<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " << current->er.phonenum
				<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum
				<< "\nDepartment\t\t: " << current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance
				<< "\nDate Joined\t\t: " << current->er.jday << "/" << current->er.jmonth << "/" << current->er.jyear << endl << endl;
			current = current->next;
		}
		else
			current = current->next;
	}
}

void sortID() { //sort ID ascendingly
	int counter = 0;
	node* temp = new node;
	node* current = head;
	node* last = NULL;
	if (current == NULL) {
		cout << "Record is empty." << endl;
		return;
	}
	while (current) { //get the number of nodes
		current = current->next;
		counter++;
	}
	current = head;
	for (int i = 0; i < counter - 1; i++) {
		while (current->next != NULL) {
			if (current->er.id > current->next->er.id) { //if the ID is bigger than the next one, they will switch places
				temp->er = current->er;
				current->er = current->next->er;
				current->next->er = temp->er;
			}
			current = current->next;
		}
		current = head;
	}
	display();
}

void sortSalary() { //sort salary in ascending order
	int counter = 0;
	node* temp = new node;
	node* current = head;
	node* last = NULL;
	if (current == NULL) {
		cout << "Record is empty." << endl;
		return;
	}
	while (current) {
		current = current->next;
		counter++;
	}
	current = head;
	for (int i = 0; i < counter - 1; i++) {
		while (current->next != NULL) {
			if (current->er.salary > current->next->er.salary) {
				temp->er = current->er;
				current->er = current->next->er;
				current->next->er = temp->er;
			}
			current = current->next;
		}
		current = head;
	}
	display();
}

void sortPerformance() { //sort performance score in ascending order
	int counter = 0;
	node* temp = new node;
	node* current = head;
	node* last = NULL;
	if (current == NULL) {
		cout << "Record is empty." << endl;
		return;
	}
	while (current) {
		current = current->next;
		counter++;
	}
	current = head;
	for (int i = 0; i < counter - 1; i++) {
		while (current->next != NULL) {
			if (current->er.overallperformance > current->next->er.overallperformance) {
				temp->er = current->er;
				current->er = current->next->er;
				current->next->er = temp->er;
			}
			current = current->next;
		}
		current = head;
	}
	display();
}

void modify() { //modify name, phone number, address, date joined
	int id, jday, jmonth, jyear;
	char slash;
	string name, phonenum, address;
	cout << "Enter ID to modify: ";
	cin >> id;
	while (cin.fail()) {
		cout << "Invalid input and try again\nEnter ID to modify: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> id;
	}
	node* current = head;
	if (current == NULL) {
		cout << "Empty list" << endl;
		return;
	}
	else {
		while (current) {
			if (current->er.id == id) {
				cout << "--------------------------------------------" << endl;
				cout << "Employee ID\t\t: " << current->er.id << "\nName\t\t\t: " << current->er.name
					<< "\nSalary\t\t\t: RM " << current->er.salary << "\nPhone Number\t\t: " << current->er.phonenum
					<< "\nAddress\t\t\t: " << current->er.address << "\nDepartment ID\t\t: " << current->er.departmentnum
					<< "\nDepartment\t\t: " << current->er.departmentname << "\nOverall Performance\t: " << current->er.overallperformance
					<< "\nDate Joined\t\t: " << current->er.jday << "/" << current->er.jmonth << "/" << current->er.jyear << endl << endl;
				cout << "--------------------------------------------\nPlease enter new\nName\t\t: "; cin >> name;
				cout << "Phone Number\t: "; cin >> phonenum;
				cout << "Address\t\t: "; cin >> address;
				cout << "Date Joined(dd/mm/yyyy)\t: "; cin >> jday >> slash >> jmonth >> slash >> jyear;
				cout << "--------------------------------------------" << endl;
				current->er.name = name; current->er.phonenum = phonenum; current->er.address = address; //update the info
				current->er.jday = jday; current->er.jmonth = jmonth; current->er.jmonth = jyear;
				current->er.lday = NULL; current->er.lmonth = NULL; current->er.lyear = NULL; //remove the last date resigned of former employee
				break;
			}
			else
				current = current->next; //move to next record
			cout << "No ID found..." << endl;
			break;
		}
	}
}

void deleteRecord(int cday, int cmonth, int cyear) { //delete record and pass in the current date
	bool flag; //boolean to check if it is true
	int ctotal, dtotal, diff;
	cout << "Enter Employee ID to delete: ";
	cin >> id;
	while (cin.fail()) {
		cout << "Invalid input and try again\nEnter Employee ID to delete: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> id;
	}
	node* temporary = head;
	if (temporary == NULL) {
		cout << "Record is empty." << endl;
		return;
	}
	while (temporary->er.id != id) {
		before = temporary;
		temporary = temporary->next;
	}
	if (temporary->er.id == id) {
		ctotal = cday + (cmonth * 30) + (cyear * 365); //calculate the total days from current date
		dtotal = temporary->er.lday + (temporary->er.lmonth * 30) + (temporary->er.lyear * 365); //calculate the total days from date leaving
		diff = ctotal - dtotal; //get the difference
		if (diff >= 180) { //if the difference is more than 6 months
			if (temporary == tail) { //delete if the record is at the end of the list
				temporary = tail;
				tail->previous->next = NULL;
				tail = tail->previous;
				delete temporary;
			}
			else if (temporary == head) { //delete if the record is at the first of the list
				temporary = head;
				head->next->previous = NULL;
				head = head->next;
				delete temporary;
			}
			else { //delete if the record is in any position except first or last
				before->next = before->next->next;
				temporary->next->previous = before;
				delete temporary;
			}
			cout << "Deleted successfully" << endl;
			sz--; //size of list decrease by 1
		}
		else
			cout << "The record can only be deleted after 6 months" << endl;
	}
}

void main() {
	char option,slash;
	node* head = NULL;//initialise head pointer point to nothing
	node* tail = NULL;
	node* before = NULL;
	node* next = NULL;
	re.id = 1; re.name = "David"; re.salary = 5000; re.phonenum = "0123435465"; re.address = "KL"; //define some records
	re.departmentnum = 1; re.departmentname = "Finance"; re.overallperformance = 4; 
	re.jday = 12; re.jmonth = 12; re.jyear = 2017; re.lday = 12; re.lmonth = 12; re.lyear = 2018;
	addRecord(re);
	re.id = 3; re.name = "Peter"; re.salary = 4000; re.phonenum = "0123435465"; re.address = "PJ";
	re.departmentnum = 2; re.departmentname = "HR"; re.overallperformance = 3; 
	re.jday = 12; re.jmonth = 12; re.jyear = 2018; re.lday = 12; re.lmonth = 12; re.lyear = 2019;
	addRecord(re);
	re.id = 4; re.name = "Bruce"; re.salary = 2500; re.phonenum = "0123435465"; re.address = "KL";
	re.departmentnum = 3; re.departmentname = "IT"; re.overallperformance = 1;
	re.jday = 12; re.jmonth = 12; re.jyear = 2010; re.lday = 12; re.lmonth = 12; re.lyear = 2018;
	addRecord(re);
	re.id = 5; re.name = "Raymond"; re.salary = 3000; re.phonenum = "0123435465"; re.address = "KL";
	re.departmentnum = 4; re.departmentname = "Marketing"; re.overallperformance = 2;
	re.jday = 23; re.jmonth = 11; re.jyear = 2017; re.lday = 12; re.lmonth = 12; re.lyear = 2018;
	addRecord(re);
	re.id = 2; re.name = "Charlie"; re.salary = 4800; re.phonenum = "0123435465"; re.address = "KL";
	re.departmentnum = 5; re.departmentname = "Sales"; re.overallperformance = 4;
	re.jday = 1; re.jmonth = 7; re.jyear = 2000; re.lday = 12; re.lmonth = 12; re.lyear = 2018;
	addRecord(re);
	do {
		system("cls"); //clear the window
		time_t now = time(0); //calling the time_t function to print current date
		tm *ltm = localtime(&now);
		cout << "Welcome to Emerge Employee System\t\t\t\tDate: " << ltm->tm_mday << " / " << 1 + ltm->tm_mon << " / " << 1900 + ltm->tm_year << endl;
		int cday, cmonth, cyear;
		cday = ltm->tm_mday;
		cmonth = ltm->tm_mon+1;
		cyear = ltm->tm_year+1900;
		cout << "1. Add record" << endl;
		cout << "2. Display records" << endl;
		cout << "3. Search by Employee ID" << endl;
		cout << "4. Search by Employee overall performance" << endl;
		cout << "5. Sort by Employee ID" << endl;
		cout << "6. Sort by Employee Salary" << endl;
		cout << "7. Sort by Employee Overall Performance" << endl;
		cout << "8. Modify record" << endl;
		cout << "9. Delete record" << endl;
		cout << "0. Calculate salary package" << endl;
		cout << "Press E to Exit" << endl;
		cin >> option; //get user option
		switch (option) {
		case '1':
			system("cls");
			cout << "Salary package should be calculated in advance!" << endl;
			salarypackage();
		j1: //after salary calculation, it will prompt to here
			system("cls");
			cout << "Enter the details\nEmployee ID\t\t: " << bigid() + 1 << endl;
			re.id = bigid() + 1; //auto assign ID by calling the bigid function
			cout << "Name\t\t\t: "; cin >> re.name;
			cout << "Salary\t\t\t: RM" << total << endl;
			re.salary = total; //salary package will be assigned as the salary
			cout << "Phone Number\t\t: "; cin >> re.phonenum;
			cout << "Address\t\t\t: "; cin >> re.address;
			cout << "Department ID\t\t: "; cin >> re.departmentnum;
			cout << "Department\t\t: "; cin >> re.departmentname;
			cout << "Overall Performance(1-4): "; cin >> re.overallperformance;
			cout << "Date joined(dd/mm/yyyy)\t: "; 
			cin>>re.jday>>slash>> re.jmonth>>slash>> re.jyear; //get the date joined
			re.lday = NULL; re.lmonth = NULL; re.lyear = NULL; //set the date leaving as NULL
			addRecord(re);
			display();
			system("pause");
			break;
		case '2':
			system("cls");
			display();
			system("pause");
			break;
		case '3':
			system("cls");
			if (checklist() == true)
				searchID(id);
			else if (checklist() == false)
				break;
			system("pause");
			break;

		case '4':
			system("cls");
			int performancescore;
			cout << "Enter Performance Score(1 to 4): ";
			cin >> performancescore;
			while (cin.fail() || ((performancescore < 1) || (performancescore > 4))) {
				cout << "Invalid input and try again\nEnter Performance Score: ";
				cin.clear();
				cin.ignore(256, '\n');
				cin >> performancescore;
			}
			searchPerformance(performancescore);
			system("pause");
			break;
		case '5':
			sortID();
			break;
		case '6':
			sortSalary();
			break;
		case '7':
			sortPerformance();
			break;
		case '8':
			system("cls");
			modify();
			system("pause");
			break;
		case '9':
			system("cls");
			deleteRecord(cday,cmonth,cyear);
			system("pause");
			break;
		case '0':
			system("cls");
			salarypackage();
			system("pause");
			goto j1; //go to adding new record
			system("pause");
			break;
		case 'E':
		case 'e':
			cout << "Thank you and have a nice day!" << endl;
			system("pause");
			break;
		default:
			cout << "Enter a valid number!" << endl;
			system("pause");
			break;
		}
	} while ((option != 'E') && (option != 'e'));
}