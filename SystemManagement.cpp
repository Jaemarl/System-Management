#include <iostream>

using namespace std;

int main()
{
    const int maxUsers = 10;
    const int maxLength = 50;
    char userData[maxUsers * (maxLength * 2 + 1)];
    int userCount = 0;
    int choice, i, j = 0;
    bool running = true;

    cout << "Welcome to the Student Management System" << endl;

    for (; running;)
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

            // Check if the entered username and password match any of the stored ones
            bool loginSuccess = false;
            for (j = 0; j < userCount; j++)
            {
                int index = j * (maxLength * 2 + 1);
                bool usernameMatch = true;
                bool passwordMatch = true;

                // Check username
                for (i = 0; i < maxLength; i++)
                {
                    if (userData[index + i] != username[i])
                    {
                        usernameMatch = false;
                        break;
                    }
                    if (userData[index + i] == '\0' && username[i] == '\0')
                        break;
                }

                // Check password
                for (i = 0; i < maxLength; i++)
                {
                    if (userData[index + maxLength + 1 + i] != password[i])
                    {
                        passwordMatch = false;
                        break;
                    }
                    if (userData[index + maxLength + 1 + i] == '\0' && password[i] == '\0')
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

                    // Process choice for signed-in user
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

                    // Exit signed-in loop
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

                int index = userCount * (maxLength * 2 + 1); // Calculate the start index for the new user's data block

                // Copy the new username into userData array
                for (i = 0; i < maxLength; i++)
                {
                    userData[index + i] = newUsername[i];
                    if (newUsername[i] == '\0')
                    {
                        break;
                    }
                }
                userData[index + maxLength] = ' '; // Delimiter between username and password

                // Copy the new password into userData array
                for (i = 0; i < maxLength; i++)
                {
                    userData[index + maxLength + 1 + i] = newPassword[i];
                    if (newPassword[i] == '\0')
                    {
                        break;
                    }
                }

                cout << "Sign up successful!" << endl;
                userCount++;
            }
            else
            {
                cout << "Sign up failed. No available slots." << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting..." << endl;
            running = false;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
