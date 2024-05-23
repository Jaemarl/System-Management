#include <iostream>
using namespace std;

int main()
{
    const int maxLength = 50;
    const char retrievalCode[maxLength] = "123456";

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
    int choice, loginAttempts, i = 0;

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
            if (username[0] == username1[0] && password[0] == password1[0])
            {
                loginSuccess = true;
            }

            else if (username[0] == username2[0] && password[0] == password2[0])
            {
                loginSuccess = true;
            }
            else if (username[0] == username3[0] && password[0] == password3[0])
            {
                loginSuccess = true;
            }
            else if (username[0] == username4[0] && password[0] == password4[0])
            {
                loginSuccess = true;
            }
            else if (username[0] == username5[0] && password[0] == password5[0])
            {
                loginSuccess = true;
            }
            else if (username[0] == username6[0] && password[0] == password6[0])
            {
                loginSuccess = true;
            }
            else if (username[0] == username7[0] && password[0] == password7[0])
            {
                loginSuccess = true;
            }
            else if (username[0] == username8[0] && password[0] == password8[0])
            {
                loginSuccess = true;
            }
            else if (username[0] == username9[0] && password[0] == password9[0])
            {
                loginSuccess = true;
            }
            else if (username[0] == username10[0] && password[0] == password10[0])
            {
                loginSuccess = true;
            }

            if (loginSuccess)
            {
                cout << "Login successful!" << endl;
                loginAttempts = 0; // Reset login attempts on successful login

                for (bool signedIn = true; signedIn;)
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
                loginAttempts++;
                cout << "Invalid username or password. Attempt " << loginAttempts << " of 3." << endl;

                if (loginAttempts >= 3)
                {
                    char enteredCode[maxLength];
                    cout << "Maximum login attempts reached." << endl;
                    cout << "Enter the retrieval code to reset login attempts: ";
                    cin >> enteredCode;

                    bool codeMatch = true;
                    for (i = 0; i < maxLength; i++)
                    {
                        if (retrievalCode[i] != enteredCode[i])
                        {
                            codeMatch = false;
                            break;
                        }
                        if (retrievalCode[i] == '\0' && enteredCode[i] == '\0')
                        {
                            break;
                        }
                    }

                    if (codeMatch)
                    {
                        cout << "Retrieval code accepted. You can try logging in again." << endl;
                        loginAttempts = 0;
                    }
                    else
                    {
                        cout << "Invalid retrieval code. Exiting..." << endl;
                        running = false;
                    }
                }
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

                // Check if the username already exists
                bool usernameExists = false;
                if (newUsername[0] == username1[0] || newUsername[0] == username2[0] || newUsername[0] == username3[0] ||
                    newUsername[0] == username4[0] || newUsername[0] == username5[0] || newUsername[0] == username6[0] ||
                    newUsername[0] == username7[0] || newUsername[0] == username8[0] || newUsername[0] == username9[0] ||
                    newUsername[0] == username10[0])
                {
                    usernameExists = true;
                }

                if (!usernameExists)
                {
                    cout << "Enter new password: ";
                    cin >> newPassword;

                    if (userCount == 0)
                    {
                        username1[0] = newUsername[0];
                        password1[0] = newPassword[0];
                    }
                    else if (userCount == 1)
                    {
                        username2[0] = newUsername[0];
                        password2[0] = newPassword[0];
                    }
                    else if (userCount == 2)
                    {
                        username3[0] = newUsername[0];
                        password3[0] = newPassword[0];
                    }
                    else if (userCount == 3)

                    {
                        username4[0] = newUsername[0];
                        password4[0] = newPassword[0];
                    }
                    else if (userCount == 4)
                    {
                        username5[0] = newUsername[0];
                        password5[0] = newPassword[0];
                    }
                    else if (userCount == 5)
                    {
                        username6[0] = newUsername[0];
                        password6[0] = newPassword[0];
                    }
                    else if (userCount == 6)
                    {
                        username7[0] = newUsername[0];
                        password7[0] = newPassword[0];
                    }
                    else if (userCount == 7)
                    {
                        username8[0] = newUsername[0];
                        password8[0] = newPassword[0];
                    }
                    else if (userCount == 8)
                    {
                        username9[0] = newUsername[0];
                        password9[0] = newPassword[0];
                    }
                    else if (userCount == 9)
                    {
                        username10[0] = newUsername[0];
                        password10[0] = newPassword[0];
                    }

                    userCount++;
                    cout << "Sign up successful!" << endl;
                }
                else
                {
                    cout << "Username already exists. Please choose a different username." << endl;
                }
            }
            else
            {
                cout << "User limit reached. Cannot sign up more users." << endl;
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
