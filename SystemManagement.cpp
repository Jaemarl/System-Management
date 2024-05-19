#include <iostream>
using namespace std;

int main()
{
    const int maxUsers = 10;
    const int maxLength = 50;
    const int bufferSize = maxUsers * (maxLength * 2 + 1);
    char userData[bufferSize];
    int userCount = 0;
    int choice, i, j, k = 0;

    // Initialize userData with null characters
    for (k = 0; k < bufferSize; k++)
    {
        userData[k] = '\0';
    }

    cout << "Welcome to the Student Management System" << endl;

    for (bool running = true; running;)
    {
        cout << "1. Sign in" << endl;
        cout << "2. Sign up" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            char username[maxLength];
            char password[maxLength];

            cout << "Enter username: ";
            cin >> username;

            cout << "Enter password: ";
            cin >> password;

            bool loginSuccess = false;
            int pos = 0;

            for (j = 0; j < userCount; j++)
            {
                bool usernameMatch = true;
                bool passwordMatch = true;
                int userPos = j * (maxLength * 2 + 1);

                // Check username
                for (i = 0; i < maxLength; i++)
                {
                    if (userData[userPos + i] != username[i])
                    {
                        usernameMatch = false;
                        break;
                    }
                    if (userData[userPos + i] == '\0' && username[i] == '\0')
                        break;
                }

                // Check password
                for (i = 0; i < maxLength; i++)
                {
                    if (userData[userPos + maxLength + 1 + i] != password[i])
                    {
                        passwordMatch = false;
                        break;
                    }
                    if (userData[userPos + maxLength + 1 + i] == '\0' && password[i] == '\0')
                        break;
                    }

                if (usernameMatch && passwordMatch)
                {
                    loginSuccess = true;
                    break;
                }
            }

            if (loginSuccess)
            {
                cout << "Login successful!" << endl;
                bool signedIn = true;

                for (; signedIn;)
                {
                    cout << "1. View grades" << endl;
                    cout << "2. Check schedule" << endl;
                    cout << "3. School fee" << endl;
                    cout << "4. Exit" << endl;
                    cout << "Enter your choice: ";
                    cin >> choice;

                    if (choice == 1)
                    {
                        cout << "Viewing grades..." << endl;
                    }
                    else if (choice == 2)
                    {
                        cout << "Checking schedule..." << endl;
                    }
                    else if (choice == 3)
                    {
                        cout << "Checking school fee..." << endl;
                    }
                    else if (choice == 4)
                    {
                        cout << "Logging out..." << endl;
                        signedIn = false;
                    }
                    else
                    {
                        cout << "Invalid choice." << endl;
                    }

                    if (!signedIn)
                    {
                        break;
                    }
                }
            }
            else
            {
                cout << "Invalid username or password." << endl;
            }
        }
        else if (choice == 2)
        {
            if (userCount < maxUsers)
            {
                char newUsername[maxLength];
                char newPassword[maxLength];

                cout << "Enter new username: ";
                cin >> newUsername;

                cout << "Enter new password: ";
                cin >> newPassword;

                int index = userCount * (maxLength * 2 + 1);

                // Copy new username
                for (i = 0; i < maxLength; i++)
                {
                    userData[index + i] = newUsername[i];
                    if (newUsername[i] == '\0')
                        break;
                }
                userData[index + maxLength] = ' ';

                // Copy new password
                for (i = 0; i < maxLength; i++)
                {
                    userData[index + maxLength + 1 + i] = newPassword[i];
                    if (newPassword[i] == '\0')
                        break;
                }

                userCount++;
                cout << "Sign up successful!" << endl;
            }
            else
            {
                cout << "Sign up failed. No available slots." << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Closing. Please wait a moment." << endl;
            running = false;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
