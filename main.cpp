#include <iostream>
using namespace std;

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
    string Email1, Email2, Email3;
    int age1= 0, age2 = 0 , age3 = 0 ;

    // Variables to store usernames and passwords for teachers
    string teacherUsername1, teacherPassword1;
    string teacherUsername2, teacherPassword2;
    string teacherUsername3, teacherPassword3;
    string teacherUsername4, teacherPassword4;
    string teacherUsername5, teacherPassword5;
    string TEmail1, TEmail2, TEmail3, TEmail4, TEmail5;
    int Tage1 = 0, Tage2 = 0, Tage3= 0 , Tage4 = 0, Tage5 = 0 ;
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
    string studentUsername51, studentPassword51;
    string studentUsername52, studentPassword52;
    string studentUsername53, studentPassword53;
    string studentUsername54, studentPassword54;
    string studentUsername55, studentPassword55;
    string studentUsername56, studentPassword56;
    string studentUsername57, studentPassword57;
    string studentUsername58, studentPassword58;
    string studentUsername59, studentPassword59;
    string studentUsername60, studentPassword60;
    string studentUsername61, studentPassword61;
    string studentUsername62, studentPassword62;
    string studentUsername63, studentPassword63;
    string studentUsername64, studentPassword64;
    string studentUsername65, studentPassword65;
    string studentUsername66, studentPassword66;
    string studentUsername67, studentPassword67;
    string studentUsername68, studentPassword68;
    string studentUsername69, studentPassword69;
    string studentUsername70, studentPassword70;
    string studentUsername71, studentPassword71;
    string studentUsername72, studentPassword72;
    string studentUsername73, studentPassword73;
    string studentUsername74, studentPassword74;
    string studentUsername75, studentPassword75;
    string studentUsername76, studentPassword76;
    string studentUsername77, studentPassword77;
    string studentUsername78, studentPassword78;
    string studentUsername79, studentPassword79;
    string studentUsername80, studentPassword80;
    string studentUsername81, studentPassword81;
    string studentUsername82, studentPassword82;
    string studentUsername83, studentPassword83;
    string studentUsername84, studentPassword84;
    string studentUsername85, studentPassword85;
    string studentUsername86, studentPassword86;
    string studentUsername87, studentPassword87;
    string studentUsername88, studentPassword88;
    string studentUsername89, studentPassword89;
    string studentUsername90, studentPassword90;
    string studentUsername91, studentPassword91;
    string studentUsername92, studentPassword92;
    string studentUsername93, studentPassword93;
    string studentUsername94, studentPassword94;
    string studentUsername95, studentPassword95;
    string studentUsername96, studentPassword96;
    string studentUsername97, studentPassword97;
    string studentUsername98, studentPassword98;
    string studentUsername99, studentPassword99;
    string studentUsername100, studentPassword100;

    string studentUsername101, studentPassword101;
    string studentUsername102, studentPassword102;
    string studentUsername103, studentPassword103;
    string studentUsername104, studentPassword104;
    string studentUsername105, studentPassword105;
    string studentUsername106, studentPassword106;
    string studentUsername107, studentPassword107;
    string studentUsername108, studentPassword108;
    string studentUsername109, studentPassword109;
    string studentUsername110, studentPassword110;
    string studentUsername111, studentPassword111;
    string studentUsername112, studentPassword112;
    string studentUsername113, studentPassword113;
    string studentUsername114, studentPassword114;
    string studentUsername115, studentPassword115;
    string studentUsername116, studentPassword116;
    string studentUsername117, studentPassword117;
    string studentUsername118, studentPassword118;
    string studentUsername119, studentPassword119;
    string studentUsername120, studentPassword120;
    string studentUsername121, studentPassword121;
    string studentUsername122, studentPassword122;
    string studentUsername123, studentPassword123;
    string studentUsername124, studentPassword124;
    string studentUsername125, studentPassword125;
    string studentUsername126, studentPassword126;
    string studentUsername127, studentPassword127;
    string studentUsername128, studentPassword128;
    string studentUsername129, studentPassword129;
    string studentUsername130, studentPassword130;
    string studentUsername131, studentPassword131;
    string studentUsername132, studentPassword132;
    string studentUsername133, studentPassword133;
    string studentUsername134, studentPassword134;
    string studentUsername135, studentPassword135;
    string studentUsername136, studentPassword136;
    string studentUsername137, studentPassword137;
    string studentUsername138, studentPassword138;
    string studentUsername139, studentPassword139;
    string studentUsername140, studentPassword140;
    string studentUsername141, studentPassword141;
    string studentUsername142, studentPassword142;
    string studentUsername143, studentPassword143;
    string studentUsername144, studentPassword144;
    string studentUsername145, studentPassword145;
    string studentUsername146, studentPassword146;
    string studentUsername147, studentPassword147;
    string studentUsername148, studentPassword148;
    string studentUsername149, studentPassword149;
    string studentUsername150, studentPassword150;
    string studentUsername151, studentPassword151;
    string studentUsername152, studentPassword152;
    string studentUsername153, studentPassword153;
    string studentUsername154, studentPassword154;
    string studentUsername155, studentPassword155;
    string studentUsername156, studentPassword156;
    string studentUsername157, studentPassword157;
    string studentUsername158, studentPassword158;
    string studentUsername159, studentPassword159;
    string studentUsername160, studentPassword160;
    string studentUsername161, studentPassword161;
    string studentUsername162, studentPassword162;
    string studentUsername163, studentPassword163;
    string studentUsername164, studentPassword164;
    string studentUsername165, studentPassword165;
    string studentUsername166, studentPassword166;
    string studentUsername167, studentPassword167;
    string studentUsername168, studentPassword168;
    string studentUsername169, studentPassword169;
    string studentUsername170, studentPassword170;
    string studentUsername171, studentPassword171;
    string studentUsername172, studentPassword172;
    string studentUsername173, studentPassword173;
    string studentUsername174, studentPassword174;
    string studentUsername175, studentPassword175;
    string studentUsername176, studentPassword176;
    string studentUsername177, studentPassword177;
    string studentUsername178, studentPassword178;
    string studentUsername179, studentPassword179;
    string studentUsername180, studentPassword180;
    string studentUsername181, studentPassword181;
    string studentUsername182, studentPassword182;
    string studentUsername183, studentPassword183;
    string studentUsername184, studentPassword184;
    string studentUsername185, studentPassword185;
    string studentUsername186, studentPassword186;
    string studentUsername187, studentPassword187;
    string studentUsername188, studentPassword188;
    string studentUsername189, studentPassword189;
    string studentUsername190, studentPassword190;
    string studentUsername191, studentPassword191;
    string studentUsername192, studentPassword192;
    string studentUsername193, studentPassword193;
    string studentUsername194, studentPassword194;
    string studentUsername195, studentPassword195;
    string studentUsername196, studentPassword196;
    string studentUsername197, studentPassword197;
    string studentUsername198, studentPassword198;
    string studentUsername199, studentPassword199;
    string studentUsername200, studentPassword200;
    string studentUsername201, studentPassword201;
    string studentUsername202, studentPassword202;
    string studentUsername203, studentPassword203;
    string studentUsername204, studentPassword204;
    string studentUsername205, studentPassword205;
    string studentUsername206, studentPassword206;
    string studentUsername207, studentPassword207;
    string studentUsername208, studentPassword208;
    string studentUsername209, studentPassword209;
    string studentUsername210, studentPassword210;
    string studentUsername211, studentPassword211;
    string studentUsername212, studentPassword212;
    string studentUsername213, studentPassword213;
    string studentUsername214, studentPassword214;
    string studentUsername215, studentPassword215;
    string studentUsername216, studentPassword216;
    string studentUsername217, studentPassword217;
    string studentUsername218, studentPassword218;
    string studentUsername219, studentPassword219;
    string studentUsername220, studentPassword220;
    string studentUsername221, studentPassword221;
    string studentUsername222, studentPassword222;
    string studentUsername223, studentPassword223;
    string studentUsername224, studentPassword224;
    string studentUsername225, studentPassword225;
    string studentUsername226, studentPassword226;
    string studentUsername227, studentPassword227;
    string studentUsername228, studentPassword228;
    string studentUsername229, studentPassword229;
    string studentUsername230, studentPassword230;
    string studentUsername231, studentPassword231;
    string studentUsername232, studentPassword232;
    string studentUsername233, studentPassword233;
    string studentUsername234, studentPassword234;
    string studentUsername235, studentPassword235;
    string studentUsername236, studentPassword236;
    string studentUsername237, studentPassword237;
    string studentUsername238, studentPassword238;
    string studentUsername239, studentPassword239;
    string studentUsername240, studentPassword240;
    string studentUsername241, studentPassword241;
    string studentUsername242, studentPassword242;
    string studentUsername243, studentPassword243;
    string studentUsername244, studentPassword244;
    string studentUsername245, studentPassword245;
    string studentUsername246, studentPassword246;
    string studentUsername247, studentPassword247;
    string studentUsername248, studentPassword248;
    string studentUsername249, studentPassword249;
    string studentUsername250, studentPassword250;

    // Variables to keep track of how many accounts have been created
    int staffCount = 0;
    int teacherCount = 0;
    int studentCount = 0;

main_menu:
Login:
    string input;
    int mainChoice;

    while (true)
    {
        cout << "Student Management System\n\n";
        cout << "1. Login\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> input;
        system("cls");

        if (input == "1")
        {
            cout << "Proceeding to login...\n";
            break; // Exit the loop to proceed with login
        }
        else if (input == "2")
        {
            cout << "Exiting the program.\n";
            return 0;
        }
        else
        {
            cout << "Invalid choice, please try again.\n\n";
        }
    }

