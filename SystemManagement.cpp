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
            char enteredUsername[maxLength];
            char enteredPassword[maxLength];

            cout << "Enter username: ";
            cin >> enteredUsername;

            cout << "Enter password: ";
            cin >> enteredPassword;

            bool loginSuccess = false;

            // Check each user individually
            if (username1[0] == enteredUsername[0] && password1[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username2[0] == enteredUsername[0] && password2[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username3[0] == enteredUsername[0] && password3[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username4[0] == enteredUsername[0] && password4[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username5[0] == enteredUsername[0] && password5[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username6[0] == enteredUsername[0] && password6[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username7[0] == enteredUsername[0] && password7[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username8[0] == enteredUsername[0] && password8[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username9[0] == enteredUsername[0] && password9[0] == enteredPassword[0])
            {
                loginSuccess = true;
            }
            else if (username10[0] == enteredUsername[0] && password10[0] == enteredPassword[0])
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

                    switch (choice)
                    {
                    case 1:
                        cout << "Viewing grades..." << endl;
                        break;
                    case 2:
                        cout << "Checking schedule..." << endl;
                        break;
                    case 3:
                        cout << "Checking school fee..." << endl;
                        break;
                    case 4:
                        cout << "Logging out..." << endl;
                        signedIn = false;
                        break;
                    default:
                        cout << "Invalid choice." << endl;
                        break;
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

                    // Store new account
                    switch (userCount)
                    {
                    case 0:
                        username1[0] = newUsername[0];
                        password1[0] = newPassword[0];
                        break;
                    case 1:
                        username2[0] = newUsername[0];
                        password2[0] = newPassword[0];
                        break;
                    case 2:
                        username3[0] = newUsername[0];
                        password3[0] = newPassword[0];
                        break;
                    case 3:
                        username4[0] = newUsername[0];
                        password4[0] = newPassword[0];
                        break;
                    case 4:
                        username5[0] = newUsername[0];
                        password5[0] = newPassword[0];
                        break;
                    case 5:
                        username6[0] = newUsername[0];
                        password6[0] = newPassword[0];
                        break;
                    case 6:
                        username7[0] = newUsername[0];
                        password7[0] = newPassword[0];
                        break;
                    case 7:
                        username8[0] = newUsername[0];
                        password8[0] = newPassword[0];
                        break;
                    case 8:
                        username9[0] = newUsername[0];
                        password9[0] = newPassword[0];
                        break;
                    case 9:
                        username10[0] = newUsername[0];
                        password10[0] = newPassword[0];
                        break;
                    default:
                        cout << "Maximum users reached." << endl;
                        break;
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
                cout << "Maximum users reached." << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting..." << endl;
            running = false;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
