#include <iostream>
using namespace std;

bool isUnique(string existingUsernames[], string existingPasswords[], int count, string newUsername, string newPassword)
{
    for (int i = 0; i < count; i++)
    {
        if (existingUsernames[i] == newUsername && existingPasswords[i] == newPassword)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string adminUsername = "admin@";
    string adminPassword = "test";
    string username;
    string password;

    // Variables to store usernames and passwords for staff
    string staffUsername1, staffPassword1;
    string staffUsername2, staffPassword2;
    string staffUsername3, staffPassword3;

    // Variables to store usernames and passwords for teachers
    string teacherUsername1, teacherPassword1;
    string teacherUsername2, teacherPassword2;
    string teacherUsername3, teacherPassword3;
    string teacherUsername4, teacherPassword4;
    string teacherUsername5, teacherPassword5;
    string teacherCourse1, teacherCourse2, teacherCourse3, teacherCourse4, teacherCourse5;

    // Variables to store usernames and passwords for students in BSIT (50 students)
    string studentUsername1, studentPassword1;
    string studentUsername2, studentPassword2;
    string studentUsername3, studentPassword3;
    string studentUsername4, studentPassword4;
    string studentUsername5, studentPassword5;
    string studentUsername6, studentPassword6;
    string studentUsername7, studentPassword7;
    string studentUsername8, studentPassword8;
    string studentUsername9, studentPassword9;
    string studentUsername10, studentPassword10;
    string studentUsername11, studentPassword11;
    string studentUsername12, studentPassword12;
    string studentUsername13, studentPassword13;
    string studentUsername14, studentPassword14;
    string studentUsername15, studentPassword15;
    string studentUsername16, studentPassword16;
    string studentUsername17, studentPassword17;
    string studentUsername18, studentPassword18;
    string studentUsername19, studentPassword19;
    string studentUsername20, studentPassword20;
    string studentUsername21, studentPassword21;
    string studentUsername22, studentPassword22;
    string studentUsername23, studentPassword23;
    string studentUsername24, studentPassword24;
    string studentUsername25, studentPassword25;
    string studentUsername26, studentPassword26;
    string studentUsername27, studentPassword27;
    string studentUsername28, studentPassword28;
    string studentUsername29, studentPassword29;
    string studentUsername30, studentPassword30;
    string studentUsername31, studentPassword31;
    string studentUsername32, studentPassword32;
    string studentUsername33, studentPassword33;
    string studentUsername34, studentPassword34;
    string studentUsername35, studentPassword35;
    string studentUsername36, studentPassword36;
    string studentUsername37, studentPassword37;
    string studentUsername38, studentPassword38;
    string studentUsername39, studentPassword39;
    string studentUsername40, studentPassword40;
    string studentUsername41, studentPassword41;
    string studentUsername42, studentPassword42;
    string studentUsername43, studentPassword43;
    string studentUsername44, studentPassword44;
    string studentUsername45, studentPassword45;
    string studentUsername46, studentPassword46;
    string studentUsername47, studentPassword47;
    string studentUsername48, studentPassword48;
    string studentUsername49, studentPassword49;
    string studentUsername50, studentPassword50;

    // Variables to keep track of how many accounts have been created
    int staffCount = 0;
    int teacherCount = 0;
    int studentCount = 0;
    int adminChoice = 0;

main_menu:
    cout << "Student Management System\n"
         << endl;
    cout << "1. Login\n";
    cout << "2. Exit\n";
    cout << "Enter your choice: ";
    int mainChoice;
    cin >> mainChoice;

    if (mainChoice == 2)
    {
        cout << "Exiting the program.\n";
        return 0;
    }
    else if (mainChoice != 1)
    {
        cout << "Invalid choice, please try again.\n";
        goto main_menu;
    }

login:
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == adminUsername && password == adminPassword)
    {
    admin_menu:
        cout << "\nAdmin Menu:\n";
        cout << "1. Create Staff Account\n";
        cout << "2. Create Teacher Account\n";
        cout << "3. Logout\n";
        cout << "Enter your choice: ";
        int adminChoice;
        cin >> adminChoice;

        if (adminChoice == 1 && staffCount < 3)
        {
            string newUsername, newPassword;
            cout << "Enter staff username: ";
            cin >> newUsername;
            cout << "Enter staff password: ";
            cin >> newPassword;

            if ((staffCount == 0 || (staffUsername1 != newUsername || staffPassword1 != newPassword)) && (staffCount < 2 || (staffUsername2 != newUsername || staffPassword2 != newPassword)))
            {
                if (staffCount == 0)
                {
                    staffUsername1 = newUsername;
                    staffPassword1 = newPassword;
                }
                else if (staffCount == 1)
                {
                    staffUsername2 = newUsername;
                    staffPassword2 = newPassword;
                }
                else if (staffCount == 2)
                {
                    staffUsername3 = newUsername;
                    staffPassword3 = newPassword;
                }
                staffCount++;
                cout << "Staff account created successfully.\n";
            }
            else
            {
                cout << "This username and password combination already exists.\n";
            }
            goto admin_menu;
        }
        else if (adminChoice == 1 && staffCount >= 3)
        {
            cout << "Maximum staff accounts reached.\n";
            goto admin_menu;
        }
        else if (adminChoice == 2 && teacherCount < 5)
        {
            string newUsername, newPassword;
            int course;

            cout << "Enter teacher username: ";
            cin >> newUsername;
            cout << "Enter teacher password: ";
            cin >> newPassword;
            cout << "Select which program to assign: " << endl;
            cout << "1. BSIT\n2. BSENT\n3. DICT\n4. BSA\n5. BSBA" << endl;
            cin >> course;

            // Check if the username-password combination already exists
            if ((teacherCount == 0 || (teacherUsername1 != newUsername || teacherPassword1 != newPassword)) &&
                (teacherCount < 2 || (teacherUsername2 != newUsername || teacherPassword2 != newPassword)) &&
                (teacherCount < 3 || (teacherUsername3 != newUsername || teacherPassword3 != newPassword)) &&
                (teacherCount < 4 || (teacherUsername4 != newUsername || teacherPassword4 != newPassword)) &&
                (teacherCount < 5 || (teacherUsername5 != newUsername || teacherPassword5 != newPassword)))
            {
                if (teacherCount == 0)
                {
                    teacherUsername1 = newUsername;
                    teacherPassword1 = newPassword;
                    teacherCourse1 = (course == 1) ? "BSIT" : (course == 2) ? "BSENT"
                                                          : (course == 3)   ? "DICT"
                                                          : (course == 4)   ? "BSA"
                                                          : (course == 5)   ? "BSBA"
                                                                            : "Unknown";
                }
                else if (teacherCount == 1)
                {
                    teacherUsername2 = newUsername;
                    teacherPassword2 = newPassword;
                    teacherCourse2 = (course == 1) ? "BSIT" : (course == 2) ? "BSENT"
                                                          : (course == 3)   ? "DICT"
                                                          : (course == 4)   ? "BSA"
                                                          : (course == 5)   ? "BSBA"
                                                                            : "Unknown";
                }
                else if (teacherCount == 2)
                {
                    teacherUsername3 = newUsername;
                    teacherPassword3 = newPassword;
                    teacherCourse3 = (course == 1) ? "BSIT" : (course == 2) ? "BSENT"
                                                          : (course == 3)   ? "DICT"
                                                          : (course == 4)   ? "BSA"
                                                          : (course == 5)   ? "BSBA"
                                                                            : "Unknown";
                }
                else if (teacherCount == 3)
                {
                    teacherUsername4 = newUsername;
                    teacherPassword4 = newPassword;
                    teacherCourse4 = (course == 1) ? "BSIT" : (course == 2) ? "BSENT"
                                                          : (course == 3)   ? "DICT"
                                                          : (course == 4)   ? "BSA"
                                                          : (course == 5)   ? "BSBA"
                                                                            : "Unknown";
                }
                else if (teacherCount == 4)
                {
                    teacherUsername5 = newUsername;
                    teacherPassword5 = newPassword;
                    teacherCourse5 = (course == 1) ? "BSIT" : (course == 2) ? "BSENT"
                                                          : (course == 3)   ? "DICT"
                                                          : (course == 4)   ? "BSA"
                                                          : (course == 5)   ? "BSBA"
                                                                            : "Unknown";
                }
                teacherCount++;
                cout << "Teacher account created successfully.\n";
                goto admin_menu;
            }
            else
            {
                cout << "This username and password combination already exists or maximum teacher limit reached.\n";
            }
        }
        else
        {
            cout << "Invalid admin choice or maximum teacher limit reached.\n";
        }
        goto main_menu;
    }

    // Staff Login
    if ((username == staffUsername1 && password == staffPassword1) || (username == staffUsername2 && password == staffPassword2) || (username == staffUsername3 && password == staffPassword3))
    {

        cout << "Staff logged in successfully.\n";
       
        staffMenu:
        cout << "1. View student details" << endl;
        cout << "2. View employee Details" << endl;
        cout << "3. Logout" << endl;
        cout << "Enter your choice(1. 2. 3.): " << endl;
        int staffChoice = 0;
        cin >> staffChoice;

        if (staffChoice == 1)
        {
            goto studentDetails;
        }
        else if (staffChoice == 2)
        {
            goto employeeDetails;
        }
        else if (staffChoice == 3)
        {
            goto main_menu;
        }
        else
        {
            cout << "Invalid" << endl;
        }

    // Student Details
    studentDetails:
        cout << "test";
        return 0;

    // Employee details
    employeeDetails:
        cout << "Teachers and their courses:" << endl;
        cout << "1. Username: " << teacherUsername1 << ", Course: " << teacherCourse1 << endl;
        cout << "2. Username: " << teacherUsername2 << ", Course: " << teacherCourse2 << endl;
        cout << "3. Username: " << teacherUsername3 << ", Course: " << teacherCourse3 << endl;
        cout << "4. Username: " << teacherUsername4 << ", Course: " << teacherCourse4 << endl;
        cout << "5. Username: " << teacherUsername5 << ", Course: " << teacherCourse5 << endl;
        

        goto staffMenu;
    }

    // Teacher Login
    if ((username == teacherUsername1 && password == teacherPassword1) || (username == teacherUsername2 && password == teacherPassword2) || (username == teacherUsername3 && password == teacherPassword3) || (username == teacherUsername4 && password == teacherPassword4) || (username == teacherUsername5 && password == teacherPassword5))
    {
    teacher_menu:
        cout << "\nTeacher Menu:\n";
        cout << "1. Create Student Account\n";
        cout << "2. Logout\n";
        cout << "3. Student list\n";
        cout << "4. Grades\n";
        cout << "Enter your choice: ";
        int teacherChoice;
        cin >> teacherChoice;

        if (teacherChoice == 1 && studentCount < 50)
        { // Handling 50 students for BSIT
            string newUsername, newPassword, email, mobileNumber;
            cout << "Enter student username: ";
            cin >> newUsername;
            cout << "Enter student password: ";
            cin >> newPassword;
            cout << "Enter email: ";
            cin >> email;
            cout << "Enter Mobile Number: ";
            cin >> mobileNumber;

            if ((studentCount == 0 || (studentUsername1 != newUsername || studentPassword1 != newPassword)) && (studentCount < 2 || (studentUsername2 != newUsername || studentPassword2 != newPassword)) && (studentCount < 3 || (studentUsername3 != newUsername || studentPassword3 != newPassword)) && (studentCount < 4 || (studentUsername4 != newUsername || studentPassword4 != newPassword)) && (studentCount < 5 || (studentUsername5 != newUsername || studentPassword5 != newPassword)) && (studentCount < 6 || (studentUsername6 != newUsername || studentPassword6 != newPassword)) && (studentCount < 7 || (studentUsername7 != newUsername || studentPassword7 != newPassword)) && (studentCount < 8 || (studentUsername8 != newUsername || studentPassword8 != newPassword)) && (studentCount < 9 || (studentUsername9 != newUsername || studentPassword9 != newPassword)) && (studentCount < 10 || (studentUsername10 != newUsername || studentPassword10 != newPassword)) && (studentCount < 11 || (studentUsername11 != newUsername || studentPassword11 != newPassword)) && (studentCount < 12 || (studentUsername12 != newUsername || studentPassword12 != newPassword)) && (studentCount < 13 || (studentUsername13 != newUsername || studentPassword13 != newPassword)) && (studentCount < 14 || (studentUsername14 != newUsername || studentPassword14 != newPassword)) && (studentCount < 15 || (studentUsername15 != newUsername || studentPassword15 != newPassword)) && (studentCount < 16 || (studentUsername16 != newUsername || studentPassword16 != newPassword)) && (studentCount < 17 || (studentUsername17 != newUsername || studentPassword17 != newPassword)) && (studentCount < 18 || (studentUsername18 != newUsername || studentPassword18 != newPassword)) && (studentCount < 19 || (studentUsername19 != newUsername || studentPassword19 != newPassword)) && (studentCount < 20 || (studentUsername20 != newUsername || studentPassword20 != newPassword)) && (studentCount < 21 || (studentUsername21 != newUsername || studentPassword21 != newPassword)) && (studentCount < 22 || (studentUsername22 != newUsername || studentPassword22 != newPassword)) && (studentCount < 23 || (studentUsername23 != newUsername || studentPassword23 != newPassword)) && (studentCount < 24 || (studentUsername24 != newUsername || studentPassword24 != newPassword)) && (studentCount < 25 || (studentUsername25 != newUsername || studentPassword25 != newPassword)) && (studentCount < 26 || (studentUsername26 != newUsername || studentPassword26 != newPassword)) && (studentCount < 27 || (studentUsername27 != newUsername || studentPassword27 != newPassword)) && (studentCount < 28 || (studentUsername28 != newUsername || studentPassword28 != newPassword)) && (studentCount < 29 || (studentUsername29 != newUsername || studentPassword29 != newPassword)) && (studentCount < 30 || (studentUsername30 != newUsername || studentPassword30 != newPassword)) && (studentCount < 31 || (studentUsername31 != newUsername || studentPassword31 != newPassword)) && (studentCount < 32 || (studentUsername32 != newUsername || studentPassword32 != newPassword)) && (studentCount < 33 || (studentUsername33 != newUsername || studentPassword33 != newPassword)) && (studentCount < 34 || (studentUsername34 != newUsername || studentPassword34 != newPassword)) && (studentCount < 35 || (studentUsername35 != newUsername || studentPassword35 != newPassword)) && (studentCount < 36 || (studentUsername36 != newUsername || studentPassword36 != newPassword)) && (studentCount < 37 || (studentUsername37 != newUsername || studentPassword37 != newPassword)) && (studentCount < 38 || (studentUsername38 != newUsername || studentPassword38 != newPassword)) && (studentCount < 39 || (studentUsername39 != newUsername || studentPassword39 != newPassword)) && (studentCount < 40 || (studentUsername40 != newUsername || studentPassword40 != newPassword)) && (studentCount < 41 || (studentUsername41 != newUsername || studentPassword41 != newPassword)) && (studentCount < 42 || (studentUsername42 != newUsername || studentPassword42 != newPassword)) && (studentCount < 43 || (studentUsername43 != newUsername || studentPassword43 != newPassword)) && (studentCount < 44 || (studentUsername44 != newUsername || studentPassword44 != newPassword)) && (studentCount < 45 || (studentUsername45 != newUsername || studentPassword45 != newPassword)) && (studentCount < 46 || (studentUsername46 != newUsername || studentPassword46 != newPassword)) && (studentCount < 47 || (studentUsername47 != newUsername || studentPassword47 != newPassword)) && (studentCount < 48 || (studentUsername48 != newUsername || studentPassword48 != newPassword)) && (studentCount < 49 || (studentUsername49 != newUsername || studentPassword49 != newPassword)) && (studentCount < 50 || (studentUsername50 != newUsername || studentPassword50 != newPassword)))
            {
                if (studentCount == 0)
                {
                    studentUsername1 = newUsername;
                    studentPassword1 = newPassword;
                }
                else if (studentCount == 1)
                {
                    studentUsername2 = newUsername;
                    studentPassword2 = newPassword;
                }
                else if (studentCount == 2)
                {
                    studentUsername3 = newUsername;
                    studentPassword3 = newPassword;
                }
                else if (studentCount == 3)
                {
                    studentUsername4 = newUsername;
                    studentPassword4 = newPassword;
                }
                else if (studentCount == 4)
                {
                    studentUsername5 = newUsername;
                    studentPassword5 = newPassword;
                }
                else if (studentCount == 5)
                {
                    studentUsername6 = newUsername;
                    studentPassword6 = newPassword;
                }
                else if (studentCount == 6)
                {
                    studentUsername7 = newUsername;
                    studentPassword7 = newPassword;
                }
                else if (studentCount == 7)
                {
                    studentUsername8 = newUsername;
                    studentPassword8 = newPassword;
                }
                else if (studentCount == 8)
                {
                    studentUsername9 = newUsername;
                    studentPassword9 = newPassword;
                }
                else if (studentCount == 9)
                {
                    studentUsername10 = newUsername;
                    studentPassword10 = newPassword;
                }
                else if (studentCount == 10)
                {
                    studentUsername11 = newUsername;
                    studentPassword11 = newPassword;
                }
                else if (studentCount == 11)
                {
                    studentUsername12 = newUsername;
                    studentPassword12 = newPassword;
                }
                else if (studentCount == 12)
                {
                    studentUsername13 = newUsername;
                    studentPassword13 = newPassword;
                }
                else if (studentCount == 13)
                {
                    studentUsername14 = newUsername;
                    studentPassword14 = newPassword;
                }
                else if (studentCount == 14)
                {
                    studentUsername15 = newUsername;
                    studentPassword15 = newPassword;
                }
                else if (studentCount == 15)
                {
                    studentUsername16 = newUsername;
                    studentPassword16 = newPassword;
                }
                else if (studentCount == 16)
                {
                    studentUsername17 = newUsername;
                    studentPassword17 = newPassword;
                }
                else if (studentCount == 17)
                {
                    studentUsername18 = newUsername;
                    studentPassword18 = newPassword;
                }
                else if (studentCount == 18)
                {
                    studentUsername19 = newUsername;
                    studentPassword19 = newPassword;
                }
                else if (studentCount == 19)
                {
                    studentUsername20 = newUsername;
                    studentPassword20 = newPassword;
                }
                else if (studentCount == 20)
                {
                    studentUsername21 = newUsername;
                    studentPassword21 = newPassword;
                }
                else if (studentCount == 21)
                {
                    studentUsername22 = newUsername;
                    studentPassword22 = newPassword;
                }
                else if (studentCount == 22)
                {
                    studentUsername23 = newUsername;
                    studentPassword23 = newPassword;
                }
                else if (studentCount == 23)
                {
                    studentUsername24 = newUsername;
                    studentPassword24 = newPassword;
                }
                else if (studentCount == 24)
                {
                    studentUsername25 = newUsername;
                    studentPassword25 = newPassword;
                }
                else if (studentCount == 25)
                {
                    studentUsername26 = newUsername;
                    studentPassword26 = newPassword;
                }
                else if (studentCount == 26)
                {
                    studentUsername27 = newUsername;
                    studentPassword27 = newPassword;
                }
                else if (studentCount == 27)
                {
                    studentUsername28 = newUsername;
                    studentPassword28 = newPassword;
                }
                else if (studentCount == 28)
                {
                    studentUsername29 = newUsername;
                    studentPassword29 = newPassword;
                }
                else if (studentCount == 29)
                {
                    studentUsername30 = newUsername;
                    studentPassword30 = newPassword;
                }
                else if (studentCount == 30)
                {
                    studentUsername31 = newUsername;
                    studentPassword31 = newPassword;
                }
                else if (studentCount == 31)
                {
                    studentUsername32 = newUsername;
                    studentPassword32 = newPassword;
                }
                else if (studentCount == 32)
                {
                    studentUsername33 = newUsername;
                    studentPassword33 = newPassword;
                }
                else if (studentCount == 33)
                {
                    studentUsername34 = newUsername;
                    studentPassword34 = newPassword;
                }
                else if (studentCount == 34)
                {
                    studentUsername35 = newUsername;
                    studentPassword35 = newPassword;
                }
                else if (studentCount == 35)
                {
                    studentUsername36 = newUsername;
                    studentPassword36 = newPassword;
                }
                else if (studentCount == 36)
                {
                    studentUsername37 = newUsername;
                    studentPassword37 = newPassword;
                }
                else if (studentCount == 37)
                {
                    studentUsername38 = newUsername;
                    studentPassword38 = newPassword;
                }
                else if (studentCount == 38)
                {
                    studentUsername39 = newUsername;
                    studentPassword39 = newPassword;
                }
                else if (studentCount == 39)
                {
                    studentUsername40 = newUsername;
                    studentPassword40 = newPassword;
                }
                else if (studentCount == 40)
                {
                    studentUsername41 = newUsername;
                    studentPassword41 = newPassword;
                }
                else if (studentCount == 41)
                {
                    studentUsername42 = newUsername;
                    studentPassword42 = newPassword;
                }
                else if (studentCount == 42)
                {
                    studentUsername43 = newUsername;
                    studentPassword43 = newPassword;
                }
                else if (studentCount == 43)
                {
                    studentUsername44 = newUsername;
                    studentPassword44 = newPassword;
                }
                else if (studentCount == 44)
                {
                    studentUsername45 = newUsername;
                    studentPassword45 = newPassword;
                }
                else if (studentCount == 45)
                {
                    studentUsername46 = newUsername;
                    studentPassword46 = newPassword;
                }
                else if (studentCount == 46)
                {
                    studentUsername47 = newUsername;
                    studentPassword47 = newPassword;
                }
                else if (studentCount == 47)
                {
                    studentUsername48 = newUsername;
                    studentPassword48 = newPassword;
                }
                else if (studentCount == 48)
                {
                    studentUsername49 = newUsername;
                    studentPassword49 = newPassword;
                }
                else if (studentCount == 49)
                {
                    studentUsername50 = newUsername;
                    studentPassword50 = newPassword;
                }
                studentCount++;
                cout << "Student account created successfully.\n";
            }
            else
            {
                cout << "This username and password combination already exists.\n";
            }
            goto teacher_menu;
        }
        else if (teacherChoice == 1 && studentCount >= 50)
        {
            cout << "Maximum student accounts for this course reached.\n";
            goto teacher_menu;
        }
        else if (teacherChoice == 3)
        {
            cout << "Student list for this program\n";
            cout << studentUsername1 << endl;
            cout << studentUsername2 << endl;
            cout << studentUsername3 << endl;
            cout << studentUsername4 << endl;
            cout << studentUsername5 << endl;
            cout << studentUsername6 << endl;
            cout << studentUsername7 << endl;
            cout << studentUsername8 << endl;
            cout << studentUsername9 << endl;
            cout << studentUsername10 << endl;
            cout << studentUsername11 << endl;
            cout << studentUsername12 << endl;
            cout << studentUsername13 << endl;
            cout << studentUsername14 << endl;
            cout << studentUsername15 << endl;
            cout << studentUsername16 << endl;
            cout << studentUsername17 << endl;
            cout << studentUsername18 << endl;
            cout << studentUsername19 << endl;
            cout << studentUsername20 << endl;
            cout << studentUsername21 << endl;
            cout << studentUsername22 << endl;
            cout << studentUsername23 << endl;
            cout << studentUsername24 << endl;
            cout << studentUsername25 << endl;
            cout << studentUsername26 << endl;
            cout << studentUsername27 << endl;
            cout << studentUsername28 << endl;
            cout << studentUsername29 << endl;
            cout << studentUsername30 << endl;
            cout << studentUsername31 << endl;
            cout << studentUsername32 << endl;
            cout << studentUsername33 << endl;
            cout << studentUsername34 << endl;
            cout << studentUsername35 << endl;
            cout << studentUsername36 << endl;
            cout << studentUsername37 << endl;
            cout << studentUsername38 << endl;
            cout << studentUsername39 << endl;
            cout << studentUsername40 << endl;
            cout << studentUsername41 << endl;
            cout << studentUsername42 << endl;
            cout << studentUsername43 << endl;
            cout << studentUsername44 << endl;
            cout << studentUsername45 << endl;
            cout << studentUsername46 << endl;
            cout << studentUsername47 << endl;
            cout << studentUsername48 << endl;
            cout << studentUsername49 << endl;
            cout << studentUsername50 << endl;

            int goBack;
            cout << "press 1 to go back to menu; ";
            if (goBack == 1)
            {
                goto teacher_menu;
            }
            else
            {
                cout << "invalid input" << endl;
            }
        
        }
        else if (teacherChoice == 4)
        {
           double attendance;
           cout << "Attendance: ";
           cin >> attendance;

           double quiz;
           cout << "Quiz: ";
           cin >> quiz;

           double activity;
           cout << "Activity: ";
           cin >> activity;

           double project;
           cout << "Project: ";
           cin >> project;

           double majorExam;
           cout << "Major Examination: ";
           cin >> majorExam;
           
           cout << "Enter the student grade\n\n";
           cout << "Attendance: " << attendance << endl;
           cout << "Quiz: " << quiz << endl;
           cout << "Actitvity: " << activity<< endl;
           cout << "Major Exam: " << majorExam<< endl;
            
            double act1;
            double act2;
            float genAve;
            act1 = quiz + activity + project + attendance;
            act1 = act1 / 5;
            act2 = majorExam / 5;
            genAve = act1+act2;
            cout << "General Average: " << genAve << endl;
                     
        }
    }
    else {
    cout << "Invalid username or password. Please try again.\n";
    goto login;
    }
    return 0;
}