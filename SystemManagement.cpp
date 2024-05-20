#include <iostream>
using namespace std;

int main()
{
    const int maxLength = 50;

    // User storage
    char username1[maxLength] = "\0", password1[maxLength] = "\0";
    char username2[maxLength] = "\0", password2[maxLength] = "\0";
    char username3[maxLength] = "\0", password3[maxLength] = "\0";
    char username4[maxLength] = "\0", password4[maxLength] = "\0";
    char username5[maxLength] = "\0", password5[maxLength] = "\0";
    char username6[maxLength] = "\0", password6[maxLength] = "\0";
    char username7[maxLength] = "\0", password7[maxLength] = "\0";
    char username8[maxLength] = "\0", password8[maxLength] = "\0";
    char username9[maxLength] = "\0", password9[maxLength] = "\0";
    char username10[maxLength] = "\0", password10[maxLength] = "\0";

    int userCount = 0;
    int choice, i;

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

            // Check each user individually
            if ((username[0] != '\0' && username1[0] != '\0') &&
                (username1[0] == username[0] && username1[1] == username[1] && username1[2] == username[2]) &&
                (password1[0] == password[0] && password1[1] == password[1] && password1[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username2[0] != '\0') &&
                     (username2[0] == username[0] && username2[1] == username[1] && username2[2] == username[2]) &&
                     (password2[0] == password[0] && password2[1] == password[1] && password2[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username3[0] != '\0') &&
                     (username3[0] == username[0] && username3[1] == username[1] && username3[2] == username[2]) &&
                     (password3[0] == password[0] && password3[1] == password[1] && password3[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username4[0] != '\0') &&
                     (username4[0] == username[0] && username4[1] == username[1] && username4[2] == username[2]) &&
                     (password4[0] == password[0] && password4[1] == password[1] && password4[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username5[0] != '\0') &&
                     (username5[0] == username[0] && username5[1] == username[1] && username5[2] == username[2]) &&
                     (password5[0] == password[0] && password5[1] == password[1] && password5[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username6[0] != '\0') &&
                     (username6[0] == username[0] && username6[1] == username[1] && username6[2] == username[2]) &&
                     (password6[0] == password[0] && password6[1] == password[1] && password6[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username7[0] != '\0') &&
                     (username7[0] == username[0] && username7[1] == username[1] && username7[2] == username[2]) &&
                     (password7[0] == password[0] && password7[1] == password[1] && password7[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username8[0] != '\0') &&
                     (username8[0] == username[0] && username8[1] == username[1] && username8[2] == username[2]) &&
                     (password8[0] == password[0] && password8[1] == password[1] && password8[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username9[0] != '\0') &&
                     (username9[0] == username[0] && username9[1] == username[1] && username9[2] == username[2]) &&
                     (password9[0] == password[0] && password9[1] == password[1] && password9[2] == password[2]))
            {
                loginSuccess = true;
            }
            else if ((username[0] != '\0' && username10[0] != '\0') &&
                     (username10[0] == username[0] && username10[1] == username[1] && username10[2] == username[2]) &&
                     (password10[0] == password[0] && password10[1] == password[1] && password10[2] == password[2]))
            {
                loginSuccess = true;
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
                    cout << "4. Logout" << endl;
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
                }
            }
            else
            {
                cout << "Invalid username or password." << endl;
            }
        }
        else if (choice == 2)
        {
            if (userCount < 10)
            {
                char newUsername[maxLength];
                char newPassword[maxLength];

                cout << "Enter new username: ";
                cin >> newUsername;

                cout << "Enter new password: ";
                cin >> newPassword;

                if (userCount == 0)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username1[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password1[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 1)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username2[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password2[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 2)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username3[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password3[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 3)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username4[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password4[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 4)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username5[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password5[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 5)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username6[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password6[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 6)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username7[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password7[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 7)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username8[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password8[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 8)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username9[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password9[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
                }
                else if (userCount == 9)
                {
                    for (i = 0; i < maxLength; i++)
                    {
                        username10[i] = newUsername[i];
                        if (newUsername[i] == '\0')
                            break;
                    }
                    for (i = 0; i < maxLength; i++)
                    {
                        password10[i] = newPassword[i];
                        if (newPassword[i] == '\0')
                            break;
                    }
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
