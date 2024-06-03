#include <iostream>
using namespace std;

int main()
{
    string adminUsername = "admin@";
    string adminPassword = "test";
    string username;
    string password;

    string staffUsernames[3];
    string staffPasswords[3];
    string teacherUsernames[5];
    string teacherPasswords[5];
    string studentUsernames[50 * 5];
    string studentPasswords[50 * 5];

    int staffCount, i = 0;
    int teacherCount = 0;
    int studentCount = 0;

    while (true)
    {
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
            break;
        }
        else if (mainChoice == 1)
        {
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;

            // Admin Login
            if (username == adminUsername && password == adminPassword)
            {
                int adminChoice;
                do
                {
                    cout << "\nAdmin Menu:\n";
                    cout << "1. Create Staff Account\n";
                    cout << "2. Create Teacher Account\n";
                    cout << "3. Logout\n";
                    cout << "Enter your choice: ";
                    cin >> adminChoice;

                    if (adminChoice == 1 && staffCount < 3)
                    {
                        cout << "Enter staff username: ";
                        cin >> staffUsernames[staffCount];
                        cout << "Enter staff password: ";
                        cin >> staffPasswords[staffCount];
                        staffCount++;
                        cout << "Staff account created successfully.\n";
                    }
                    else if (adminChoice == 1 && staffCount >= 3)
                    {
                        cout << "Maximum staff accounts reached.\n";
                    }
                    else if (adminChoice == 2 && teacherCount < 5)
                    {
                        cout << "Enter teacher username: ";
                        cin >> teacherUsernames[teacherCount];
                        cout << "Enter teacher password: ";
                        cin >> teacherPasswords[teacherCount];
                        teacherCount++;
                        cout << "Teacher account created successfully.\n";
                    }
                    else if (adminChoice == 2 && teacherCount >= 5)
                    {
                        cout << "Maximum teacher accounts reached.\n";
                    }
                    else if (adminChoice != 3)
                    {
                        cout << "Invalid choice, please try again.\n";
                    }
                } while (adminChoice != 3);
            }
            // Staff Login
            else
            {
                bool isStaff = false;
                for (i = 0; i < staffCount; i++)
                {
                    if (username == staffUsernames[i] && password == staffPasswords[i])
                    {
                        isStaff = true;
                        cout << "Staff logged in successfully.\n";
                        // Add staff-specific actions here if needed
                        break;
                    }
                }
                if (isStaff)
                    continue;

                // Teacher Login
                bool isTeacher = false;
                for (i = 0; i < teacherCount; i++)
                {
                    if (username == teacherUsernames[i] && password == teacherPasswords[i])
                    {
                        isTeacher = true;
                        int teacherChoice;
                        do
                        {
                            cout << "\nTeacher Menu:\n";
                            cout << "1. Create Student Account\n";
                            cout << "2. Logout\n";
                            cout << "Enter your choice: ";
                            cin >> teacherChoice;

                            if (teacherChoice == 1 && studentCount < 50 * 5)
                            {
                                cout << "Enter student username: ";
                                cin >> studentUsernames[studentCount];
                                cout << "Enter student password: ";
                                cin >> studentPasswords[studentCount];
                                studentCount++;
                                cout << "Student account created successfully.\n";
                            }
                            else if (teacherChoice == 1 && studentCount >= 50 * 5)
                            {
                                cout << "Maximum student accounts reached.\n";
                            }
                            else if (teacherChoice != 2)
                            {
                                cout << "Invalid choice, please try again.\n";
                            }
                        } while (teacherChoice != 2);
                        break;
                    }
                }
                if (isTeacher)
                    continue;

                // Student Login
                bool isStudent = false;
                for (i = 0; i < studentCount; i++)
                {
                    if (username == studentUsernames[i] && password == studentPasswords[i])
                    {
                        isStudent = true;
                        cout << "Student logged in successfully.\n";
                        // Add student-specific actions here if needed
                        break;
                    }
                }

                if (!isStudent)
                {
                    cout << "Invalid credentials, please try again.\n";
                }
            }
        }
        else
        {
            cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;
}