login:
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    if (username == adminUsername && password == adminPassword)
    {

        while (true)
        {
        admin_menu:
        adminmenu:
            string adminChoice;
            cout << "\nAdmin Menu:\n";
            cout << "1. Create Staff Account\n";
            cout << "2. Create Teacher Account\n";
            cout << "3. View Employee list" << endl;
            cout << "4. Logout\n";
            cout << "Enter your choice: ";
            cin >> adminChoice;
            system("cls");

            if (adminChoice == "1" && staffCount < 3)
            {
                string newUsername, newPassword, Email;
                int age;
                while (true)
                {
                    cout << "Email: ";

                    cin >> Email;
                    size_t atPosition = Email.find('@');
                    if (atPosition != -1 && atPosition != 0 && atPosition != Email.length() - 1)
                    {
                        break;
                    }
                    else
                    {
                        cout << "Invalid Email address. Please try again (should include '@'). \n";
                    }
                }
                    cout << "Age: ";
                    while (!(cin >> age) || age < 1 || age > 100) {
           cin.clear(); // Napanood ko to sa YT sabi ni-rereset nito yung error para makapg-input ule yung user
           cin.ignore(1000, '\n'); // Purpose naman nito is to ignore such characters that ain't integers
           cout << "Invalid input. Please enter a valid age (1-100): ";
             }
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
                        Email1 = Email;
                        age1 = age;
                    }
                    else if (staffCount == 1)
                    {
                        staffUsername2 = newUsername;
                        staffPassword2 = newPassword;
                        Email2 = Email;
                        age2 = age;
                    }
                    else if (staffCount == 2)
                    {
                        staffUsername3 = newUsername;
                        staffPassword3 = newPassword;
                        Email3 = Email;
                        age3 = age;
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
            else if (adminChoice == "1" && staffCount >= 3)
            {
                cout << "Maximum staff accounts reached.\n";
                goto admin_menu;
            }
            else if (adminChoice == "2" && teacherCount < 5)
            {
                string newUsername, newPassword, TEmail;
                int course, Tage;
                bool courseAssigned = false;
                while (true)
                {
                    cout << "Email: ";

                    cin >> TEmail;
                    size_t atPosition = TEmail.find('@');
                    if (atPosition != -1 && atPosition != 0 && atPosition != TEmail.length() - 1)
                    {
                        break;
                    }
                    else
                    {
                        cout << "Invalid Email address. Please try again (should include '@'). \n";
                    }
                }
                    cout << "Age: ";
                      while (!(cin >> Tage) || Tage < 1 || Tage > 100) {
           cin.clear(); // Napanood ko to sa YT sabi ni-rereset nito yung error para makapg-input ule yung user
           cin.ignore(1000, '\n'); // Purpose naman nito is to ignore such characters that ain't integers
           cout << "Invalid input. Please enter a valid age (1-100): ";

                }
                cout << "Enter teacher username: ";
                cin >> newUsername;
                cout << "Enter teacher password: ";
                cin >> newPassword;
                cout << "Select which program to assign: " << endl;
                cout << "1. BSIT\n2. BSENT\n3. DICT\n4. BSA\n5. BSBA" << endl;
                cin >> course;
                system("cls");

                courseAssigned = (course == 1 && (teacherCourse1 == "BSIT" || teacherCourse2 == "BSIT" || teacherCourse3 == "BSIT" || teacherCourse4 == "BSIT" || teacherCourse5 == "BSIT")) ||
                                 (course == 2 && (teacherCourse1 == "BSENT" || teacherCourse2 == "BSENT" || teacherCourse3 == "BSENT" || teacherCourse4 == "BSENT" || teacherCourse5 == "BSENT")) ||
                                 (course == 3 && (teacherCourse1 == "DICT" || teacherCourse2 == "DICT" || teacherCourse3 == "DICT" || teacherCourse4 == "DICT" || teacherCourse5 == "DICT")) ||
                                 (course == 4 && (teacherCourse1 == "BSA" || teacherCourse2 == "BSA" || teacherCourse3 == "BSA" || teacherCourse4 == "BSA" || teacherCourse5 == "BSA")) ||
                                 (course == 5 && (teacherCourse1 == "BSBA" || teacherCourse2 == "BSBA" || teacherCourse3 == "BSBA" || teacherCourse4 == "BSBA" || teacherCourse5 == "BSBA"));

                if (courseAssigned)
                {
                    cout << "This course is already assigned to another teacher.\n";
                    goto admin_menu;
                }

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
                        TEmail1 = TEmail;
                        Tage1 = Tage;
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
                        TEmail2 = TEmail;
                        Tage2 = Tage;
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
                        TEmail3 = TEmail;
                        Tage3 = Tage;
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
                        TEmail4 = TEmail;
                        Tage4 = Tage;
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
                        TEmail5 = TEmail;
                        Tage5 = Tage;
                        teacherCourse5 = (course == 1) ? "BSIT" : (course == 2) ? "BSENT"
                                                              : (course == 3)   ? "DICT"
                                                              : (course == 4)   ? "BSA"
                                                              : (course == 5)   ? "BSBA"
                                                                                : "Unknown";
                    }
                    teacherCount++;
                    cout << "Teacher account created successfully.\n";
                }
                else
                {
                    cout << "This username and password combination already exists or maximum teacher limit reached.\n";
                }
            }
            else if (adminChoice == "3")
            {
            adminChoice3:
                string choice;
                string goBack1;
                cout << "1. Staffs" << endl;
                cout << "2. Teachers." << endl;
                cout << "3. Go back..." << endl;
                cin >> choice;
                system("cls");
                if (choice == "1")
                {
                    cout << "1. Username: " << staffUsername1 << "\n   Age: " << age1 << "\n   Email: " << Email1 << endl;
                    cout << "2. Username: " << staffUsername2 << "\n   Age: " << age2 << "\n   Email: " << Email2 << endl;
                    cout << "3. Username: " << staffUsername3 << "\n   Age: " << age3 << "\n   Email: " << Email3 << endl;
                    cout << "Y. Go back..." << endl;
                    cin >> goBack1;
                    system("cls");
                    if (goBack1 == "y" || "Y")
                    {
                        goto adminChoice3;
                    }
                }
                else if (choice == "2")
                {
                    cout << "Teachers and their courses:" << endl;
                    cout << "1. Username: " << teacherUsername1 << ", Course: " << teacherCourse1 << "\n   Age: " << Tage1 << "\n   Email: " << TEmail1 << endl;
                    cout << "2. Username: " << teacherUsername2 << ", Course: " << teacherCourse2 << "\n   Age: " << Tage2 << "\n   Email: " << TEmail2 << endl;
                    cout << "3. Username: " << teacherUsername3 << ", Course: " << teacherCourse3 << "\n   Age: " << Tage3 << "\n   Email: " << TEmail3 << endl;
                    cout << "4. Username: " << teacherUsername4 << ", Course: " << teacherCourse4 << "\n   Age: " << Tage4 << "\n   Email: " << TEmail4 << endl;
                    cout << "5. Username: " << teacherUsername5 << ", Course: " << teacherCourse5 << "\n   Age: " << Tage5 << "\n   Email: " << TEmail5 << endl;

                    cout << "Y. Go back..." << endl;
                    cin >> goBack1;
                    system("cls");
                    if (goBack1 == "y" || "Y")
                    {
                        goto adminChoice3;
                    }
                }
                else if (choice == "3")
                {
                    goto admin_menu;
                }
                else
                {
                    cout << "Invalid choice." << endl;
                    goto adminChoice3;
                }
            }
            else if (adminChoice == "4")
            {
                goto Login;
            }
            else
            {
                cout << "Invalid admin choice.\n";
                goto admin_menu;
            }
        }
    }
         // Staff Login 1
    if (username == staffUsername1 && password == staffPassword1)
    {
    staffMenu1:
        string staffChoice1;
        cout << "Staff logged in successfully.\n";
        cout << "1. View Employee details(Teachers)." << endl;
        cout << "2. View Student details." << endl;
        cout << "3. Logout" << endl;
        cout << "Input:" ;
        cin >> staffChoice1 ;

        if (staffChoice1 == "1")
        {
            viewdetail1 :
            string staffChoiceInside;
            cout << "Teachers and their courses:" << endl;
            cout << "1. Username: " << teacherUsername1 << ", Course: " << teacherCourse1 << endl;
            cout << "2. Username: " << teacherUsername2 << ", Course: " << teacherCourse2 << endl;
            cout << "3. Username: " << teacherUsername3 << ", Course: " << teacherCourse3 << endl;
            cout << "4. Username: " << teacherUsername4 << ", Course: " << teacherCourse4 << endl;
            cout << "5. Username: " << teacherUsername5 << ", Course: " << teacherCourse5 << endl;
            cout << "Enter 1 to redirect to menu" << endl ;
            cout << "Enter input:"  ;
            cin >> staffChoiceInside ;
            if (staffChoiceInside == "1")
            {
                cout << "Go back..." << endl;
                goto staffMenu1;
            }
            else{
                    system("cls") ;
                cout << "Invalid input" ;
            goto viewdetail1 ;
            }
        }
        else if (staffChoice1 == "2")
        {
        course1:
            string selectCourse;
            cout << "Courses" << endl;
            cout << "1. BSIT\n2. BSENT\n3. DICT\n4. BSA\n5. BSBA" << endl;
            cin >> selectCourse;
            if (selectCourse == "1")
            {
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
            }
            else if (selectCourse == "2")
            {
                cout << studentUsername51 << endl;
                cout << studentUsername52 << endl;
                cout << studentUsername53 << endl;
                cout << studentUsername54 << endl;
                cout << studentUsername55 << endl;
                cout << studentUsername56 << endl;
                cout << studentUsername57 << endl;
                cout << studentUsername58 << endl;
                cout << studentUsername59 << endl;
                cout << studentUsername60 << endl;
                cout << studentUsername61 << endl;
                cout << studentUsername62 << endl;
                cout << studentUsername63 << endl;
                cout << studentUsername64 << endl;
                cout << studentUsername65 << endl;
                cout << studentUsername66 << endl;
                cout << studentUsername67 << endl;
                cout << studentUsername68 << endl;
                cout << studentUsername69 << endl;
                cout << studentUsername70 << endl;
                cout << studentUsername71 << endl;
                cout << studentUsername72 << endl;
                cout << studentUsername73 << endl;
                cout << studentUsername74 << endl;
                cout << studentUsername75 << endl;
                cout << studentUsername76 << endl;
                cout << studentUsername77 << endl;
                cout << studentUsername78 << endl;
                cout << studentUsername79 << endl;
                cout << studentUsername80 << endl;
                cout << studentUsername81 << endl;
                cout << studentUsername82 << endl;
                cout << studentUsername83 << endl;
                cout << studentUsername84 << endl;
                cout << studentUsername85 << endl;
                cout << studentUsername86 << endl;
                cout << studentUsername87 << endl;
                cout << studentUsername88 << endl;
                cout << studentUsername89 << endl;
                cout << studentUsername90 << endl;
                cout << studentUsername91 << endl;
                cout << studentUsername92 << endl;
                cout << studentUsername93 << endl;
                cout << studentUsername94 << endl;
                cout << studentUsername95 << endl;
                cout << studentUsername96 << endl;
                cout << studentUsername97 << endl;
                cout << studentUsername98 << endl;
                cout << studentUsername99 << endl;
                cout << studentUsername100 << endl;
            }
            else if (selectCourse == "3")
            {
                cout << studentUsername101 << endl;
                cout << studentUsername102 << endl;
                cout << studentUsername103 << endl;
                cout << studentUsername104 << endl;
                cout << studentUsername105 << endl;
                cout << studentUsername106 << endl;
                cout << studentUsername107 << endl;
                cout << studentUsername108 << endl;
                cout << studentUsername109 << endl;
                cout << studentUsername110 << endl;
                cout << studentUsername111 << endl;
                cout << studentUsername112 << endl;
                cout << studentUsername113 << endl;
                cout << studentUsername114 << endl;
                cout << studentUsername115 << endl;
                cout << studentUsername116 << endl;
                cout << studentUsername117 << endl;
                cout << studentUsername118 << endl;
                cout << studentUsername119 << endl;
                cout << studentUsername120 << endl;
                cout << studentUsername121 << endl;
                cout << studentUsername122 << endl;
                cout << studentUsername123 << endl;
                cout << studentUsername124 << endl;
                cout << studentUsername125 << endl;
                cout << studentUsername126 << endl;
                cout << studentUsername127 << endl;
                cout << studentUsername128 << endl;
                cout << studentUsername129 << endl;
                cout << studentUsername130 << endl;
                cout << studentUsername131 << endl;
                cout << studentUsername132 << endl;
                cout << studentUsername133 << endl;
                cout << studentUsername134 << endl;
                cout << studentUsername135 << endl;
                cout << studentUsername136 << endl;
                cout << studentUsername137 << endl;
                cout << studentUsername138 << endl;
                cout << studentUsername139 << endl;
                cout << studentUsername140 << endl;
                cout << studentUsername141 << endl;
                cout << studentUsername142 << endl;
                cout << studentUsername143 << endl;
                cout << studentUsername144 << endl;
                cout << studentUsername145 << endl;
                cout << studentUsername146 << endl;
                cout << studentUsername147 << endl;
                cout << studentUsername148 << endl;
                cout << studentUsername149 << endl;
                cout << studentUsername150 << endl;
            }
            else if (selectCourse == "4")
            {
                cout << studentUsername151 << endl;
                cout << studentUsername152 << endl;
                cout << studentUsername153 << endl;
                cout << studentUsername154 << endl;
                cout << studentUsername155 << endl;
                cout << studentUsername156 << endl;
                cout << studentUsername157 << endl;
                cout << studentUsername158 << endl;
                cout << studentUsername159 << endl;
                cout << studentUsername160 << endl;
                cout << studentUsername161 << endl;
                cout << studentUsername162 << endl;
                cout << studentUsername163 << endl;
                cout << studentUsername164 << endl;
                cout << studentUsername165 << endl;
                cout << studentUsername166 << endl;
                cout << studentUsername167 << endl;
                cout << studentUsername168 << endl;
                cout << studentUsername169 << endl;
                cout << studentUsername170 << endl;
                cout << studentUsername171 << endl;
                cout << studentUsername172 << endl;
                cout << studentUsername173 << endl;
                cout << studentUsername174 << endl;
                cout << studentUsername175 << endl;
                cout << studentUsername176 << endl;
                cout << studentUsername177 << endl;
                cout << studentUsername178 << endl;
                cout << studentUsername179 << endl;
                cout << studentUsername180 << endl;
                cout << studentUsername181 << endl;
                cout << studentUsername182 << endl;
                cout << studentUsername183 << endl;
                cout << studentUsername184 << endl;
                cout << studentUsername185 << endl;
                cout << studentUsername186 << endl;
                cout << studentUsername187 << endl;
                cout << studentUsername188 << endl;
                cout << studentUsername189 << endl;
                cout << studentUsername190 << endl;
                cout << studentUsername191 << endl;
                cout << studentUsername192 << endl;
                cout << studentUsername193 << endl;
                cout << studentUsername194 << endl;
                cout << studentUsername195 << endl;
                cout << studentUsername196 << endl;
                cout << studentUsername197 << endl;
                cout << studentUsername198 << endl;
                cout << studentUsername199 << endl;
                cout << studentUsername200 << endl;
            }
            else if (selectCourse == "5")
            {
                cout << studentUsername201 << endl;
                cout << studentUsername202 << endl;
                cout << studentUsername203 << endl;
                cout << studentUsername204 << endl;
                cout << studentUsername205 << endl;
                cout << studentUsername206 << endl;
                cout << studentUsername207 << endl;
                cout << studentUsername208 << endl;
                cout << studentUsername209 << endl;
                cout << studentUsername210 << endl;
                cout << studentUsername211 << endl;
                cout << studentUsername212 << endl;
                cout << studentUsername213 << endl;
                cout << studentUsername214 << endl;
                cout << studentUsername215 << endl;
                cout << studentUsername216 << endl;
                cout << studentUsername217 << endl;
                cout << studentUsername218 << endl;
                cout << studentUsername219 << endl;
                cout << studentUsername220 << endl;
                cout << studentUsername221 << endl;
                cout << studentUsername222 << endl;
                cout << studentUsername223 << endl;
                cout << studentUsername224 << endl;
                cout << studentUsername225 << endl;
                cout << studentUsername226 << endl;
                cout << studentUsername227 << endl;
                cout << studentUsername228 << endl;
                cout << studentUsername229 << endl;
                cout << studentUsername230 << endl;
                cout << studentUsername231 << endl;
                cout << studentUsername232 << endl;
                cout << studentUsername233 << endl;
                cout << studentUsername234 << endl;
                cout << studentUsername235 << endl;
                cout << studentUsername236 << endl;
                cout << studentUsername237 << endl;
                cout << studentUsername238 << endl;
                cout << studentUsername239 << endl;
                cout << studentUsername240 << endl;
                cout << studentUsername241 << endl;
                cout << studentUsername242 << endl;
                cout << studentUsername243 << endl;
                cout << studentUsername244 << endl;
                cout << studentUsername245 << endl;
                cout << studentUsername246 << endl;
                cout << studentUsername247 << endl;
                cout << studentUsername248 << endl;
                cout << studentUsername249 << endl;
                cout << studentUsername250 << endl;
            }
            else if(staffChoice1 == "3"){
                goto Login ;
            }
            else
            {
                cout << "Invalid Choice" << endl;
                goto course1;
            }
        }
        else if(staffChoice1 == "3"){
            goto Login ;
        }
        else{
                system("cls");
            cout << "Invalid Input" << endl ;
        goto staffMenu1 ;
        }
    }
    // staff 2 Interface
    else if(username == staffUsername2 && password == staffPassword2)
{
    staffMenu2:
        string staffChoice2;
        cout << "Staff logged in successfully.\n";
        cout << "1. View Employee details(Teachers)." << endl;
        cout << "2. View Student details." << endl;
        cout << "3. Logout" << endl;

        if (staffChoice2 == "1")
        {
            string staffChoiceInside2;
            viewdetail2 :
            cout << "Teachers and their courses:" << endl;
            cout << "1. Username: " << teacherUsername1 << ", Course: " << teacherCourse1 << endl;
            cout << "2. Username: " << teacherUsername2 << ", Course: " << teacherCourse2 << endl;
            cout << "3. Username: " << teacherUsername3 << ", Course: " << teacherCourse3 << endl;
            cout << "4. Username: " << teacherUsername4 << ", Course: " << teacherCourse4 << endl;
            cout << "5. Username: " << teacherUsername5 << ", Course: " << teacherCourse5 << endl;
            cout << "Enter 1 to redirect to menu" << endl ;
            cout << "Enter input:"  ;
            cin >> staffChoiceInside2 ;
            if (staffChoiceInside2 == "1")
            {
                cout << "Go back..." << endl;
                goto staffMenu2;
            }
            else{
                    system("cls");
                cout << "Invalid input" << endl;
                goto viewdetail2 ;

            }
        }
        else if (staffChoice2 == "2")
        {
        course2:
            string selectCourse1;
            cout << "Courses" << endl;
            cout << "1. BSIT\n2. BSENT\n3. DICT\n4. BSA\n5. BSBA" << endl;
            cin >> selectCourse1;
            if (selectCourse1 == "1")
            {
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
            }
            else if (selectCourse1 == "2")
            {
                cout << studentUsername51 << endl;
                cout << studentUsername52 << endl;
                cout << studentUsername53 << endl;
                cout << studentUsername54 << endl;
                cout << studentUsername55 << endl;
                cout << studentUsername56 << endl;
                cout << studentUsername57 << endl;
                cout << studentUsername58 << endl;
                cout << studentUsername59 << endl;
                cout << studentUsername60 << endl;
                cout << studentUsername61 << endl;
                cout << studentUsername62 << endl;
                cout << studentUsername63 << endl;
                cout << studentUsername64 << endl;
                cout << studentUsername65 << endl;
                cout << studentUsername66 << endl;
                cout << studentUsername67 << endl;
                cout << studentUsername68 << endl;
                cout << studentUsername69 << endl;
                cout << studentUsername70 << endl;
                cout << studentUsername71 << endl;
                cout << studentUsername72 << endl;
                cout << studentUsername73 << endl;
                cout << studentUsername74 << endl;
                cout << studentUsername75 << endl;
                cout << studentUsername76 << endl;
                cout << studentUsername77 << endl;
                cout << studentUsername78 << endl;
                cout << studentUsername79 << endl;
                cout << studentUsername80 << endl;
                cout << studentUsername81 << endl;
                cout << studentUsername82 << endl;
                cout << studentUsername83 << endl;
                cout << studentUsername84 << endl;
                cout << studentUsername85 << endl;
                cout << studentUsername86 << endl;
                cout << studentUsername87 << endl;
                cout << studentUsername88 << endl;
                cout << studentUsername89 << endl;
                cout << studentUsername90 << endl;
                cout << studentUsername91 << endl;
                cout << studentUsername92 << endl;
                cout << studentUsername93 << endl;
                cout << studentUsername94 << endl;
                cout << studentUsername95 << endl;
                cout << studentUsername96 << endl;
                cout << studentUsername97 << endl;
                cout << studentUsername98 << endl;
                cout << studentUsername99 << endl;
                cout << studentUsername100 << endl;
            }
            else if (selectCourse1 == "3")
            {
                cout << studentUsername101 << endl;
                cout << studentUsername102 << endl;
                cout << studentUsername103 << endl;
                cout << studentUsername104 << endl;
                cout << studentUsername105 << endl;
                cout << studentUsername106 << endl;
                cout << studentUsername107 << endl;
                cout << studentUsername108 << endl;
                cout << studentUsername109 << endl;
                cout << studentUsername110 << endl;
                cout << studentUsername111 << endl;
                cout << studentUsername112 << endl;
                cout << studentUsername113 << endl;
                cout << studentUsername114 << endl;
                cout << studentUsername115 << endl;
                cout << studentUsername116 << endl;
                cout << studentUsername117 << endl;
                cout << studentUsername118 << endl;
                cout << studentUsername119 << endl;
                cout << studentUsername120 << endl;
                cout << studentUsername121 << endl;
                cout << studentUsername122 << endl;
                cout << studentUsername123 << endl;
                cout << studentUsername124 << endl;
                cout << studentUsername125 << endl;
                cout << studentUsername126 << endl;
                cout << studentUsername127 << endl;
                cout << studentUsername128 << endl;
                cout << studentUsername129 << endl;
                cout << studentUsername130 << endl;
                cout << studentUsername131 << endl;
                cout << studentUsername132 << endl;
                cout << studentUsername133 << endl;
                cout << studentUsername134 << endl;
                cout << studentUsername135 << endl;
                cout << studentUsername136 << endl;
                cout << studentUsername137 << endl;
                cout << studentUsername138 << endl;
                cout << studentUsername139 << endl;
                cout << studentUsername140 << endl;
                cout << studentUsername141 << endl;
                cout << studentUsername142 << endl;
                cout << studentUsername143 << endl;
                cout << studentUsername144 << endl;
                cout << studentUsername145 << endl;
                cout << studentUsername146 << endl;
                cout << studentUsername147 << endl;
                cout << studentUsername148 << endl;
                cout << studentUsername149 << endl;
                cout << studentUsername150 << endl;
            }
            else if (selectCourse1 == "4")
            {
                cout << studentUsername151 << endl;
                cout << studentUsername152 << endl;
                cout << studentUsername153 << endl;
                cout << studentUsername154 << endl;
                cout << studentUsername155 << endl;
                cout << studentUsername156 << endl;
                cout << studentUsername157 << endl;
                cout << studentUsername158 << endl;
                cout << studentUsername159 << endl;
                cout << studentUsername160 << endl;
                cout << studentUsername161 << endl;
                cout << studentUsername162 << endl;
                cout << studentUsername163 << endl;
                cout << studentUsername164 << endl;
                cout << studentUsername165 << endl;
                cout << studentUsername166 << endl;
                cout << studentUsername167 << endl;
                cout << studentUsername168 << endl;
                cout << studentUsername169 << endl;
                cout << studentUsername170 << endl;
                cout << studentUsername171 << endl;
                cout << studentUsername172 << endl;
                cout << studentUsername173 << endl;
                cout << studentUsername174 << endl;
                cout << studentUsername175 << endl;
                cout << studentUsername176 << endl;
                cout << studentUsername177 << endl;
                cout << studentUsername178 << endl;
                cout << studentUsername179 << endl;
                cout << studentUsername180 << endl;
                cout << studentUsername181 << endl;
                cout << studentUsername182 << endl;
                cout << studentUsername183 << endl;
                cout << studentUsername184 << endl;
                cout << studentUsername185 << endl;
                cout << studentUsername186 << endl;
                cout << studentUsername187 << endl;
                cout << studentUsername188 << endl;
                cout << studentUsername189 << endl;
                cout << studentUsername190 << endl;
                cout << studentUsername191 << endl;
                cout << studentUsername192 << endl;
                cout << studentUsername193 << endl;
                cout << studentUsername194 << endl;
                cout << studentUsername195 << endl;
                cout << studentUsername196 << endl;
                cout << studentUsername197 << endl;
                cout << studentUsername198 << endl;
                cout << studentUsername199 << endl;
                cout << studentUsername200 << endl;
            }
            else if (selectCourse1 == "5")
            {
                cout << studentUsername201 << endl;
                cout << studentUsername202 << endl;
                cout << studentUsername203 << endl;
                cout << studentUsername204 << endl;
                cout << studentUsername205 << endl;
                cout << studentUsername206 << endl;
                cout << studentUsername207 << endl;
                cout << studentUsername208 << endl;
                cout << studentUsername209 << endl;
                cout << studentUsername210 << endl;
                cout << studentUsername211 << endl;
                cout << studentUsername212 << endl;
                cout << studentUsername213 << endl;
                cout << studentUsername214 << endl;
                cout << studentUsername215 << endl;
                cout << studentUsername216 << endl;
                cout << studentUsername217 << endl;
                cout << studentUsername218 << endl;
                cout << studentUsername219 << endl;
                cout << studentUsername220 << endl;
                cout << studentUsername221 << endl;
                cout << studentUsername222 << endl;
                cout << studentUsername223 << endl;
                cout << studentUsername224 << endl;
                cout << studentUsername225 << endl;
                cout << studentUsername226 << endl;
                cout << studentUsername227 << endl;
                cout << studentUsername228 << endl;
                cout << studentUsername229 << endl;
                cout << studentUsername230 << endl;
                cout << studentUsername231 << endl;
                cout << studentUsername232 << endl;
                cout << studentUsername233 << endl;
                cout << studentUsername234 << endl;
                cout << studentUsername235 << endl;
                cout << studentUsername236 << endl;
                cout << studentUsername237 << endl;
                cout << studentUsername238 << endl;
                cout << studentUsername239 << endl;
                cout << studentUsername240 << endl;
                cout << studentUsername241 << endl;
                cout << studentUsername242 << endl;
                cout << studentUsername243 << endl;
                cout << studentUsername244 << endl;
                cout << studentUsername245 << endl;
                cout << studentUsername246 << endl;
                cout << studentUsername247 << endl;
                cout << studentUsername248 << endl;
                cout << studentUsername249 << endl;
                cout << studentUsername250 << endl;
            }
            else
            {
                cout << "Invalid Choice" << endl;
                goto course2;
            }
        }
        else if(staffChoice2 == "3"){
            goto Login ;
        }
        else{
                system("cls") ;
            cout << "Invalid Input" ;
        goto staffMenu2 ;
        }
    }
    //staff 3
