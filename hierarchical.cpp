#include <iostream>
using namespace std;
	class Staff {
		protected:
			int emp_id;
			char name[50];
		public:
			void getdata();
			void display();
};
void Staff::getdata() {
	cout << "\nEnter The details of employee :";
	cout << "\nEnter The name of employee :";
	cin >> name;
	cout << "\nEnter The employee id :";
	cin >> emp_id;
}
void Staff::display() {
	cout << "\n The details of employee :";
	cout << "\n Name of employee :" << name << endl;
	cout << "\n employee id :" << emp_id << endl;
}
class Teacher : public Staff {
	int pub;
	char sub[20];
	public:
	void get_details();
	void display_details();
};
void Teacher::get_details() {
	cout << "\nEnter The details of Teacher :";
	cout << "\nEnter Subject of teacher:";
	cin >> sub;
	cout << "\nEnter Publication :";
	cin >> pub;
}

void Teacher::display_details() {
	cout << "\n details of Teacher :";
	cout << "\n Subject of teacher:" << sub << endl;
	cout << "\n Publication :" << pub << endl;
}
class Officer : public Staff {
	char grade;
		public:
			void get_grade();
			void display_grade();
};
void Officer::get_grade() {
	cout << "\nEnter The details of Officer:";
	cout << "\nEnter Grade of Officer:";
	cin >> grade;
}
void Officer::display_grade() {
	cout << "\n details of Officer:";
	cout << "\n Grade:" << grade << endl;
}
class Typist : public Staff {
	int speed;
		public:
			void get_speed();
			void display_speed();
};
void Typist::get_speed() {
	cout << "\nEnter The details of Typist:";
	cout << "\nEnter Speed of typist:";
	cin >> speed;
}
void Typist::display_speed() {
	cout << "\n details of Typist:";
	cout << "\n typing Speed:" << speed << endl;
}

class Regular : public Typist {
	int salary;
		public:
			void get_salary();
			void display_salary();
};
void Regular::get_salary() {
	cout << "\nEnter Salary of typist:";
	cin >> salary;
}
void Regular::display_salary() {
	cout << "\n Salary:" << salary << endl;
}
class Casual : public Typist {
	int wages;
		public:
			void get_wages();
			void display_wages();
};
void Casual::get_wages() {
	cout << "\nEnter Wages of typist:";
	cin >> wages;
}
void Casual::display_wages() {
	cout << "\n Wages:" << wages << endl;
}
int main() {
	int input, data;
	char choice = 'Y';
do {
	cout << "\n\t\t ---------------------------S.B.JAIN-----------------------------";
	cout << "\n\t\t ----------------------------------------------------------------";
	cout << "\n\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~STAFF DATABASE~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout << "\n\t\t ----------------------------------------------------------------";
	cout << "\n\t\t|\t\t\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t\t\t|";
	cout << "\n\t\t|\t1.\t\tTEACHER\t\t:-PRESS1\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t\t\t|";
	cout << "\n\t\t|\t2.\t\tOFFICER\t\t:-PRESS2\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t\t\t|";
	cout << "\n\t\t|\t3.\t\tTYPIST\t\t:-PRESS3\t\t|";
	cout << "\n\t\t|\t\t\t\t\t\t\t\t|";
	cout << "\n\t\t----------------------------------------------------------------\n\n";
	cout << ("\n\t\t\tselect task from menu \t:-");
	cin >> input;
		switch (input) {
			case 1:
				Teacher T1;
				T1.getdata();
				T1.get_details();
				T1.display();
				T1.display_details();
			break;
			case 2:
				Officer O1;
				O1.getdata();
				O1.get_grade();
				O1.display();
				O1.display_grade();
			break;
			case 3:
				Typist S1;
				S1.getdata();
				S1.get_speed();
					cout << "\nPress 1 for regular";
					cout << "\nPress 2 for casual\n";
					cin >> data;
			if (data == 1) {
				Regular R1;
				R1.get_salary();
				R1.display();
				R1.display_speed();
			} else if (data == 2) { // Changed from 'else if' to 'else if'
				Casual C1;
				C1.get_wages();
				C1.display();
				C1.display_speed();
				C1.display_wages();
			} else {
				cout << "\nEnter valid input";
			}
			break;
			default:
				cout << "\n\t\t\tenter valid operation";
			}
			cout << "Do you want to Continue ......(Y/N)";
			cin >> choice;
			} while (choice == 'Y');
	return 0;
}
