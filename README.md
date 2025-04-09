Student Record Management System
This is a **Student Record Management System** written in C++ that allows an admin to manage student records. The system allows for operations such as entering, displaying, updating, and deleting student data, including personal information like name, address, contact number, and roll number.
Features
- **Student Data Entry**: Allows adding new student records.
- **Display All Students**: Displays a list of all entered student data.
- **Update Student Data**: Allows updating information of a student by their roll number.
- **Delete Student Data**: Allows deleting specific student records or clearing all records.
- **Admin Authentication**: A login system for the admin user with username and password authentication.
Requirements
- C++ compiler (just use Visual studio)
- Windows operating system (for `Sleep` function used in the code)
Setup
1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/your-username/student-record-management.git
   ```
2. Navigate to the project directory:
   ```bash
   cd student-record-management
   ```
3. Compile the C++ code:
   ```bash
   g++ student_record_management.cpp -o student_record_management
   ```
4. Run the program:
   ```bash
   ./student_record_management
   ```
Usage
- On the first run, the program will ask the admin to create a username and password.
- After that, the admin can log in and choose from the following options:
  - **1**: Enter new student data
  - **2**: Display all student data
  - **3**: Update student data
  - **4**: Delete student data
  - **5**: Logout
  - **6**: Exit
Code Walkthrough
The program uses basic structures and loops to store and manipulate student data. The structure `stud` holds the following information:
- `name`: The student's name
- `address`: The student's home address
- `contact`: The student's contact number
- `rollno`: The student's roll number

The data is stored in an array of `stud` objects, and the program offers options to manage the records.
Functions
- **stddata()**: Prompts the admin to enter data for multiple students.
- **display()**: Displays all the entered student records.
- **update()**: Allows the admin to update a student's data based on their roll number.
- **del()**: Allows the admin to delete specific student records or all records.
Example
```bash
*****Student Record Management*****

   *****LOGIN for Admin*****
Enter username you created: admin
Enter password you created: password

Press 1 to Enter Data of Students
Press 2 to Display All Students Data
Press 3 to Update Students Data
Press 4 to Delete Data of Students
Press 5 to Logout
Press 6 to Exit
```
License
This project is licensed under the MIT License
Acknowledgements
- This project was created for learning purposes.
- Special thanks to the C++ community for providing resources and support.
