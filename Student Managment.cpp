#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

struct stud
{

	string name, address;

	int contact, rollno;

};

int total = 0;

stud s[100];

void stddata() 
{

	int user = 0;

	cout << "\t\tHow many students data do you want to enter?" << endl;

	cin >> user;

	for (int i = total; i < total + user; i++) {

		cout << "\n\t\tEnter data of student " << i + 1 << endl << endl;

		cout << "\n\t\tEnter student name: ";

		cin >> s[i].name;

		cout << "\n\t\tEnter student's home address: ";

		cin >> s[i].address;


		cout << "\n\t\tEnter contact number: ";

		cin >> s[i].contact;

		cout << "\n\t\tEnter Roll no: ";

		cin >> s[i].rollno;
		cout << endl;
	}

	total = total + user;

}

void display() {

	if (total != 0)
	{

		for (int i = 0; i < total; i++) {

			cout << "\n\t\tData of student " << i + 1 << endl;

			cout << "\n\t\tName: " << s[i].name << endl;

			cout << "\n\t\tAddress: " << s[i].address << endl;

			cout << "\n\t\tContact: " << s[i].contact << endl;

			cout << "\n\t\trollno: " << s[i].rollno << endl;

		}

	}

	else {

		cout << "\n\t\tNo data is entered" << endl;

	}

}

void update() {

	if (total != 0) {

		int rollno;

		cout << "\t\tEnter Roll Number of student which you want to update" << endl;

		cin >> rollno;

		for (int i = 0; i < total; i++) {

			if (s[i].rollno == rollno) {

				cout << "\n\n\t\tOld data of student " << i + 1 << endl;

				cout << "\n\n\t\tName: " << s[i].name << endl;

				cout << "\n\n\t\tAddress: " << s[i].address << endl;

				cout << "\n\n\t\tContact: " << s[i].contact << endl;

				cout << "\n\n\t\trollno: " << s[i].rollno << endl;

				cout << "\n\n\t\tEnter new data" << endl;

				cout << "\n\n\t\tEnter student name: ";

				cin >> s[i].name;

				cout << "\n\n\t\tEnter address: ";

				cin >> s[i].address;

				cout << "\n\n\t\tEnter contact: ";

				cin >> s[i].contact;

				cout << "\n\n\t\tEnter rollno: ";

				cin >> s[i].rollno;

				break;

			}

			if (i == total - 1) {

				cout << "\n\n\t\tNo such record found" << endl;

			}

		}

	}
	else {

		cout << "No data is entered" << endl;

	}

}

void del() {

	if (total != 0) {

		int press;

		cout << "\n\n\t\tPress 1 to Delete specific record" << endl;

		cout << "\n\n\t\tPress 2 to Delete full record" << endl;

		cin >> press;

		if (press == 1) {

			int rollno;

			cout << "\n\n\t\tEnter Roll Number of student which you want to delete" << endl;

			cin >> rollno;

			for (int i = 0; i < total; i++) {

				if (s[i].rollno == rollno) {

					s[i].name = s[i + 1].name;

					s[i].address = s[i + 1].address;

					s[i].contact = s[i + 1].contact;

					s[i].rollno = s[i + 1].rollno;

					total--;

					cout << "\t\tYour required record is deleted" << endl;

					break;

				}

				if (i == total - 1) {

					cout << "\t\tNo such record found" << endl;

				}

			}

		}

		else if (press == 2) {

			total = 0;

			cout << "\t\tAll record is deleted" << endl;

		}

		else {

			cout << "\t\tInvalid Input" << endl;

		}

	}
	else {

		cout << "\t\tNo data is entered" << endl;

	}

}

int main() {

	cout << "\n\n\t\t*****Student Record Management*****" << endl;

	string username, password;

	cout << "\n\n\n\t\t   *****Signup for Admin*****" << endl;

	cout << "\n\t\tEnter new username to Create an ID: ";

	cin >> username;

	cout << "\n\t\tEnter new password for the new ID: ";

	cin >> password;

	cout << "\n\t\tYour new id is creating please wait";

	for (int dots = 0; dots < 6; dots++)

	{

		cout << ".";

		Sleep(500);

	}

	cout << "\n\n\t\tYour id created successfully";

	Sleep(2000);

start:

	system("CLS");

	string usrn, pswd;

	cout << "\n\n\t\t*****Student Record Management*****" << endl;

	cout << "\n\n\n\t\t   *****LOGIN for Admin*****" << endl;

	cout << "\n\t\tEnter username you created: ";

	cin >> usrn;

	cout << "\n\t\tEnter password you created: ";

	cin >> pswd;

	if (usrn == username && pswd == password)

	{

		system("CLS");

		char ch;

		while (1)
		{

			cout << "\n\n\t\tPress 1 to Enter Data of Students" << endl;

			cout << "\n\n\t\tPress 2 to Dislplay All Students Data" << endl;

			cout << "\n\n\t\tPress 3 to Update Students Data" << endl;

			cout << "\n\n\t\tPress 4 to Delete Data of Students " << endl;

			cout << "\n\n\t\tPress 5 to Logout" << endl;

			cout << "\n\n\t\tPress 6 to Exit" << endl;

			ch = _getch();

			system("CLS");

			switch (ch) {

			case '1':

				stddata();

				break;

			case '2':

				display();

				break;

			case '3':

				update();

				break;

			case '4':

				del();

				break;

			case '5':

				goto start;

				break;

			case '6':

				exit(0);

				break;

			default:

				cout << "\t\t\aInvalid Input" << endl;

				break;

			}

		}

	}

	else if (usrn != username)

	{

		cout << "\n\t\t\aInvalid username please try again";

		Sleep(3000);

		goto start;

	}

	else if (pswd != password)

	{

		cout << "\a\t\tInvalid password please try again";

		Sleep(3000);

		goto start;

	}

	else {

		cout << "\a\t\tInvalid username and password";

		Sleep(3000);

		goto start;

	}

}