else if(username == staffUsername3 && password == staffPassword3)
{
    staffMenu3:
        string staffChoice3;
        cout << "Staff logged in successfully.\n";
        cout << "1. View Employee details(Teachers)." << endl;
        cout << "2. View Student details." << endl;
        cout << "3. Logout" << endl;

        if (staffChoice3 == "1")
        {
            string staffChoiceInside3;
            viewdetail3 :
            cout << "Teachers and their courses:" << endl;
            cout << "1. Username: " << teacherUsername1 << ", Course: " << teacherCourse1 << endl;
            cout << "2. Username: " << teacherUsername2 << ", Course: " << teacherCourse2 << endl;
            cout << "3. Username: " << teacherUsername3 << ", Course: " << teacherCourse3 << endl;
            cout << "4. Username: " << teacherUsername4 << ", Course: " << teacherCourse4 << endl;
            cout << "5. Username: " << teacherUsername5 << ", Course: " << teacherCourse5 << endl;
            cout << "Enter 1 to redirect to menu" << endl ;
            cout << "Enter input:"  ;
            cin >> staffChoiceInside3 ;
            if (staffChoiceInside3 == "1")
            {
                cout << "Go back..." << endl;
                goto staffMenu3;
            }
            else{
                    system("cls");
                cout << "Invalid input" << endl;
                goto viewdetail3 ;

            }
        }
        else if (staffChoice3 == "2")
        {
        course3:
            string selectCourse3;
            cout << "Courses" << endl;
            cout << "1. BSIT\n2. BSENT\n3. DICT\n4. BSA\n5. BSBA" << endl;
            cin >> selectCourse3;
            if (selectCourse3 == "1")
            {
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
            }
            else if (selectCourse3 == "2")
            {
                cout << studentUsername51 << endl;
                cout << studentUsername52 << endl;
                cout << studentUsername53 << endl;
                cout << studentUsername54 << endl;
                cout << studentUsername55 << endl;
                cout << studentUsername56 << endl;
                cout << studentUsername57 << endl;
                cout << studentUsername58 << endl;
                cout << studentUsername59 << endl;
                cout << studentUsername60 << endl;
                cout << studentUsername61 << endl;
                cout << studentUsername62 << endl;
                cout << studentUsername63 << endl;
                cout << studentUsername64 << endl;
                cout << studentUsername65 << endl;
                cout << studentUsername66 << endl;
                cout << studentUsername67 << endl;
                cout << studentUsername68 << endl;
                cout << studentUsername69 << endl;
                cout << studentUsername70 << endl;
                cout << studentUsername71 << endl;
                cout << studentUsername72 << endl;
                cout << studentUsername73 << endl;
                cout << studentUsername74 << endl;
                cout << studentUsername75 << endl;
                cout << studentUsername76 << endl;
                cout << studentUsername77 << endl;
                cout << studentUsername78 << endl;
                cout << studentUsername79 << endl;
                cout << studentUsername80 << endl;
                cout << studentUsername81 << endl;
                cout << studentUsername82 << endl;
                cout << studentUsername83 << endl;
                cout << studentUsername84 << endl;
                cout << studentUsername85 << endl;
                cout << studentUsername86 << endl;
                cout << studentUsername87 << endl;
                cout << studentUsername88 << endl;
                cout << studentUsername89 << endl;
                cout << studentUsername90 << endl;
                cout << studentUsername91 << endl;
                cout << studentUsername92 << endl;
                cout << studentUsername93 << endl;
                cout << studentUsername94 << endl;
                cout << studentUsername95 << endl;
                cout << studentUsername96 << endl;
                cout << studentUsername97 << endl;
                cout << studentUsername98 << endl;
                cout << studentUsername99 << endl;
                cout << studentUsername100 << endl;
            }
            else if (selectCourse3 == "3")
            {
                cout << studentUsername101 << endl;
                cout << studentUsername102 << endl;
                cout << studentUsername103 << endl;
                cout << studentUsername104 << endl;
                cout << studentUsername105 << endl;
                cout << studentUsername106 << endl;
                cout << studentUsername107 << endl;
                cout << studentUsername108 << endl;
                cout << studentUsername109 << endl;
                cout << studentUsername110 << endl;
                cout << studentUsername111 << endl;
                cout << studentUsername112 << endl;
                cout << studentUsername113 << endl;
                cout << studentUsername114 << endl;
                cout << studentUsername115 << endl;
                cout << studentUsername116 << endl;
                cout << studentUsername117 << endl;
                cout << studentUsername118 << endl;
                cout << studentUsername119 << endl;
                cout << studentUsername120 << endl;
                cout << studentUsername121 << endl;
                cout << studentUsername122 << endl;
                cout << studentUsername123 << endl;
                cout << studentUsername124 << endl;
                cout << studentUsername125 << endl;
                cout << studentUsername126 << endl;
                cout << studentUsername127 << endl;
                cout << studentUsername128 << endl;
                cout << studentUsername129 << endl;
                cout << studentUsername130 << endl;
                cout << studentUsername131 << endl;
                cout << studentUsername132 << endl;
                cout << studentUsername133 << endl;
                cout << studentUsername134 << endl;
                cout << studentUsername135 << endl;
                cout << studentUsername136 << endl;
                cout << studentUsername137 << endl;
                cout << studentUsername138 << endl;
                cout << studentUsername139 << endl;
                cout << studentUsername140 << endl;
                cout << studentUsername141 << endl;
                cout << studentUsername142 << endl;
                cout << studentUsername143 << endl;
                cout << studentUsername144 << endl;
                cout << studentUsername145 << endl;
                cout << studentUsername146 << endl;
                cout << studentUsername147 << endl;
                cout << studentUsername148 << endl;
                cout << studentUsername149 << endl;
                cout << studentUsername150 << endl;
            }
            else if (selectCourse3 == "4")
            {
                cout << studentUsername151 << endl;
                cout << studentUsername152 << endl;
                cout << studentUsername153 << endl;
                cout << studentUsername154 << endl;
                cout << studentUsername155 << endl;
                cout << studentUsername156 << endl;
                cout << studentUsername157 << endl;
                cout << studentUsername158 << endl;
                cout << studentUsername159 << endl;
                cout << studentUsername160 << endl;
                cout << studentUsername161 << endl;
                cout << studentUsername162 << endl;
                cout << studentUsername163 << endl;
                cout << studentUsername164 << endl;
                cout << studentUsername165 << endl;
                cout << studentUsername166 << endl;
                cout << studentUsername167 << endl;
                cout << studentUsername168 << endl;
                cout << studentUsername169 << endl;
                cout << studentUsername170 << endl;
                cout << studentUsername171 << endl;
                cout << studentUsername172 << endl;
                cout << studentUsername173 << endl;
                cout << studentUsername174 << endl;
                cout << studentUsername175 << endl;
                cout << studentUsername176 << endl;
                cout << studentUsername177 << endl;
                cout << studentUsername178 << endl;
                cout << studentUsername179 << endl;
                cout << studentUsername180 << endl;
                cout << studentUsername181 << endl;
                cout << studentUsername182 << endl;
                cout << studentUsername183 << endl;
                cout << studentUsername184 << endl;
                cout << studentUsername185 << endl;
                cout << studentUsername186 << endl;
                cout << studentUsername187 << endl;
                cout << studentUsername188 << endl;
                cout << studentUsername189 << endl;
                cout << studentUsername190 << endl;
                cout << studentUsername191 << endl;
                cout << studentUsername192 << endl;
                cout << studentUsername193 << endl;
                cout << studentUsername194 << endl;
                cout << studentUsername195 << endl;
                cout << studentUsername196 << endl;
                cout << studentUsername197 << endl;
                cout << studentUsername198 << endl;
                cout << studentUsername199 << endl;
                cout << studentUsername200 << endl;
            }
            else if (selectCourse3 == "5")
            {
                cout << studentUsername201 << endl;
                cout << studentUsername202 << endl;
                cout << studentUsername203 << endl;
                cout << studentUsername204 << endl;
                cout << studentUsername205 << endl;
                cout << studentUsername206 << endl;
                cout << studentUsername207 << endl;
                cout << studentUsername208 << endl;
                cout << studentUsername209 << endl;
                cout << studentUsername210 << endl;
                cout << studentUsername211 << endl;
                cout << studentUsername212 << endl;
                cout << studentUsername213 << endl;
                cout << studentUsername214 << endl;
                cout << studentUsername215 << endl;
                cout << studentUsername216 << endl;
                cout << studentUsername217 << endl;
                cout << studentUsername218 << endl;
                cout << studentUsername219 << endl;
                cout << studentUsername220 << endl;
                cout << studentUsername221 << endl;
                cout << studentUsername222 << endl;
                cout << studentUsername223 << endl;
                cout << studentUsername224 << endl;
                cout << studentUsername225 << endl;
                cout << studentUsername226 << endl;
                cout << studentUsername227 << endl;
                cout << studentUsername228 << endl;
                cout << studentUsername229 << endl;
                cout << studentUsername230 << endl;
                cout << studentUsername231 << endl;
                cout << studentUsername232 << endl;
                cout << studentUsername233 << endl;
                cout << studentUsername234 << endl;
                cout << studentUsername235 << endl;
                cout << studentUsername236 << endl;
                cout << studentUsername237 << endl;
                cout << studentUsername238 << endl;
                cout << studentUsername239 << endl;
                cout << studentUsername240 << endl;
                cout << studentUsername241 << endl;
                cout << studentUsername242 << endl;
                cout << studentUsername243 << endl;
                cout << studentUsername244 << endl;
                cout << studentUsername245 << endl;
                cout << studentUsername246 << endl;
                cout << studentUsername247 << endl;
                cout << studentUsername248 << endl;
                cout << studentUsername249 << endl;
                cout << studentUsername250 << endl;
            }
            else
            {
                cout << "Invalid Choice" << endl;
                goto course3;
            }
        }
        else if(staffChoice3 == "3"){
            goto Login ;
        }
        else{
                system("cls") ;
            cout << "Invalid Input" ;
        goto staffMenu3 ;
        }
    }























    // Teacher Login
        if (teacherUsername1 == username && teacherPassword1 == password)
        {
        teacher_menu1:
            cout << "(Choices 1 and 2 only)" << endl;
            cout << "\nTeacher Menu1:\n";
            cout << "1. Create Student Account\n";
            cout << "2. View staff and teacher details" << endl;
            cout << "3. View student details" << endl;
            cout << "4. Log out" << endl ;
            cout << "Enter your choice: ";
            string teacherChoice;
            cin >> teacherChoice;

            if (teacherChoice == "1" && studentCount < 50)
            { // Handling 50 students for BSIT
                string newUsername, newPassword;
                cout << "Enter student username: ";
                cin >> newUsername;
                cout << "Enter student password: ";
                cin >> newPassword;

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
                    goto teacher_menu1;
                }
                else
                {
                    cout << "This username and password combination already exists.\n";
                }
                goto teacher_menu1;
            }
            else if (teacherChoice == "1" && studentCount >= 50)
            {
                cout << "Maximum student accounts for this course reached.\n";
                goto teacher_menu1;
            }

            else if (teacherChoice == "2")
            {
                // viewdetails
            string teacherChoiceInside;
            viewdetailte1:
            cout << "Teachers and their courses:" << endl;
            cout << "1. Username: " << teacherUsername1 << ", Course: " << teacherCourse1 << endl;
            cout << "2. Username: " << teacherUsername2 << ", Course: " << teacherCourse2 << endl;
            cout << "3. Username: " << teacherUsername3 << ", Course: " << teacherCourse3 << endl;
            cout << "4. Username: " << teacherUsername4 << ", Course: " << teacherCourse4 << endl;
            cout << "5. Username: " << teacherUsername5 << ", Course: " << teacherCourse5 << endl;
            cout << "Enter 1 to redirect to menu" << endl ;
            cout << "Enter input:"  ;
            cin >> teacherChoiceInside ;
            if (teacherChoiceInside == "1")
            {
                cout << "Go back..." << endl;
                goto teacher_menu1;
            }
            else{
                    system("cls");
                cout << "Invalid input" << endl;
                goto viewdetailte1 ;

            }
            }
            else if(teacherChoice == "3"){
        coursete1:
            string selectCoursete1;
            cout << "Courses" << endl;
            cout << "1. BSIT\n2. BSENT\n3. DICT\n4. BSA\n5. BSBA" << endl;
            cin >> selectCoursete1;
            if (selectCoursete1 == "1")
            {
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
            }
            else if (selectCoursete1 == "2")
            {
                cout << studentUsername51 << endl;
                cout << studentUsername52 << endl;
                cout << studentUsername53 << endl;
                cout << studentUsername54 << endl;
                cout << studentUsername55 << endl;
                cout << studentUsername56 << endl;
                cout << studentUsername57 << endl;
                cout << studentUsername58 << endl;
                cout << studentUsername59 << endl;
                cout << studentUsername60 << endl;
                cout << studentUsername61 << endl;
                cout << studentUsername62 << endl;
                cout << studentUsername63 << endl;
                cout << studentUsername64 << endl;
                cout << studentUsername65 << endl;
                cout << studentUsername66 << endl;
                cout << studentUsername67 << endl;
                cout << studentUsername68 << endl;
                cout << studentUsername69 << endl;
                cout << studentUsername70 << endl;
                cout << studentUsername71 << endl;
                cout << studentUsername72 << endl;
                cout << studentUsername73 << endl;
                cout << studentUsername74 << endl;
                cout << studentUsername75 << endl;
                cout << studentUsername76 << endl;
                cout << studentUsername77 << endl;
                cout << studentUsername78 << endl;
                cout << studentUsername79 << endl;
                cout << studentUsername80 << endl;
                cout << studentUsername81 << endl;
                cout << studentUsername82 << endl;
                cout << studentUsername83 << endl;
                cout << studentUsername84 << endl;
                cout << studentUsername85 << endl;
                cout << studentUsername86 << endl;
                cout << studentUsername87 << endl;
                cout << studentUsername88 << endl;
                cout << studentUsername89 << endl;
                cout << studentUsername90 << endl;
                cout << studentUsername91 << endl;
                cout << studentUsername92 << endl;
                cout << studentUsername93 << endl;
                cout << studentUsername94 << endl;
                cout << studentUsername95 << endl;
                cout << studentUsername96 << endl;
                cout << studentUsername97 << endl;
                cout << studentUsername98 << endl;
                cout << studentUsername99 << endl;
                cout << studentUsername100 << endl;
            }
            else if (selectCoursete1 == "3")
            {
                cout << studentUsername101 << endl;
                cout << studentUsername102 << endl;
                cout << studentUsername103 << endl;
                cout << studentUsername104 << endl;
                cout << studentUsername105 << endl;
                cout << studentUsername106 << endl;
                cout << studentUsername107 << endl;
                cout << studentUsername108 << endl;
                cout << studentUsername109 << endl;
                cout << studentUsername110 << endl;
                cout << studentUsername111 << endl;
                cout << studentUsername112 << endl;
                cout << studentUsername113 << endl;
                cout << studentUsername114 << endl;
                cout << studentUsername115 << endl;
                cout << studentUsername116 << endl;
                cout << studentUsername117 << endl;
                cout << studentUsername118 << endl;
                cout << studentUsername119 << endl;
                cout << studentUsername120 << endl;
                cout << studentUsername121 << endl;
                cout << studentUsername122 << endl;
                cout << studentUsername123 << endl;
                cout << studentUsername124 << endl;
                cout << studentUsername125 << endl;
                cout << studentUsername126 << endl;
                cout << studentUsername127 << endl;
                cout << studentUsername128 << endl;
                cout << studentUsername129 << endl;
                cout << studentUsername130 << endl;
                cout << studentUsername131 << endl;
                cout << studentUsername132 << endl;
                cout << studentUsername133 << endl;
                cout << studentUsername134 << endl;
                cout << studentUsername135 << endl;
                cout << studentUsername136 << endl;
                cout << studentUsername137 << endl;
                cout << studentUsername138 << endl;
                cout << studentUsername139 << endl;
                cout << studentUsername140 << endl;
                cout << studentUsername141 << endl;
                cout << studentUsername142 << endl;
                cout << studentUsername143 << endl;
                cout << studentUsername144 << endl;
                cout << studentUsername145 << endl;
                cout << studentUsername146 << endl;
                cout << studentUsername147 << endl;
                cout << studentUsername148 << endl;
                cout << studentUsername149 << endl;
                cout << studentUsername150 << endl;
            }
            else if (selectCoursete1 == "4")
            {
                cout << studentUsername151 << endl;
                cout << studentUsername152 << endl;
                cout << studentUsername153 << endl;
                cout << studentUsername154 << endl;
                cout << studentUsername155 << endl;
                cout << studentUsername156 << endl;
                cout << studentUsername157 << endl;
                cout << studentUsername158 << endl;
                cout << studentUsername159 << endl;
                cout << studentUsername160 << endl;
                cout << studentUsername161 << endl;
                cout << studentUsername162 << endl;
                cout << studentUsername163 << endl;
                cout << studentUsername164 << endl;
                cout << studentUsername165 << endl;
                cout << studentUsername166 << endl;
                cout << studentUsername167 << endl;
                cout << studentUsername168 << endl;
                cout << studentUsername169 << endl;
                cout << studentUsername170 << endl;
                cout << studentUsername171 << endl;
                cout << studentUsername172 << endl;
                cout << studentUsername173 << endl;
                cout << studentUsername174 << endl;
                cout << studentUsername175 << endl;
                cout << studentUsername176 << endl;
                cout << studentUsername177 << endl;
                cout << studentUsername178 << endl;
                cout << studentUsername179 << endl;
                cout << studentUsername180 << endl;
                cout << studentUsername181 << endl;
                cout << studentUsername182 << endl;
                cout << studentUsername183 << endl;
                cout << studentUsername184 << endl;
                cout << studentUsername185 << endl;
                cout << studentUsername186 << endl;
                cout << studentUsername187 << endl;
                cout << studentUsername188 << endl;
                cout << studentUsername189 << endl;
                cout << studentUsername190 << endl;
                cout << studentUsername191 << endl;
                cout << studentUsername192 << endl;
                cout << studentUsername193 << endl;
                cout << studentUsername194 << endl;
                cout << studentUsername195 << endl;
                cout << studentUsername196 << endl;
                cout << studentUsername197 << endl;
                cout << studentUsername198 << endl;
                cout << studentUsername199 << endl;
                cout << studentUsername200 << endl;
            }
            else if (selectCoursete1 == "5")
            {
                cout << studentUsername201 << endl;
                cout << studentUsername202 << endl;
                cout << studentUsername203 << endl;
                cout << studentUsername204 << endl;
                cout << studentUsername205 << endl;
                cout << studentUsername206 << endl;
                cout << studentUsername207 << endl;
                cout << studentUsername208 << endl;
                cout << studentUsername209 << endl;
                cout << studentUsername210 << endl;
                cout << studentUsername211 << endl;
                cout << studentUsername212 << endl;
                cout << studentUsername213 << endl;
                cout << studentUsername214 << endl;
                cout << studentUsername215 << endl;
                cout << studentUsername216 << endl;
                cout << studentUsername217 << endl;
                cout << studentUsername218 << endl;
                cout << studentUsername219 << endl;
                cout << studentUsername220 << endl;
                cout << studentUsername221 << endl;
                cout << studentUsername222 << endl;
                cout << studentUsername223 << endl;
                cout << studentUsername224 << endl;
                cout << studentUsername225 << endl;
                cout << studentUsername226 << endl;
                cout << studentUsername227 << endl;
                cout << studentUsername228 << endl;
                cout << studentUsername229 << endl;
                cout << studentUsername230 << endl;
                cout << studentUsername231 << endl;
                cout << studentUsername232 << endl;
                cout << studentUsername233 << endl;
                cout << studentUsername234 << endl;
                cout << studentUsername235 << endl;
                cout << studentUsername236 << endl;
                cout << studentUsername237 << endl;
                cout << studentUsername238 << endl;
                cout << studentUsername239 << endl;
                cout << studentUsername240 << endl;
                cout << studentUsername241 << endl;
                cout << studentUsername242 << endl;
                cout << studentUsername243 << endl;
                cout << studentUsername244 << endl;
                cout << studentUsername245 << endl;
                cout << studentUsername246 << endl;
                cout << studentUsername247 << endl;
                cout << studentUsername248 << endl;
                cout << studentUsername249 << endl;
                cout << studentUsername250 << endl;
            }
            else
            {
                cout << "Invalid Choice" << endl;
                goto coursete1;
            }
        }
        else if(teacherChoice == "4"){
            goto Login ;
        }
        else{
        system("cls") ;
            cout << "Invalid Input" << endl ;
        goto teacher_menu1 ;
        }
        }






        else if (teacherUsername2 == username && teacherPassword2 == password)
        {
            // handles BSENT
        teacher_menu2:
            cout << "(Choices 1 and 2 only)" << endl;
            cout << "\nTeacher2 Menu:\n";
            cout << "1. Create Student Account\n";
            cout << "2. Logout\n";
            cout << "Enter your choice: ";
            int teacherChoice = 0;
            cin >> teacherChoice;

            if (teacherChoice == 1 && studentCount < 100)
            {
                string newUsername, newPassword;
                cout << "Enter student username: ";
                cin >> newUsername;
                cout << "Enter student password: ";
                cin >> newPassword;

                bool usernamePasswordExists = false;

                // Check if the new username and password combination already exists
                if ((newUsername == studentUsername1 && newPassword == studentPassword1) ||
                    (newUsername == studentUsername2 && newPassword == studentPassword2) ||
                    (newUsername == studentUsername3 && newPassword == studentPassword3) ||
                    (newUsername == studentUsername4 && newPassword == studentPassword4) ||
                    (newUsername == studentUsername5 && newPassword == studentPassword5) ||
                    (newUsername == studentUsername6 && newPassword == studentPassword6) ||
                    (newUsername == studentUsername7 && newPassword == studentPassword7) ||
                    (newUsername == studentUsername8 && newPassword == studentPassword8) ||
                    (newUsername == studentUsername9 && newPassword == studentPassword9) ||
                    (newUsername == studentUsername10 && newPassword == studentPassword10) ||
                    (newUsername == studentUsername11 && newPassword == studentPassword11) ||
                    (newUsername == studentUsername12 && newPassword == studentPassword12) ||
                    (newUsername == studentUsername13 && newPassword == studentPassword13) ||
                    (newUsername == studentUsername14 && newPassword == studentPassword14) ||
                    (newUsername == studentUsername15 && newPassword == studentPassword15) ||
                    (newUsername == studentUsername16 && newPassword == studentPassword16) ||
                    (newUsername == studentUsername17 && newPassword == studentPassword17) ||
                    (newUsername == studentUsername18 && newPassword == studentPassword18) ||
                    (newUsername == studentUsername19 && newPassword == studentPassword19) ||
                    (newUsername == studentUsername20 && newPassword == studentPassword20) ||
                    (newUsername == studentUsername21 && newPassword == studentPassword21) ||
                    (newUsername == studentUsername22 && newPassword == studentPassword22) ||
                    (newUsername == studentUsername23 && newPassword == studentPassword23) ||
                    (newUsername == studentUsername24 && newPassword == studentPassword24) ||
                    (newUsername == studentUsername25 && newPassword == studentPassword25) ||
                    (newUsername == studentUsername26 && newPassword == studentPassword26) ||
                    (newUsername == studentUsername27 && newPassword == studentPassword27) ||
                    (newUsername == studentUsername28 && newPassword == studentPassword28) ||
                    (newUsername == studentUsername29 && newPassword == studentPassword29) ||
                    (newUsername == studentUsername30 && newPassword == studentPassword30) ||
                    (newUsername == studentUsername31 && newPassword == studentPassword31) ||
                    (newUsername == studentUsername32 && newPassword == studentPassword32) ||
                    (newUsername == studentUsername33 && newPassword == studentPassword33) ||
                    (newUsername == studentUsername34 && newPassword == studentPassword34) ||
                    (newUsername == studentUsername35 && newPassword == studentPassword35) ||
                    (newUsername == studentUsername36 && newPassword == studentPassword36) ||
                    (newUsername == studentUsername37 && newPassword == studentPassword37) ||
                    (newUsername == studentUsername38 && newPassword == studentPassword38) ||
                    (newUsername == studentUsername39 && newPassword == studentPassword39) ||
                    (newUsername == studentUsername40 && newPassword == studentPassword40) ||
                    (newUsername == studentUsername41 && newPassword == studentPassword41) ||
                    (newUsername == studentUsername42 && newPassword == studentPassword42) ||
                    (newUsername == studentUsername43 && newPassword == studentPassword43) ||
                    (newUsername == studentUsername44 && newPassword == studentPassword44) ||
                    (newUsername == studentUsername45 && newPassword == studentPassword45) ||
                    (newUsername == studentUsername46 && newPassword == studentPassword46) ||
                    (newUsername == studentUsername47 && newPassword == studentPassword47) ||
                    (newUsername == studentUsername48 && newPassword == studentPassword48) ||
                    (newUsername == studentUsername49 && newPassword == studentPassword49) ||
                    (newUsername == studentUsername50 && newPassword == studentPassword50))
                {
                    usernamePasswordExists = true;
                }

                if (!usernamePasswordExists)
                {
                    if (studentCount < 100)
                    {
                        studentCount++;
                        // Assign the new username and password to the next available variables
                        if (studentCount == 1)
                        {
                            studentUsername1 = newUsername;
                            studentPassword1 = newPassword;
                        }
                        else if (studentCount == 2)
                        {
                            studentUsername2 = newUsername;
                            studentPassword2 = newPassword;
                        }
                        else if (studentCount == 3)
                        {
                            studentUsername3 = newUsername;
                            studentPassword3 = newPassword;
                        }
                        else if (studentCount == 4)
                        {
                            studentUsername4 = newUsername;
                            studentPassword4 = newPassword;
                        }
                        else if (studentCount == 5)
                        {
                            studentUsername5 == newUsername;
                            studentPassword5 == newPassword;
                        }
                        else if (studentCount == 6)
                        {
                            studentUsername6 = newUsername;
                            studentPassword6 = newPassword;
                        }
                        else if (studentCount == 7)
                        {
                            studentUsername7 = newUsername;
                            studentPassword7 = newPassword;
                        }
                        else if (studentCount == 8)
                        {
                            studentUsername8 = newUsername;
                            studentPassword8 = newPassword;
                        }
                        else if (studentCount == 9)
                        {
                            studentUsername9 == newUsername;
                            studentPassword9 == newPassword;
                        }
                        else if (studentCount == 10)
                        {
                            studentUsername10 = newUsername;
                            studentPassword10 = newPassword;
                        }
                        else if (studentCount == 11)
                        {
                            studentUsername11 = newUsername;
                            studentPassword11 = newPassword;
                        }
                        else if (studentCount == 12)
                        {
                            studentUsername12 = newUsername;
                            studentPassword12 = newPassword;
                        }
                        else if (studentCount == 13)
                        {
                            studentUsername13 == newUsername;
                            studentPassword13 == newPassword;
                        }
                        else if (studentCount == 14)
                        {
                            studentUsername14 = newUsername;
                            studentPassword14 = newPassword;
                        }
                        else if (studentCount == 15)
                        {
                            studentUsername15 = newUsername;
                            studentPassword15 = newPassword;
                        }
                        else if (studentCount == 16)
                        {
                            studentUsername16 = newUsername;
                            studentPassword16 = newPassword;
                        }
                        else if (studentCount == 17)
                        {
                            studentUsername17 == newUsername;
                            studentPassword17 == newPassword;
                        }
                        else if (studentCount == 18)
                        {
                            studentUsername18 = newUsername;
                            studentPassword18 = newPassword;
                        }
                        else if (studentCount == 19)
                        {
                            studentUsername19 = newUsername;
                            studentPassword19 = newPassword;
                        }
                        else if (studentCount == 20)
                        {
                            studentUsername20 = newUsername;
                            studentPassword20 = newPassword;
                        }
                        else if (studentCount == 21)
                        {
                            studentUsername21 == newUsername;
                            studentPassword21 == newPassword;
                        }
                        else if (studentCount == 22)
                        {
                            studentUsername22 = newUsername;
                            studentPassword22 = newPassword;
                        }
                        else if (studentCount == 23)
                        {
                            studentUsername23 = newUsername;
                            studentPassword23 = newPassword;
                        }
                        else if (studentCount == 24)
                        {
                            studentUsername24 = newUsername;
                            studentPassword24 = newPassword;
                        }
                        else if (studentCount == 25)
                        {
                            studentUsername25 == newUsername;
                            studentPassword25 == newPassword;
                        }
                        else if (studentCount == 26)
                        {
                            studentUsername26 = newUsername;
                            studentPassword26 = newPassword;
                        }
                        else if (studentCount == 27)
                        {
                            studentUsername27 = newUsername;
                            studentPassword27 = newPassword;
                        }
                        else if (studentCount == 28)
                        {
                            studentUsername28 = newUsername;
                            studentPassword28 = newPassword;
                        }
                        else if (studentCount == 29)
                        {
                            studentUsername29 == newUsername;
                            studentPassword29 == newPassword;
                        }
                        else if (studentCount == 30)
                        {
                            studentUsername30 = newUsername;
                            studentPassword30 = newPassword;
                        }
                        else if (studentCount == 31)
                        {
                            studentUsername31 = newUsername;
                            studentPassword31 = newPassword;
                        }
                        else if (studentCount == 32)
                        {
                            studentUsername32 = newUsername;
                            studentPassword32 = newPassword;
                        }
                        else if (studentCount == 33)
                        {
                            studentUsername33 == newUsername;
                            studentPassword33 == newPassword;
                        }
                        else if (studentCount == 34)
                        {
                            studentUsername34 = newUsername;
                            studentPassword34 = newPassword;
                        }
                        else if (studentCount == 35)
                        {
                            studentUsername35 = newUsername;
                            studentPassword35 = newPassword;
                        }
                        else if (studentCount == 36)
                        {
                            studentUsername36 = newUsername;
                            studentPassword36 = newPassword;
                        }
                        else if (studentCount == 37)
                        {
                            studentUsername37 == newUsername;
                            studentPassword37 == newPassword;
                        }
                        else if (studentCount == 38)
                        {
                            studentUsername38 = newUsername;
                            studentPassword38 = newPassword;
                        }
                        else if (studentCount == 39)
                        {
                            studentUsername39 = newUsername;
                            studentPassword39 = newPassword;
                        }
                        else if (studentCount == 40)
                        {
                            studentUsername40 = newUsername;
                            studentPassword40 = newPassword;
                        }
                        else if (studentCount == 41)
                        {
                            studentUsername41 == newUsername;
                            studentPassword41 == newPassword;
                        }
                        else if (studentCount == 42)
                        {
                            studentUsername42 = newUsername;
                            studentPassword42 = newPassword;
                        }
                        else if (studentCount == 43)
                        {
                            studentUsername43 = newUsername;
                            studentPassword43 = newPassword;
                        }
                        else if (studentCount == 44)
                        {
                            studentUsername44 = newUsername;
                            studentPassword44 = newPassword;
                        }
                        else if (studentCount == 45)
                        {
                            studentUsername45 == newUsername;
                            studentPassword45 == newPassword;
                        }
                        else if (studentCount == 46)
                        {
                            studentUsername46 = newUsername;
                            studentPassword46 = newPassword;
                        }
                        else if (studentCount == 47)
                        {
                            studentUsername47 = newUsername;
                            studentPassword47 = newPassword;
                        }
                        else if (studentCount == 48)
                        {
                            studentUsername48 = newUsername;
                            studentPassword48 = newPassword;
                        }
                        else if (studentCount == 49)
                        {
                            studentUsername49 == newUsername;
                            studentPassword49 == newPassword;
                        }
                        else if (studentCount == 50)
                        {
                            studentUsername50 == newUsername;
                            studentPassword50 == newPassword;
                        }
                        cout << "Student account created successfully.\n";
                        goto main_menu;
                    }
                    else
                    {
                        cout << "Maximum student count reached.\n";
                    }
                }
                else
                {
                    cout << "This username and password combination already exists.\n";
                }
            }
            else if (teacherChoice == 1 && studentCount >= 100)
            {
                cout << "Maximum student accounts for this course reached.\n";
            }
            else if (teacherChoice != 2)
            {
                cout << "Invalid choice, please try again.\n";
            }

            if (teacherChoice != 2) // Continue looping unless choice is to logout
                goto teacher_menu2;
            else
            {
                cout << "Logged out successfully.\n";
                goto main_menu;
            }
            return 0;
        }
        // teacher 3
        else if (teacherUsername3 == username && teacherPassword3 == password)
        {
        teacher_menu3:
            cout << "\nTeacher3 Menu:\n";
            cout << "1. Create Student Account\n";
            cout << "2. Logout\n";
            cout << "Enter your choice: ";
            int teacherChoice;
            cin >> teacherChoice;

            if (teacherChoice == 1 && studentCount < 150)
            { // Handling 50 students for DICT
                string newUsername, newPassword;
                cout << "Enter student username: ";
                cin >> newUsername;
                cout << "Enter student password: ";
                cin >> newPassword;

                bool usernamePasswordExists = false;

                // Check if the new username and password combination already exists
                if ((newUsername == studentUsername101 && newPassword == studentPassword101) ||
                    (newUsername == studentUsername102 && newPassword == studentPassword102) ||
                    (newUsername == studentUsername3 && newPassword == studentPassword3) ||
                    (newUsername == studentUsername4 && newPassword == studentPassword4) ||
                    (newUsername == studentUsername5 && newPassword == studentPassword5) ||
                    (newUsername == studentUsername6 && newPassword == studentPassword6) ||
                    (newUsername == studentUsername7 && newPassword == studentPassword7) ||
                    (newUsername == studentUsername8 && newPassword == studentPassword8) ||
                    (newUsername == studentUsername9 && newPassword == studentPassword9) ||
                    (newUsername == studentUsername10 && newPassword == studentPassword10) ||
                    (newUsername == studentUsername11 && newPassword == studentPassword11) ||
                    (newUsername == studentUsername12 && newPassword == studentPassword12) ||
                    (newUsername == studentUsername13 && newPassword == studentPassword13) ||
                    (newUsername == studentUsername14 && newPassword == studentPassword14) ||
                    (newUsername == studentUsername15 && newPassword == studentPassword15) ||
                    (newUsername == studentUsername16 && newPassword == studentPassword16) ||
                    (newUsername == studentUsername17 && newPassword == studentPassword17) ||
                    (newUsername == studentUsername18 && newPassword == studentPassword18) ||
                    (newUsername == studentUsername19 && newPassword == studentPassword19) ||
                    (newUsername == studentUsername20 && newPassword == studentPassword20) ||
                    (newUsername == studentUsername21 && newPassword == studentPassword21) ||
                    (newUsername == studentUsername22 && newPassword == studentPassword22) ||
                    (newUsername == studentUsername23 && newPassword == studentPassword23) ||
                    (newUsername == studentUsername24 && newPassword == studentPassword24) ||
                    (newUsername == studentUsername25 && newPassword == studentPassword25) ||
                    (newUsername == studentUsername26 && newPassword == studentPassword26) ||
                    (newUsername == studentUsername27 && newPassword == studentPassword27) ||
                    (newUsername == studentUsername28 && newPassword == studentPassword28) ||
                    (newUsername == studentUsername29 && newPassword == studentPassword29) ||
                    (newUsername == studentUsername30 && newPassword == studentPassword30) ||
                    (newUsername == studentUsername31 && newPassword == studentPassword31) ||
                    (newUsername == studentUsername32 && newPassword == studentPassword32) ||
                    (newUsername == studentUsername33 && newPassword == studentPassword33) ||
                    (newUsername == studentUsername34 && newPassword == studentPassword34) ||
                    (newUsername == studentUsername35 && newPassword == studentPassword35) ||
                    (newUsername == studentUsername36 && newPassword == studentPassword36) ||
                    (newUsername == studentUsername37 && newPassword == studentPassword37) ||
                    (newUsername == studentUsername38 && newPassword == studentPassword38) ||
                    (newUsername == studentUsername39 && newPassword == studentPassword39) ||
                    (newUsername == studentUsername40 && newPassword == studentPassword40) ||
                    (newUsername == studentUsername41 && newPassword == studentPassword41) ||
                    (newUsername == studentUsername42 && newPassword == studentPassword42) ||
                    (newUsername == studentUsername43 && newPassword == studentPassword43) ||
                    (newUsername == studentUsername44 && newPassword == studentPassword44) ||
                    (newUsername == studentUsername45 && newPassword == studentPassword45) ||
                    (newUsername == studentUsername46 && newPassword == studentPassword46) ||
                    (newUsername == studentUsername47 && newPassword == studentPassword47) ||
                    (newUsername == studentUsername48 && newPassword == studentPassword48) ||
                    (newUsername == studentUsername49 && newPassword == studentPassword49) ||
                    (newUsername == studentUsername50 && newPassword == studentPassword50))
                {
                    usernamePasswordExists = true;
                }

                if (!usernamePasswordExists)
                {
                    if (studentCount < 50)
                    {
                        studentCount++;
                        // Assign the new username and password to the next available variables
                        if (studentCount == 1)
                        {
                            studentUsername51 = newUsername;
                            studentPassword51 = newPassword;
                        }
                        else if (studentCount == 2)
                        {
                            studentUsername2 = newUsername;
                            studentPassword2 = newPassword;
                        }
                        else if (studentCount == 3)
                        {
                            studentUsername3 = newUsername;
                            studentPassword3 = newPassword;
                        }
                        else if (studentCount == 4)
                        {
                            studentUsername4 = newUsername;
                            studentPassword4 = newPassword;
                        }
                        else if (studentCount == 5)
                        {
                            studentUsername5 == newUsername;
                            studentPassword5 == newPassword;
                        }
                        else if (studentCount == 6)
                        {
                            studentUsername6 = newUsername;
                            studentPassword6 = newPassword;
                        }
                        else if (studentCount == 7)
                        {
                            studentUsername7 = newUsername;
                            studentPassword7 = newPassword;
                        }
                        else if (studentCount == 8)
                        {
                            studentUsername8 = newUsername;
                            studentPassword8 = newPassword;
                        }
                        else if (studentCount == 9)
                        {
                            studentUsername9 == newUsername;
                            studentPassword9 == newPassword;
                        }
                        else if (studentCount == 10)
                        {
                            studentUsername10 = newUsername;
                            studentPassword10 = newPassword;
                        }
                        else if (studentCount == 11)
                        {
                            studentUsername11 = newUsername;
                            studentPassword11 = newPassword;
                        }
                        else if (studentCount == 12)
                        {
                            studentUsername12 = newUsername;
                            studentPassword12 = newPassword;
                        }
                        else if (studentCount == 13)
                        {
                            studentUsername13 == newUsername;
                            studentPassword13 == newPassword;
                        }
                        else if (studentCount == 14)
                        {
                            studentUsername14 = newUsername;
                            studentPassword14 = newPassword;
                        }
                        else if (studentCount == 15)
                        {
                            studentUsername15 = newUsername;
                            studentPassword15 = newPassword;
                        }
                        else if (studentCount == 16)
                        {
                            studentUsername16 = newUsername;
                            studentPassword16 = newPassword;
                        }
                        else if (studentCount == 17)
                        {
                            studentUsername17 == newUsername;
                            studentPassword17 == newPassword;
                        }
                        else if (studentCount == 18)
                        {
                            studentUsername18 = newUsername;
                            studentPassword18 = newPassword;
                        }
                        else if (studentCount == 19)
                        {
                            studentUsername19 = newUsername;
                            studentPassword19 = newPassword;
                        }
                        else if (studentCount == 20)
                        {
                            studentUsername20 = newUsername;
                            studentPassword20 = newPassword;
                        }
                        else if (studentCount == 21)
                        {
                            studentUsername21 == newUsername;
                            studentPassword21 == newPassword;
                        }
                        else if (studentCount == 22)
                        {
                            studentUsername22 = newUsername;
                            studentPassword22 = newPassword;
                        }
                        else if (studentCount == 23)
                        {
                            studentUsername23 = newUsername;
                            studentPassword23 = newPassword;
                        }
                        else if (studentCount == 24)
                        {
                            studentUsername24 = newUsername;
                            studentPassword24 = newPassword;
                        }
                        else if (studentCount == 25)
                        {
                            studentUsername25 == newUsername;
                            studentPassword25 == newPassword;
                        }
                        else if (studentCount == 26)
                        {
                            studentUsername26 = newUsername;
                            studentPassword26 = newPassword;
                        }
                        else if (studentCount == 27)
                        {
                            studentUsername27 = newUsername;
                            studentPassword27 = newPassword;
                        }
                        else if (studentCount == 28)
                        {
                            studentUsername28 = newUsername;
                            studentPassword28 = newPassword;
                        }
                        else if (studentCount == 29)
                        {
                            studentUsername29 == newUsername;
                            studentPassword29 == newPassword;
                        }
                        else if (studentCount == 30)
                        {
                            studentUsername30 = newUsername;
                            studentPassword30 = newPassword;
                        }
                        else if (studentCount == 31)
                        {
                            studentUsername31 = newUsername;
                            studentPassword31 = newPassword;
                        }
                        else if (studentCount == 32)
                        {
                            studentUsername32 = newUsername;
                            studentPassword32 = newPassword;
                        }
                        else if (studentCount == 33)
                        {
                            studentUsername33 == newUsername;
                            studentPassword33 == newPassword;
                        }
                        else if (studentCount == 34)
                        {
                            studentUsername34 = newUsername;
                            studentPassword34 = newPassword;
                        }
                        else if (studentCount == 35)
                        {
                            studentUsername35 = newUsername;
                            studentPassword35 = newPassword;
                        }
                        else if (studentCount == 36)
                        {
                            studentUsername36 = newUsername;
                            studentPassword36 = newPassword;
                        }
                        else if (studentCount == 37)
                        {
                            studentUsername37 == newUsername;
                            studentPassword37 == newPassword;
                        }
                        else if (studentCount == 38)
                        {
                            studentUsername38 = newUsername;
                            studentPassword38 = newPassword;
                        }
                        else if (studentCount == 39)
                        {
                            studentUsername39 = newUsername;
                            studentPassword39 = newPassword;
                        }
                        else if (studentCount == 40)
                        {
                            studentUsername40 = newUsername;
                            studentPassword40 = newPassword;
                        }
                        else if (studentCount == 41)
                        {
                            studentUsername41 == newUsername;
                            studentPassword41 == newPassword;
                        }
                        else if (studentCount == 42)
                        {
                            studentUsername42 = newUsername;
                            studentPassword42 = newPassword;
                        }
                        else if (studentCount == 43)
                        {
                            studentUsername43 = newUsername;
                            studentPassword43 = newPassword;
                        }
                        else if (studentCount == 44)
                        {
                            studentUsername44 = newUsername;
                            studentPassword44 = newPassword;
                        }
                        else if (studentCount == 45)
                        {
                            studentUsername45 == newUsername;
                            studentPassword45 == newPassword;
                        }
                        else if (studentCount == 46)
                        {
                            studentUsername46 = newUsername;
                            studentPassword46 = newPassword;
                        }
                        else if (studentCount == 47)
                        {
                            studentUsername47 = newUsername;
                            studentPassword47 = newPassword;
                        }
                        else if (studentCount == 48)
                        {
                            studentUsername48 = newUsername;
                            studentPassword48 = newPassword;
                        }
                        else if (studentCount == 49)
                        {
                            studentUsername49 == newUsername;
                            studentPassword49 == newPassword;
                        }
                        else if (studentCount == 50)
                        {
                            studentUsername50 == newUsername;
                            studentPassword50 == newPassword;
                        }
                        cout << "Student account created successfully.\n";
                        goto main_menu;
                    }
                    else
                    {
                        cout << "Maximum student count reached.\n";
                    }
                }
                else
                {
                    cout << "This username and password combination already exists.\n";
                    goto main_menu;
                }
            }
            else if (teacherChoice == 1 && studentCount >= 100)
            {
                cout << "Maximum student accounts for this course reached.\n";
            }
            else if (teacherChoice != 2)
            {
                cout << "Invalid choice, please try again.\n";
            }

            // teacher 4
            else if (teacherUsername4 == username && teacherPassword4 == password)
            {
            teacher_menu4:
                cout << "(Choices 1 and 2 only)" << endl;
                // handles bsa
                cout << "\nTeacher4 Menu:\n";
                cout << "1. Create Student Account\n";
                cout << "2. Logout\n";
                cout << "Enter your choice: ";
                int teacherChoice;
                cin >> teacherChoice;

                if (teacherChoice == 1 && studentCount < 50)
                { // Handling 50 students for DICT
                    string newUsername, newPassword;
                    cout << "Enter student username: ";
                    cin >> newUsername;
                    cout << "Enter student password: ";
                    cin >> newPassword;

                    if ((studentCount == 150 || (studentUsername151 != newUsername || studentPassword151 != newPassword)) && (studentCount < 152 || (studentUsername152 != newUsername || studentPassword152 != newPassword)) && (studentCount < 153 || (studentUsername153 != newUsername || studentPassword153 != newPassword)) && (studentCount < 154 || (studentUsername154 != newUsername || studentPassword154 != newPassword)) && (studentCount < 155 || (studentUsername155 != newUsername || studentPassword155 != newPassword)) && (studentCount < 156 || (studentUsername156 != newUsername || studentPassword156 != newPassword)) && (studentCount < 157 || (studentUsername157 != newUsername || studentPassword157 != newPassword)) && (studentCount < 158 || (studentUsername158 != newUsername || studentPassword158 != newPassword)) && (studentCount < 159 || (studentUsername159 != newUsername || studentPassword159 != newPassword)) && (studentCount < 160 || (studentUsername160 != newUsername || studentPassword160 != newPassword)) && (studentCount < 161 || (studentUsername161 != newUsername || studentPassword161 != newPassword)) && (studentCount < 162 || (studentUsername162 != newUsername || studentPassword162 != newPassword)) && (studentCount < 163 || (studentUsername163 != newUsername || studentPassword163 != newPassword)) && (studentCount < 164 || (studentUsername164 != newUsername || studentPassword164 != newPassword)) && (studentCount < 165 || (studentUsername165 != newUsername || studentPassword165 != newPassword)) && (studentCount < 166 || (studentUsername166 != newUsername || studentPassword166 != newPassword)) && (studentCount < 167 || (studentUsername167 != newUsername || studentPassword167 != newPassword)) && (studentCount < 168 || (studentUsername168 != newUsername || studentPassword168 != newPassword)) && (studentCount < 169 || (studentUsername169 != newUsername || studentPassword169 != newPassword)) && (studentCount < 170 || (studentUsername170 != newUsername || studentPassword170 != newPassword)) && (studentCount < 171 || (studentUsername171 != newUsername || studentPassword171 != newPassword)) && (studentCount < 172 || (studentUsername172 != newUsername || studentPassword172 != newPassword)) && (studentCount < 173 || (studentUsername173 != newUsername || studentPassword173 != newPassword)) && (studentCount < 174 || (studentUsername174 != newUsername || studentPassword174 != newPassword)) && (studentCount < 175 || (studentUsername175 != newUsername || studentPassword175 != newPassword)) && (studentCount < 176 || (studentUsername176 != newUsername || studentPassword176 != newPassword)) && (studentCount < 177 || (studentUsername177 != newUsername || studentPassword177 != newPassword)) && (studentCount < 178 || (studentUsername178 != newUsername || studentPassword178 != newPassword)) && (studentCount < 179 || (studentUsername179 != newUsername || studentPassword179 != newPassword)) && (studentCount < 180 || (studentUsername180 != newUsername || studentPassword180 != newPassword)) && (studentCount < 181 || (studentUsername181 != newUsername || studentPassword181 != newPassword)) && (studentCount < 182 || (studentUsername182 != newUsername || studentPassword182 != newPassword)) && (studentCount < 183 || (studentUsername183 != newUsername || studentPassword183 != newPassword)) && (studentCount < 184 || (studentUsername184 != newUsername || studentPassword184 != newPassword)) && (studentCount < 185 || (studentUsername185 != newUsername || studentPassword185 != newPassword)) && (studentCount < 186 || (studentUsername186 != newUsername || studentPassword186 != newPassword)) && (studentCount < 187 || (studentUsername187 != newUsername || studentPassword187 != newPassword)) && (studentCount < 188 || (studentUsername188 != newUsername || studentPassword188 != newPassword)) && (studentCount < 189 || (studentUsername189 != newUsername || studentPassword189 != newPassword)) && (studentCount < 190 || (studentUsername190 != newUsername || studentPassword190 != newPassword)) && (studentCount < 191 || (studentUsername191 != newUsername || studentPassword191 != newPassword)) && (studentCount < 192 || (studentUsername192 != newUsername || studentPassword192 != newPassword)) && (studentCount < 193 || (studentUsername193 != newUsername || studentPassword193 != newPassword)) && (studentCount < 194 || (studentUsername194 != newUsername || studentPassword194 != newPassword)) && (studentCount < 195 || (studentUsername195 != newUsername || studentPassword195 != newPassword)) && (studentCount < 196 || (studentUsername196 != newUsername || studentPassword196 != newPassword)) && (studentCount < 197 || (studentUsername197 != newUsername || studentPassword197 != newPassword)) && (studentCount < 198 || (studentUsername198 != newUsername || studentPassword198 != newPassword)) && (studentCount < 199 || (studentUsername199 != newUsername || studentPassword199 != newPassword)) && (studentCount < 200 || (studentUsername200 != newUsername || studentPassword200 != newPassword)))
                    {
                        if (studentCount == 150)
                        {
                            studentUsername151 = newUsername;
                            studentPassword151 = newPassword;
                        }
                        else if (studentCount == 151)
                        {
                            studentUsername152 = newUsername;
                            studentPassword152 = newPassword;
                        }
                        else if (studentCount == 152)
                        {
                            studentUsername153 = newUsername;
                            studentPassword153 = newPassword;
                        }
                        else if (studentCount == 153)
                        {
                            studentUsername154 = newUsername;
                            studentPassword154 = newPassword;
                        }
                        else if (studentCount == 154)
                        {
                            studentUsername155 = newUsername;
                            studentPassword155 = newPassword;
                        }
                        else if (studentCount == 155)
                        {
                            studentUsername156 = newUsername;
                            studentPassword156 = newPassword;
                        }
                        else if (studentCount == 156)
                        {
                            studentUsername157 = newUsername;
                            studentPassword157 = newPassword;
                        }
                        else if (studentCount == 157)
                        {
                            studentUsername158 = newUsername;
                            studentPassword158 = newPassword;
                        }
                        else if (studentCount == 158)
                        {
                            studentUsername159 = newUsername;
                            studentPassword159 = newPassword;
                        }
                        else if (studentCount == 159)
                        {
                            studentUsername160 = newUsername;
                            studentPassword160 = newPassword;
                        }
                        else if (studentCount == 160)
                        {
                            studentUsername161 = newUsername;
                            studentPassword161 = newPassword;
                        }
                        else if (studentCount == 161)
                        {
                            studentUsername162 = newUsername;
                            studentPassword162 = newPassword;
                        }
                        else if (studentCount == 162)
                        {
                            studentUsername163 = newUsername;
                            studentPassword163 = newPassword;
                        }
                        else if (studentCount == 163)
                        {
                            studentUsername164 = newUsername;
                            studentPassword164 = newPassword;
                        }
                        else if (studentCount == 164)
                        {
                            studentUsername165 = newUsername;
                            studentPassword165 = newPassword;
                        }
                        else if (studentCount == 165)
                        {
                            studentUsername166 = newUsername;
                            studentPassword166 = newPassword;
                        }
                        else if (studentCount == 166)
                        {
                            studentUsername167 = newUsername;
                            studentPassword167 = newPassword;
                        }
                        else if (studentCount == 167)
                        {
                            studentUsername168 = newUsername;
                            studentPassword168 = newPassword;
                        }
                        else if (studentCount == 168)
                        {
                            studentUsername169 = newUsername;
                            studentPassword169 = newPassword;
                        }
                        else if (studentCount == 169)
                        {
                            studentUsername170 = newUsername;
                            studentPassword170 = newPassword;
                        }
                        else if (studentCount == 170)
                        {
                            studentUsername171 = newUsername;
                            studentPassword171 = newPassword;
                        }
                        else if (studentCount == 171)
                        {
                            studentUsername172 = newUsername;
                            studentPassword172 = newPassword;
                        }
                        else if (studentCount == 172)
                        {
                            studentUsername173 = newUsername;
                            studentPassword173 = newPassword;
                        }
                        else if (studentCount == 173)
                        {
                            studentUsername174 = newUsername;
                            studentPassword174 = newPassword;
                        }
                        else if (studentCount == 174)
                        {
                            studentUsername175 = newUsername;
                            studentPassword175 = newPassword;
                        }
                        else if (studentCount == 175)
                        {
                            studentUsername176 = newUsername;
                            studentPassword176 = newPassword;
                        }
                        else if (studentCount == 126)
                        {
                            studentUsername177 = newUsername;
                            studentPassword177 = newPassword;
                        }
                        else if (studentCount == 177)
                        {
                            studentUsername178 = newUsername;
                            studentPassword178 = newPassword;
                        }
                        else if (studentCount == 178)
                        {
                            studentUsername179 = newUsername;
                            studentPassword179 = newPassword;
                        }
                        else if (studentCount == 179)
                        {
                            studentUsername180 = newUsername;
                            studentPassword180 = newPassword;
                        }
                        else if (studentCount == 180)
                        {
                            studentUsername181 = newUsername;
                            studentPassword181 = newPassword;
                        }
                        else if (studentCount == 181)
                        {
                            studentUsername182 = newUsername;
                            studentPassword182 = newPassword;
                        }
                        else if (studentCount == 182)
                        {
                            studentUsername183 = newUsername;
                            studentPassword183 = newPassword;
                        }
                        else if (studentCount == 183)
                        {
                            studentUsername184 = newUsername;
                            studentPassword184 = newPassword;
                        }
                        else if (studentCount == 184)
                        {
                            studentUsername185 = newUsername;
                            studentPassword185 = newPassword;
                        }
                        else if (studentCount == 185)
                        {
                            studentUsername186 = newUsername;
                            studentPassword186 = newPassword;
                        }
                        else if (studentCount == 186)
                        {
                            studentUsername187 = newUsername;
                            studentPassword187 = newPassword;
                        }
                        else if (studentCount == 187)
                        {
                            studentUsername188 = newUsername;
                            studentPassword188 = newPassword;
                        }
                        else if (studentCount == 188)
                        {
                            studentUsername189 = newUsername;
                            studentPassword189 = newPassword;
                        }
                        else if (studentCount == 189)
                        {
                            studentUsername190 = newUsername;
                            studentPassword190 = newPassword;
                        }
                        else if (studentCount == 190)
                        {
                            studentUsername191 = newUsername;
                            studentPassword191 = newPassword;
                        }
                        else if (studentCount == 191)
                        {
                            studentUsername192 = newUsername;
                            studentPassword192 = newPassword;
                        }
                        else if (studentCount == 192)
                        {
                            studentUsername193 = newUsername;
                            studentPassword193 = newPassword;
                        }
                        else if (studentCount == 193)
                        {
                            studentUsername194 = newUsername;
                            studentPassword194 = newPassword;
                        }
                        else if (studentCount == 194)
                        {
                            studentUsername195 = newUsername;
                            studentPassword195 = newPassword;
                        }
                        else if (studentCount == 195)
                        {
                            studentUsername196 = newUsername;
                            studentPassword196 = newPassword;
                        }
                        else if (studentCount == 196)
                        {
                            studentUsername197 = newUsername;
                            studentPassword197 = newPassword;
                        }
                        else if (studentCount == 197)
                        {
                            studentUsername198 = newUsername;
                            studentPassword198 = newPassword;
                        }
                        else if (studentCount == 198)
                        {
                            studentUsername199 = newUsername;
                            studentPassword199 = newPassword;
                        }
                        else if (studentCount == 199)
                        {
                            studentUsername200 = newUsername;
                            studentPassword200 = newPassword;
                        }
                        studentCount++;
                        cout << "Student account created successfully.\n";
                    }
                    else
                    {
                        cout << "This username and password combination already exists.\n";
                    }
                    goto teacher_menu4;
                }
                else if (teacherChoice == 1 && studentCount >= 50)
                {
                    cout << "Maximum student accounts for this course reached.\n";
                    goto teacher_menu4;
                }
                else if (teacherChoice != 2)
                {
                    cout << "Invalid choice, please try again.\n";
                    goto teacher_menu4;
                }
                goto main_menu;
            }
            // teacher 5
            else if (teacherUsername5 == username && teacherPassword5 == password)
            {
            teacher_menu5:
                cout << "(Choices 1 and 2 only)" << endl;
                // handles bsba
                cout << "\nTeacher5 Menu:\n";
                cout << "1. Create Student Account\n";
                cout << "2. Logout\n";
                cout << "Enter your choice: ";
                int teacherChoice;
                cin >> teacherChoice;

                if (teacherChoice == 1 && studentCount < 50)
                {
                    string newUsername;
                    string newPassword;
                    cout << "Enter student username: ";
                    cin >> newUsername;
                    cout << "Enter student password: ";
                    cin >> newPassword;

                    if ((studentCount == 200 || (studentUsername201 != newUsername || studentPassword201 != newPassword)) && (studentCount < 202 || (studentUsername202 != newUsername || studentPassword202 != newPassword)) && (studentCount < 203 || (studentUsername203 != newUsername || studentPassword203 != newPassword)) && (studentCount < 204 || (studentUsername204 != newUsername || studentPassword204 != newPassword)) && (studentCount < 205 || (studentUsername205 != newUsername || studentPassword205 != newPassword)) && (studentCount < 206 || (studentUsername206 != newUsername || studentPassword206 != newPassword)) && (studentCount < 207 || (studentUsername207 != newUsername || studentPassword207 != newPassword)) && (studentCount < 208 || (studentUsername208 != newUsername || studentPassword208 != newPassword)) && (studentCount < 209 || (studentUsername209 != newUsername || studentPassword209 != newPassword)) && (studentCount < 210 || (studentUsername210 != newUsername || studentPassword210 != newPassword)) && (studentCount < 211 || (studentUsername211 != newUsername || studentPassword211 != newPassword)) && (studentCount < 212 || (studentUsername212 != newUsername || studentPassword212 != newPassword)) && (studentCount < 213 || (studentUsername213 != newUsername || studentPassword213 != newPassword)) && (studentCount < 214 || (studentUsername214 != newUsername || studentPassword214 != newPassword)) && (studentCount < 215 || (studentUsername215 != newUsername || studentPassword215 != newPassword)) && (studentCount < 216 || (studentUsername216 != newUsername || studentPassword216 != newPassword)) && (studentCount < 217 || (studentUsername217 != newUsername || studentPassword217 != newPassword)) && (studentCount < 218 || (studentUsername218 != newUsername || studentPassword218 != newPassword)) && (studentCount < 219 || (studentUsername219 != newUsername || studentPassword219 != newPassword)) && (studentCount < 220 || (studentUsername220 != newUsername || studentPassword220 != newPassword)) && (studentCount < 221 || (studentUsername221 != newUsername || studentPassword221 != newPassword)) && (studentCount < 222 || (studentUsername222 != newUsername || studentPassword222 != newPassword)) && (studentCount < 223 || (studentUsername223 != newUsername || studentPassword223 != newPassword)) && (studentCount < 224 || (studentUsername224 != newUsername || studentPassword224 != newPassword)) && (studentCount < 225 || (studentUsername225 != newUsername || studentPassword225 != newPassword)) && (studentCount < 226 || (studentUsername226 != newUsername || studentPassword226 != newPassword)) && (studentCount < 227 || (studentUsername227 != newUsername || studentPassword227 != newPassword)) && (studentCount < 228 || (studentUsername228 != newUsername || studentPassword228 != newPassword)) && (studentCount < 229 || (studentUsername229 != newUsername || studentPassword229 != newPassword)) && (studentCount < 230 || (studentUsername230 != newUsername || studentPassword230 != newPassword)) && (studentCount < 231 || (studentUsername231 != newUsername || studentPassword231 != newPassword)) && (studentCount < 232 || (studentUsername232 != newUsername || studentPassword232 != newPassword)) && (studentCount < 233 || (studentUsername233 != newUsername || studentPassword233 != newPassword)) && (studentCount < 234 || (studentUsername234 != newUsername || studentPassword234 != newPassword)) && (studentCount < 235 || (studentUsername235 != newUsername || studentPassword235 != newPassword)) && (studentCount < 236 || (studentUsername236 != newUsername || studentPassword236 != newPassword)) && (studentCount < 237 || (studentUsername237 != newUsername || studentPassword187 != newPassword)) && (studentCount < 238 || (studentUsername188 != newUsername || studentPassword238 != newPassword)) && (studentCount < 239 || (studentUsername239 != newUsername || studentPassword239 != newPassword)) && (studentCount < 240 || (studentUsername240 != newUsername || studentPassword240 != newPassword)) && (studentCount < 241 || (studentUsername241 != newUsername || studentPassword241 != newPassword)) && (studentCount < 242 || (studentUsername242 != newUsername || studentPassword242 != newPassword)) && (studentCount < 243 || (studentUsername243 != newUsername || studentPassword243 != newPassword)) && (studentCount < 244 || (studentUsername244 != newUsername || studentPassword244 != newPassword)) && (studentCount < 245 || (studentUsername245 != newUsername || studentPassword245 != newPassword)) && (studentCount < 246 || (studentUsername246 != newUsername || studentPassword246 != newPassword)) && (studentCount < 247 || (studentUsername247 != newUsername || studentPassword247 != newPassword)) && (studentCount < 248 || (studentUsername248 != newUsername || studentPassword248 != newPassword)) && (studentCount < 249 || (studentUsername249 != newUsername || studentPassword249 != newPassword)) && (studentCount < 250 || (studentUsername250 != newUsername || studentPassword250 != newPassword)))
                    {
                        if (studentCount == 200)
                        {
                            studentUsername201 = newUsername;
                            studentPassword201 = newPassword;
                        }
                        else if (studentCount == 201)
                        {
                            studentUsername202 = newUsername;
                            studentPassword202 = newPassword;
                        }
                        else if (studentCount == 202)
                        {
                            studentUsername203 = newUsername;
                            studentPassword203 = newPassword;
                        }
                        else if (studentCount == 203)
                        {
                            studentUsername204 = newUsername;
                            studentPassword204 = newPassword;
                        }
                        else if (studentCount == 204)
                        {
                            studentUsername205 = newUsername;
                            studentPassword205 = newPassword;
                        }
                        else if (studentCount == 205)
                        {
                            studentUsername206 = newUsername;
                            studentPassword206 = newPassword;
                        }
                        else if (studentCount == 206)
                        {
                            studentUsername207 = newUsername;
                            studentPassword207 = newPassword;
                        }
                        else if (studentCount == 207)
                        {
                            studentUsername208 = newUsername;
                            studentPassword208 = newPassword;
                        }
                        else if (studentCount == 208)
                        {
                            studentUsername209 = newUsername;
                            studentPassword209 = newPassword;
                        }
                        else if (studentCount == 209)
                        {
                            studentUsername210 = newUsername;
                            studentPassword210 = newPassword;
                        }
                        else if (studentCount == 210)
                        {
                            studentUsername211 = newUsername;
                            studentPassword211 = newPassword;
                        }
                        else if (studentCount == 211)
                        {
                            studentUsername212 = newUsername;
                            studentPassword212 = newPassword;
                        }
                        else if (studentCount == 212)
                        {
                            studentUsername213 = newUsername;
                            studentPassword213 = newPassword;
                        }
                        else if (studentCount == 213)
                        {
                            studentUsername214 = newUsername;
                            studentPassword214 = newPassword;
                        }
                        else if (studentCount == 214)
                        {
                            studentUsername215 = newUsername;
                            studentPassword215 = newPassword;
                        }
                        else if (studentCount == 215)
                        {
                            studentUsername216 = newUsername;
                            studentPassword216 = newPassword;
                        }
                        else if (studentCount == 216)
                        {
                            studentUsername217 = newUsername;
                            studentPassword217 = newPassword;
                        }
                        else if (studentCount == 217)
                        {
                            studentUsername218 = newUsername;
                            studentPassword218 = newPassword;
                        }
                        else if (studentCount == 218)
                        {
                            studentUsername219 = newUsername;
                            studentPassword219 = newPassword;
                        }
                        else if (studentCount == 219)
                        {
                            studentUsername220 = newUsername;
                            studentPassword220 = newPassword;
                        }
                        else if (studentCount == 220)
                        {
                            studentUsername221 = newUsername;
                            studentPassword221 = newPassword;
                        }
                        else if (studentCount == 221)
                        {
                            studentUsername222 = newUsername;
                            studentPassword222 = newPassword;
                        }
                        else if (studentCount == 222)
                        {
                            studentUsername223 = newUsername;
                            studentPassword223 = newPassword;
                        }
                        else if (studentCount == 223)
                        {
                            studentUsername224 = newUsername;
                            studentPassword224 = newPassword;
                        }
                        else if (studentCount == 224)
                        {
                            studentUsername225 = newUsername;
                            studentPassword225 = newPassword;
                        }
                        else if (studentCount == 225)
                        {
                            studentUsername226 = newUsername;
                            studentPassword226 = newPassword;
                        }
                        else if (studentCount == 226)
                        {
                            studentUsername227 = newUsername;
                            studentPassword227 = newPassword;
                        }
                        else if (studentCount == 227)
                        {
                            studentUsername228 = newUsername;
                            studentPassword228 = newPassword;
                        }
                        else if (studentCount == 228)
                        {
                            studentUsername229 = newUsername;
                            studentPassword229 = newPassword;
                        }
                        else if (studentCount == 229)
                        {
                            studentUsername230 = newUsername;
                            studentPassword230 = newPassword;
                        }
                        else if (studentCount == 230)
                        {
                            studentUsername231 = newUsername;
                            studentPassword231 = newPassword;
                        }
                        else if (studentCount == 231)
                        {
                            studentUsername232 = newUsername;
                            studentPassword232 = newPassword;
                        }
                        else if (studentCount == 232)
                        {
                            studentUsername233 = newUsername;
                            studentPassword233 = newPassword;
                        }
                        else if (studentCount == 233)
                        {
                            studentUsername234 = newUsername;
                            studentPassword234 = newPassword;
                        }
                        else if (studentCount == 234)
                        {
                            studentUsername235 = newUsername;
                            studentPassword235 = newPassword;
                        }
                        else if (studentCount == 235)
                        {
                            studentUsername236 = newUsername;
                            studentPassword236 = newPassword;
                        }
                        else if (studentCount == 236)
                        {
                            studentUsername237 = newUsername;
                            studentPassword237 = newPassword;
                        }
                        else if (studentCount == 237)
                        {
                            studentUsername238 = newUsername;
                            studentPassword238 = newPassword;
                        }
                        else if (studentCount == 238)
                        {
                            studentUsername239 = newUsername;
                            studentPassword239 = newPassword;
                        }
                        else if (studentCount == 239)
                        {
                            studentUsername240 = newUsername;
                            studentPassword240 = newPassword;
                        }
                        else if (studentCount == 240)
                        {
                            studentUsername241 = newUsername;
                            studentPassword241 = newPassword;
                        }
                        else if (studentCount == 241)
                        {
                            studentUsername242 = newUsername;
                            studentPassword242 = newPassword;
                        }
                        else if (studentCount == 242)
                        {
                            studentUsername243 = newUsername;
                            studentPassword243 = newPassword;
                        }
                        else if (studentCount == 243)
                        {
                            studentUsername244 = newUsername;
                            studentPassword244 = newPassword;
                        }
                        else if (studentCount == 244)
                        {
                            studentUsername245 = newUsername;
                            studentPassword245 = newPassword;
                        }
                        else if (studentCount == 245)
                        {
                            studentUsername246 = newUsername;
                            studentPassword246 = newPassword;
                        }
                        else if (studentCount == 246)
                        {
                            studentUsername247 = newUsername;
                            studentPassword247 = newPassword;
                        }
                        else if (studentCount == 247)
                        {
                            studentUsername248 = newUsername;
                            studentPassword248 = newPassword;
                        }
                        else if (studentCount == 248)
                        {
                            studentUsername249 = newUsername;
                            studentPassword249 = newPassword;
                        }
                        else if (studentCount == 249)
                        {
                            studentUsername250 = newUsername;
                            studentPassword250 = newPassword;
                        }
                        studentCount++;
                        cout << "Student account created successfully.\n";
                    }
                    else
                    {
                        cout << "This username and password combination already exists.\n";
                    }
                    goto teacher_menu5;
                }
                else if (teacherChoice == 1 && studentCount >= 50)
                {
                    cout << "Maximum student accounts for this course reached.\n";
                    goto teacher_menu5;
                }
                else if (teacherChoice != 2)
                {
                    cout << "Invalid choice, please try again.\n";
                    goto teacher_menu5;
                }
                goto main_menu;
            }

            cout << "Invalid username or password. Please try again.\n";
            goto login;
        }
if (username != adminUsername && password != adminPassword &&
    username != studentUsername1 && password != studentPassword1 &&
    username != studentUsername2 && password != studentPassword2 &&
    username != studentUsername3 && password != studentPassword3 &&
    username != studentUsername4 && password != studentPassword4 &&
    username != studentUsername5 && password != studentPassword5 &&
    username != studentUsername6 && password != studentPassword6 &&
    username != studentUsername7 && password != studentPassword7 &&
    username != studentUsername8 && password != studentPassword8 &&
    username != studentUsername9 && password != studentPassword9 &&
    username != studentUsername10 && password != studentPassword10 &&
    username != studentUsername11 && password != studentPassword11 &&
    username != studentUsername12 && password != studentPassword12 &&
    username != studentUsername13 && password != studentPassword13 &&
    username != studentUsername14 && password != studentPassword14 &&
    username != studentUsername15 && password != studentPassword15 &&
    username != studentUsername16 && password != studentPassword16 &&
    username != studentUsername17 && password != studentPassword17 &&
    username != studentUsername18 && password != studentPassword18 &&
    username != studentUsername19 && password != studentPassword19 &&
    username != studentUsername20 && password != studentPassword20 &&
    username != studentUsername21 && password != studentPassword21 &&
    username != studentUsername22 && password != studentPassword22 &&
    username != studentUsername23 && password != studentPassword23 &&
    username != studentUsername24 && password != studentPassword24 &&
    username != studentUsername25 && password != studentPassword25 &&
    username != studentUsername26 && password != studentPassword26 &&
    username != studentUsername27 && password != studentPassword27 &&
    username != studentUsername28 && password != studentPassword28 &&
    username != studentUsername29 && password != studentPassword29 &&
    username != studentUsername30 && password != studentPassword30 &&
    username != studentUsername31 && password != studentPassword31 &&
    username != studentUsername32 && password != studentPassword32 &&
    username != studentUsername33 && password != studentPassword33 &&
    username != studentUsername34 && password != studentPassword34 &&
    username != studentUsername35 && password != studentPassword35 &&
    username != studentUsername36 && password != studentPassword36 &&
    username != studentUsername37 && password != studentPassword37 &&
    username != studentUsername38 && password != studentPassword38 &&
    username != studentUsername39 && password != studentPassword39 &&
    username != studentUsername40 && password != studentPassword40 &&
    username != studentUsername41 && password != studentPassword41 &&
    username != studentUsername42 && password != studentPassword42 &&
    username != studentUsername43 && password != studentPassword43 &&
    username != studentUsername44 && password != studentPassword44 &&
    username != studentUsername45 && password != studentPassword45 &&
    username != studentUsername46 && password != studentPassword46 &&
    username != studentUsername47 && password != studentPassword47 &&
    username != studentUsername48 && password != studentPassword48 &&
    username != studentUsername49 && password != studentPassword49 &&
    username != studentUsername50 && password != studentPassword50 &&
    username != studentUsername51 && password != studentPassword51 &&
    username != studentUsername52 && password != studentPassword52 &&
    username != studentUsername53 && password != studentPassword53 &&
    username != studentUsername54 && password != studentPassword54 &&
    username != studentUsername55 && password != studentPassword55 &&
    username != studentUsername56 && password != studentPassword56 &&
    username != studentUsername57 && password != studentPassword57 &&
    username != studentUsername58 && password != studentPassword58 &&
    username != studentUsername59 && password != studentPassword59 &&
    username != studentUsername60 && password != studentPassword60 &&
    username != studentUsername61 && password != studentPassword61 &&
    username != studentUsername62 && password != studentPassword62 &&
    username != studentUsername63 && password != studentPassword63 &&
    username != studentUsername64 && password != studentPassword64 &&
    username != studentUsername65 && password != studentPassword65 &&
    username != studentUsername66 && password != studentPassword66 &&
    username != studentUsername67 && password != studentPassword67 &&
    username != studentUsername68 && password != studentPassword68 &&
    username != studentUsername69 && password != studentPassword69 &&
    username != studentUsername70 && password != studentPassword70 &&
    username != studentUsername71 && password != studentPassword71 &&
    username != studentUsername72 && password != studentPassword72 &&
    username != studentUsername73 && password != studentPassword73 &&
    username != studentUsername74 && password != studentPassword74 &&
    username != studentUsername75 && password != studentPassword75 &&
    username != studentUsername76 && password != studentPassword76 &&
    username != studentUsername77 && password != studentPassword77 &&
    username != studentUsername78 && password != studentPassword78 &&
    username != studentUsername79 && password != studentPassword79 &&
    username != studentUsername80 && password != studentPassword80 &&
    username != studentUsername81 && password != studentPassword81 &&
    username != studentUsername82 && password != studentPassword82 &&
    username != studentUsername83 && password != studentPassword83 &&
    username != studentUsername84 && password != studentPassword84 &&
    username != studentUsername85 && password != studentPassword85 &&
    username != studentUsername86 && password != studentPassword86 &&
    username != studentUsername87 && password != studentPassword87 &&
    username != studentUsername88 && password != studentPassword88 &&
    username != studentUsername89 && password != studentPassword89 &&
    username != studentUsername90 && password != studentPassword90 &&
    username != studentUsername91 && password != studentPassword91 &&
    username != studentUsername92 && password != studentPassword92 &&
    username != studentUsername93 && password != studentPassword93 &&
    username != studentUsername94 && password != studentPassword94 &&
    username != studentUsername95 && password != studentPassword95 &&
    username != studentUsername96 && password != studentPassword96 &&
    username != studentUsername97 && password != studentPassword97 &&
    username != studentUsername98 && password != studentPassword98 &&
    username != studentUsername99 && password != studentPassword99 &&
    username != studentUsername100 && password != studentPassword100 &&
    username != studentUsername101 && password != studentPassword101 &&
    username != studentUsername102 && password != studentPassword102 &&
    username != studentUsername103 && password != studentPassword103 &&
    username != studentUsername104 && password != studentPassword104 &&
    username != studentUsername105 && password != studentPassword105 &&
    username != studentUsername106 && password != studentPassword106 &&
    username != studentUsername107 && password != studentPassword107 &&
    username != studentUsername108 && password != studentPassword108 &&
    username != studentUsername109 && password != studentPassword109 &&
    username != studentUsername110 && password != studentPassword110 &&
    username != studentUsername111 && password != studentPassword111 &&
    username != studentUsername112 && password != studentPassword112 &&
    username != studentUsername113 && password != studentPassword113 &&
    username != studentUsername114 && password != studentPassword114 &&
    username != studentUsername115 && password != studentPassword115 &&
    username != studentUsername116 && password != studentPassword116 &&
    username != studentUsername117 && password != studentPassword117 &&
    username != studentUsername118 && password != studentPassword118 &&
    username != studentUsername119 && password != studentPassword119 &&
    username != studentUsername120 && password != studentPassword120 &&
    username != studentUsername121 && password != studentPassword121 &&
    username != studentUsername122 && password != studentPassword122 &&
    username != studentUsername123 && password != studentPassword123 &&
    username != studentUsername124 && password != studentPassword124 &&
    username != studentUsername125 && password != studentPassword125 &&
    username != studentUsername126 && password != studentPassword126 &&
    username != studentUsername127 && password != studentPassword127 &&
    username != studentUsername128 && password != studentPassword128 &&
    username != studentUsername129 && password != studentPassword129 &&
    username != studentUsername130 && password != studentPassword130 &&
    username != studentUsername131 && password != studentPassword131 &&
    username != studentUsername132 && password != studentPassword132 &&
    username != studentUsername133 && password != studentPassword133 &&
    username != studentUsername134 && password != studentPassword134 &&
    username != studentUsername135 && password != studentPassword135 &&
    username != studentUsername136 && password != studentPassword136 &&
    username != studentUsername137 && password != studentPassword137 &&
    username != studentUsername138 && password != studentPassword138 &&
    username != studentUsername139 && password != studentPassword139 &&
    username != studentUsername140 && password != studentPassword140 &&
    username != studentUsername141 && password != studentPassword141 &&
    username != studentUsername142 && password != studentPassword142 &&
    username != studentUsername143 && password != studentPassword143 &&
    username != studentUsername144 && password != studentPassword144 &&
    username != studentUsername145 && password != studentPassword145 &&
    username != studentUsername146 && password != studentPassword146 &&
    username != studentUsername147 && password != studentPassword147 &&
    username != studentUsername148 && password != studentPassword148 &&
    username != studentUsername149 && password != studentPassword149 &&
    username != studentUsername150 && password != studentPassword150 &&
    username != studentUsername151 && password != studentPassword151 &&
    username != studentUsername152 && password != studentPassword152 &&
    username != studentUsername153 && password != studentPassword153 &&
    username != studentUsername154 && password != studentPassword154 &&
    username != studentUsername155 && password != studentPassword155 &&
    username != studentUsername156 && password != studentPassword156 &&
    username != studentUsername157 && password != studentPassword157 &&
    username != studentUsername158 && password != studentPassword158 &&
    username != studentUsername159 && password != studentPassword159 &&
    username != studentUsername160 && password != studentPassword160 &&
    username != studentUsername161 && password != studentPassword161 &&
    username != studentUsername162 && password != studentPassword162 &&
    username != studentUsername163 && password != studentPassword163 &&
    username != studentUsername164 && password != studentPassword164 &&
    username != studentUsername165 && password != studentPassword165 &&
    username != studentUsername166 && password != studentPassword166 &&
    username != studentUsername167 && password != studentPassword167 &&
    username != studentUsername168 && password != studentPassword168 &&
    username != studentUsername169 && password != studentPassword169 &&
    username != studentUsername170 && password != studentPassword170 &&
    username != studentUsername171 && password != studentPassword171 &&
    username != studentUsername172 && password != studentPassword172 &&
    username != studentUsername173 && password != studentPassword173 &&
    username != studentUsername174 && password != studentPassword174 &&
    username != studentUsername175 && password != studentPassword175 &&
    username != studentUsername176 && password != studentPassword176 &&
    username != studentUsername177 && password != studentPassword177 &&
    username != studentUsername178 && password != studentPassword178 &&
    username != studentUsername179 && password != studentPassword179 &&
    username != studentUsername180 && password != studentPassword180 &&
    username != studentUsername181 && password != studentPassword181 &&
    username != studentUsername182 && password != studentPassword182 &&
    username != studentUsername183 && password != studentPassword183 &&
    username != studentUsername184 && password != studentPassword184 &&
    username != studentUsername185 && password != studentPassword185 &&
    username != studentUsername186 && password != studentPassword186 &&
    username != studentUsername187 && password != studentPassword187 &&
    username != studentUsername188 && password != studentPassword188 &&
    username != studentUsername189 && password != studentPassword189 &&
    username != studentUsername190 && password != studentPassword190 &&
    username != studentUsername191 && password != studentPassword191 &&
    username != studentUsername192 && password != studentPassword192 &&
    username != studentUsername193 && password != studentPassword193 &&
    username != studentUsername194 && password != studentPassword194 &&
    username != studentUsername195 && password != studentPassword195 &&
    username != studentUsername196 && password != studentPassword196 &&
    username != studentUsername197 && password != studentPassword197 &&
    username != studentUsername198 && password != studentPassword198 &&
    username != studentUsername199 && password != studentPassword199 &&
    username != studentUsername200 && password != studentPassword200 &&
    username != studentUsername201 && password != studentPassword201 &&
    username != studentUsername202 && password != studentPassword202 &&
    username != studentUsername203 && password != studentPassword203 &&
    username != studentUsername204 && password != studentPassword204 &&
    username != studentUsername205 && password != studentPassword205 &&
    username != studentUsername206 && password != studentPassword206 &&
    username != studentUsername207 && password != studentPassword207 &&
    username != studentUsername208 && password != studentPassword208 &&
    username != studentUsername209 && password != studentPassword209 &&
    username != studentUsername210 && password != studentPassword210 &&
    username != studentUsername211 && password != studentPassword211 &&
    username != studentUsername212 && password != studentPassword212 &&
    username != studentUsername213 && password != studentPassword213 &&
    username != studentUsername214 && password != studentPassword214 &&
    username != studentUsername215 && password != studentPassword215 &&
    username != studentUsername216 && password != studentPassword216 &&
    username != studentUsername217 && password != studentPassword217 &&
    username != studentUsername218 && password != studentPassword218 &&
    username != studentUsername219 && password != studentPassword219 &&
    username != studentUsername220 && password != studentPassword220 &&
    username != studentUsername221 && password != studentPassword221 &&
    username != studentUsername222 && password != studentPassword222 &&
    username != studentUsername223 && password != studentPassword223 &&
    username != studentUsername224 && password != studentPassword224 &&
    username != studentUsername225 && password != studentPassword225 &&
    username != studentUsername226 && password != studentPassword226 &&
    username != studentUsername227 && password != studentPassword227 &&
    username != studentUsername228 && password != studentPassword228 &&
    username != studentUsername229 && password != studentPassword229 &&
    username != studentUsername230 && password != studentPassword230 &&
    username != studentUsername231 && password != studentPassword231 &&
    username != studentUsername232 && password != studentPassword232 &&
    username != studentUsername233 && password != studentPassword233 &&
    username != studentUsername234 && password != studentPassword234 &&
    username != studentUsername235 && password != studentPassword235 &&
    username != studentUsername236 && password != studentPassword236 &&
    username != studentUsername237 && password != studentPassword237 &&
    username != studentUsername238 && password != studentPassword238 &&
    username != studentUsername239 && password != studentPassword239 &&
    username != studentUsername240 && password != studentPassword240 &&
    username != studentUsername241 && password != studentPassword241 &&
    username != studentUsername242 && password != studentPassword242 &&
    username != studentUsername243 && password != studentPassword243 &&
    username != studentUsername244 && password != studentPassword244 &&
    username != studentUsername245 && password != studentPassword245 &&
    username != studentUsername246 && password != studentPassword246 &&
    username != studentUsername247 && password != studentPassword247 &&
    username != studentUsername248 && password != studentPassword248 &&
    username != studentUsername249 && password != studentPassword249 &&
    username != studentUsername250 && password != studentPassword250 &&
    username != teacherUsername1 && password != teacherPassword1 &&
    username != teacherUsername2 && password != teacherPassword2 &&
    username != teacherUsername3 && password != teacherPassword3 &&
    username != teacherUsername4 && password != teacherPassword4 &&
    username != teacherUsername5 && password != teacherPassword5 &&
    username != staffUsername1 && password != staffPassword1 &&
    username != staffUsername2 && password != staffPassword2 &&
    username != staffUsername3 && password != staffPassword3) {
        system("cls") ;
    cout << "Invalid Username/Password" << endl;
    goto main_menu;

    }
    else if(studentUsername1 == username && studentPassword1 == password || studentUsername2 == username && studentPassword2 == password || studentUsername3 == username && studentPassword3 == password || studentUsername4 == username && studentPassword4 == password || studentUsername5 == username && studentPassword5 == password || studentUsername6 == username && studentPassword6 == password || studentUsername7 == username && studentPassword7 == password || studentUsername8 == username && studentPassword8 == password || studentUsername9 == username && studentPassword9 == password ||
            studentUsername11 == username && studentPassword11 == password || studentUsername12 == username && studentPassword12 == password || studentUsername13 == username && studentPassword13 == password || studentUsername14 == username && studentPassword14 == password || studentUsername15 == username && studentPassword15 == password || studentUsername16 == username && studentPassword16 == password || studentUsername17 == username && studentPassword17 == password || studentUsername18 == username && studentPassword18 == password || studentUsername19 == username && studentPassword19 == password ||
            studentUsername20 == username && studentPassword20 == password || studentUsername21 == username && studentPassword21 == password || studentUsername22 == username && studentPassword22 == password || studentUsername23 == username && studentPassword23 == password || studentUsername24 == username && studentPassword24 == password || studentUsername25 == username && studentPassword25 == password || studentUsername26 == username && studentPassword26 == password || studentUsername27 == username && studentPassword27 == password || studentUsername28 == username && studentPassword28 == password || studentUsername29 == username && studentPassword29 == password || studentUsername30 == username && studentPassword30 == password ||
            studentUsername31 == username && studentPassword31 == password || studentUsername32 == username && studentPassword32 == password || studentUsername33 == username && studentPassword33 == password || studentUsername34 == username && studentPassword34 == password || studentUsername35 == username && studentPassword35 == password || studentUsername36 == username && studentPassword36 == password || studentUsername37 == username && studentPassword37 == password || studentUsername38 == username && studentPassword38 == password || studentUsername39 == username && studentPassword39 == password ||
            studentUsername40 == username && studentPassword40 == password || studentUsername41 == username && studentPassword41 == password || studentUsername42 == username && studentPassword42 == password || studentUsername43 == username && studentPassword43 == password || studentUsername44 == username && studentPassword44 == password || studentUsername45 == username && studentPassword45 == password || studentUsername46 == username && studentPassword47 == password || studentUsername48 == username && studentPassword48 == password || studentUsername49 == username && studentPassword49 == password ||
            studentUsername50 == username && studentPassword50 == password && studentUsername51 == username && studentPassword51 == password)

        {
studentMenu:
        int age;
        string medical;
        string grade11;
        string grade12;
        cout << "Welcome Student" << endl;
        cout << "Please Enter your age" << endl;
        while (!(cin >> age) || age < 1 || age > 100) {
           cin.clear(); // Napanood ko to sa YT sabi ni-rereset nito yung error para makapg-input ule yung user
           cin.ignore(1000, '\n'); // Purpose naman nito is to ignore such characters that ain't integers
           cout << "Invalid input. Please enter a valid age (1-100): ";
             }
        cout << "Do you have Medical?(yes or no only)";
        cin >> medical;
        cout << "Please input your average for grade 11" << endl;
        cin >> grade11;
        cout << "Please input your average for grade 12" << endl;
        cin >> grade12;
       if(medical == "yes" || "Yes"){
        cout << "Congrats you meet the requirements" << endl ;

       }

            cout << "Invalid username or password. Please try again.\n";
            goto login;
        }

 return 0 ;
}
