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

    // Admin Login
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
            cout << "Enter teacher username: ";
            cin >> newUsername;
            cout << "Enter teacher password: ";
            cin >> newPassword;

            if ((teacherCount == 0 || (teacherUsername1 != newUsername || teacherPassword1 != newPassword)) && (teacherCount < 2 || (teacherUsername2 != newUsername || teacherPassword2 != newPassword)) && (teacherCount < 3 || (teacherUsername3 != newUsername || teacherPassword3 != newPassword)) && (teacherCount < 4 || (teacherUsername4 != newUsername || teacherPassword4 != newPassword)))
            {
                if (teacherCount == 0)
                {
                    teacherUsername1 = newUsername;
                    teacherPassword1 = newPassword;
                }
                else if (teacherCount == 1)
                {
                    teacherUsername2 = newUsername;
                    teacherPassword2 = newPassword;
                }
                else if (teacherCount == 2)
                {
                    teacherUsername3 = newUsername;
                    teacherPassword3 = newPassword;
                }
                else if (teacherCount == 3)
                {
                    teacherUsername4 = newUsername;
                    teacherPassword4 = newPassword;
                }
                else if (teacherCount == 4)
                {
                    teacherUsername5 = newUsername;
                    teacherPassword5 = newPassword;
                }
                teacherCount++;
                cout << "Teacher account created successfully.\n";
            }
            else
            {
                cout << "This username and password combination already exists.\n";
            }
            goto admin_menu;
        }
        else if (adminChoice == 2 && teacherCount >= 5)
        {
            cout << "Maximum teacher accounts reached.\n";
            goto admin_menu;
        }
        else if (adminChoice != 3)
        {
            cout << "Invalid choice, please try again.\n";
            goto admin_menu;
        }
        goto main_menu;
    }

    // Staff Login
    if ((username == staffUsername1 && password == staffPassword1) || (username == staffUsername2 && password == staffPassword2) || (username == staffUsername3 && password == staffPassword3))
    {
        cout << "Staff logged in successfully.\n";
        /*
        View student details(wag na muna lagyan ng function)
        View employee information(wag na muna lagyan ng function)
        Change Password(wag na muna lagyan ng function)
        */






// int staffChoice

// switch(staffChoice){
//     case: 1{

//     }
//     case: 2{

//     }
//     case: 3{

//     }
// }



// Gagawa ng variable (staffChoice) => refer to line 169


//example:
// if (staffChoice == 2 && teacherCount < 5)
//         {
//             string newUsername, newPassword;
//             cout << "Enter teacher username: ";
//             cin >> newUsername;
//             cout << "Enter teacher password: ";
//             cin >> newPassword;

//             if ((teacherCount == 0 || (teacherUsername1 != newUsername || teacherPassword1 != newPassword)) && (teacherCount < 2 || (teacherUsername2 != newUsername || teacherPassword2 != newPassword)) && (teacherCount < 3 || (teacherUsername3 != newUsername || teacherPassword3 != newPassword)) && (teacherCount < 4 || (teacherUsername4 != newUsername || teacherPassword4 != newPassword)))
//             {
//                 if (teacherCount == 0)
//                 {
//                     teacherUsername1 = newUsername;
//                     teacherPassword1 = newPassword;
//                 }
//                 else if (teacherCount == 1)
//                 {
//                     teacherUsername2 = newUsername;
//                     teacherPassword2 = newPassword;
//                 }
//                 else if (teacherCount == 2)
//                 {
//                     teacherUsername3 = newUsername;
//                     teacherPassword3 = newPassword;
//                 }
//                 else if (teacherCount == 3)
//                 {
//                     teacherUsername4 = newUsername;
//                     teacherPassword4 = newPassword;
//                 }
//                 else if (teacherCount == 4)
//                 {
//                     teacherUsername5 = newUsername;
//                     teacherPassword5 = newPassword;
//                 }
//                 teacherCount++;
//                 cout << "Teacher account created successfully.\n";
//             }
//             else
//             {
//                 cout << "This username and password combination already exists.\n";
//             }





































        goto main_menu;
    }

    // Teacher Login
    if ((username == teacherUsername1 && password == teacherPassword1) || (username == teacherUsername2 && password == teacherPassword2) || (username == teacherUsername3 && password == teacherPassword3) || (username == teacherUsername4 && password == teacherPassword4) || (username == teacherUsername5 && password == teacherPassword5))
    {
    teacher_menu:
        cout << "\nTeacher Menu:\n";
        cout << "1. Create Student Account\n";
        cout << "2. Logout\n";
        cout << "Enter your choice: ";
        int teacherChoice;
        cin >> teacherChoice;

        if (teacherChoice == 1 && studentCount < 250)
        { // Handling 250 students
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

                 else if (studentCount == 50)
                {
                    studentUsername51 = newUsername;
                    studentPassword51 = newPassword;
                }
                else if (studentCount == 51)
                {
                    studentUsername52 = newUsername;
                    studentPassword52 = newPassword;
                }
                else if (studentCount == 52)
                {
                    studentUsername53 = newUsername;
                    studentPassword53 = newPassword;
                }
                else if (studentCount == 53)
                {
                    studentUsername54 = newUsername;
                    studentPassword54 = newPassword;
                }
                else if (studentCount == 54)
                {
                    studentUsername55 = newUsername;
                    studentPassword55 = newPassword;
                }
                else if (studentCount == 55)
                {
                    studentUsername56 = newUsername;
                    studentPassword56 = newPassword;
                }
                else if (studentCount == 56)
                {
                    studentUsername57 = newUsername;
                    studentPassword57 = newPassword;
                }
                else if (studentCount == 57)
                {
                    studentUsername58 = newUsername;
                    studentPassword58 = newPassword;
                }
                else if (studentCount == 58)
                {
                    studentUsername59 = newUsername;
                    studentPassword59 = newPassword;
                }
                else if (studentCount == 59)
                {
                    studentUsername60 = newUsername;
                    studentPassword60 = newPassword;
                }
                else if (studentCount == 60)
                {
                    studentUsername61 = newUsername;
                    studentPassword61 = newPassword;
                }
                else if (studentCount == 61)
                {
                    studentUsername62 = newUsername;
                    studentPassword62 = newPassword;
                }
                else if (studentCount == 62)
                {
                    studentUsername63 = newUsername;
                    studentPassword63 = newPassword;
                }
                else if (studentCount == 63)
                {
                    studentUsername64 = newUsername;
                    studentPassword64 = newPassword;
                }
                else if (studentCount == 64)
                {
                    studentUsername65 = newUsername;
                    studentPassword65 = newPassword;
                }
                else if (studentCount == 65)
                {
                    studentUsername66 = newUsername;
                    studentPassword66 = newPassword;
                }
                else if (studentCount == 66)
                {
                    studentUsername67 = newUsername;
                    studentPassword67 = newPassword;
                }
                else if (studentCount == 67)
                {
                    studentUsername68 = newUsername;
                    studentPassword68 = newPassword;
                }
                else if (studentCount == 68)
                {
                    studentUsername69= newUsername;
                    studentPassword69 = newPassword;
                }
                else if (studentCount == 69)
                {
                    studentUsername70 = newUsername;
                    studentPassword70 = newPassword;
                }
                else if (studentCount == 70)
                {
                    studentUsername71 = newUsername;
                    studentPassword71 = newPassword;
                }
                else if (studentCount == 71)
                {
                    studentUsername72 = newUsername;
                    studentPassword72 = newPassword;
                }
                else if (studentCount == 72)
                {
                    studentUsername72 = newUsername;
                    studentPassword72 = newPassword;
                }
                else if (studentCount == 73)
                {
                    studentUsername74 = newUsername;
                    studentPassword74 = newPassword;
                }
                else if (studentCount == 74)
                {
                    studentUsername75 = newUsername;
                    studentPassword75 = newPassword;
                }
                else if (studentCount == 75 )
                {
                    studentUsername76 = newUsername;
                    studentPassword76 = newPassword;
                }
                else if (studentCount == 76)
                {
                    studentUsername77 = newUsername;
                    studentPassword77 = newPassword;
                }
                else if (studentCount == 77)
                {
                    studentUsername78= newUsername;
                    studentPassword78 = newPassword;
                }
                else if (studentCount == 78)
                {
                    studentUsername79 = newUsername;
                    studentPassword79 = newPassword;
                }
                else if (studentCount == 79)
                {
                    studentUsername80 = newUsername;
                    studentPassword80 = newPassword;
                }
                else if (studentCount == 80)
                {
                    studentUsername81 = newUsername;
                    studentPassword81 = newPassword;
                }
                else if (studentCount == 81)
                {
                    studentUsername82 = newUsername;
                    studentPassword82 = newPassword;
                }
                else if (studentCount == 82)
                {
                    studentUsername83 = newUsername;
                    studentPassword83 = newPassword;
                }
                else if (studentCount == 83)
                {
                    studentUsername84 = newUsername;
                    studentPassword84 = newPassword;
                }
                else if (studentCount == 84)
                {
                    studentUsername85 = newUsername;
                    studentPassword85 = newPassword;
                }
                else if (studentCount == 85)
                {
                    studentUsername86 = newUsername;
                    studentPassword86 = newPassword;
                }
                else if (studentCount == 86)
                {
                    studentUsername87 = newUsername;
                    studentPassword87 = newPassword;
                }
                else if (studentCount == 87)
                {
                    studentUsername88 = newUsername;
                    studentPassword88 = newPassword;
                }
                else if (studentCount == 88)
                {
                    studentUsername89 = newUsername;
                    studentPassword89 = newPassword;
                }
                else if (studentCount == 89)
                {
                    studentUsername90 = newUsername;
                    studentPassword90 = newPassword;
                }
                else if (studentCount == 90)
                {
                    studentUsername91 = newUsername;
                    studentPassword91 = newPassword;
                }
                else if (studentCount == 91)
                {
                    studentUsername92 = newUsername;
                    studentPassword92 = newPassword;
                }
                else if (studentCount == 93)
                {
                    studentUsername93 = newUsername;
                    studentPassword93 = newPassword;
                }
                else if (studentCount == 93)
                {
                    studentUsername94 = newUsername;
                    studentPassword94 = newPassword;
                }
                else if (studentCount == 94)
                {
                    studentUsername95 = newUsername;
                    studentPassword95 = newPassword;
                }
                else if (studentCount == 95)
                {
                    studentUsername96 = newUsername;
                    studentPassword96 = newPassword;
                }
                else if (studentCount == 96)
                {
                    studentUsername97 = newUsername;
                    studentPassword97 = newPassword;
                }
                else if (studentCount == 97)
                {
                    studentUsername98 = newUsername;
                    studentPassword98 = newPassword;
                }
                else if (studentCount == 98)
                {
                    studentUsername99 = newUsername;
                    studentPassword99 = newPassword;
                }
                else if (studentCount == 99)
                {
                    studentUsername100 = newUsername;
                    studentPassword100 = newPassword;
                }
                 else if (studentCount == 100)
                {
                    studentUsername101 = newUsername;
                    studentPassword101 = newPassword;
                }
                else if (studentCount == 101)
                {
                    studentUsername102 = newUsername;
                    studentPassword102 = newPassword;
                }
                else if (studentCount == 102)
                {
                    studentUsername103 = newUsername;
                    studentPassword103 = newPassword;
                }
                else if (studentCount == 103)
                {
                    studentUsername104 = newUsername;
                    studentPassword104 = newPassword;
                }
                else if (studentCount == 104)
                {
                    studentUsername105 = newUsername;
                    studentPassword105 = newPassword;
                }
                else if (studentCount == 105)
                {
                    studentUsername106 = newUsername;
                    studentPassword106 = newPassword;
                }
                else if (studentCount == 106 )
                {
                    studentUsername107 = newUsername;
                    studentPassword107 = newPassword;
                }
                else if (studentCount == 107)
                {
                    studentUsername108 = newUsername;
                    studentPassword108 = newPassword;
                }
                else if (studentCount == 108)
                {
                    studentUsername109 = newUsername;
                    studentPassword109 = newPassword;
                }
                else if (studentCount == 109)
                {
                    studentUsername110 = newUsername;
                    studentPassword110 = newPassword;
                }
                else if (studentCount == 110)
                {
                    studentUsername111 = newUsername;
                    studentPassword111 = newPassword;
                }
                else if (studentCount == 111)
                {
                    studentUsername112 = newUsername;
                    studentPassword112 = newPassword;
                }
                else if (studentCount == 112)
                {
                    studentUsername113 = newUsername;
                    studentPassword113 = newPassword;
                }
                else if (studentCount == 114)
                {
                    studentUsername115 = newUsername;
                    studentPassword115 = newPassword;
                }
                else if (studentCount == 115)
                {
                    studentUsername116 = newUsername;
                    studentPassword116 = newPassword;
                }
                else if (studentCount == 116)
                {
                    studentUsername117 = newUsername;
                    studentPassword117 = newPassword;
                }
                else if (studentCount == 117)
                {
                    studentUsername118 = newUsername;
                    studentPassword118 = newPassword;
                }
                else if (studentCount == 119)
                {
                    studentUsername120 = newUsername;
                    studentPassword120 = newPassword;
                }
                else if (studentCount == 121)
                {
                    studentUsername122 = newUsername;
                    studentPassword122 = newPassword;
                }
                else if (studentCount == 122)
                {
                    studentUsername123 = newUsername;
                    studentPassword123 = newPassword;
                }
                else if (studentCount == 123)
                {
                    studentUsername124 = newUsername;
                    studentPassword124 = newPassword;
                }
                else if (studentCount == 124)
                {
                    studentUsername125 = newUsername;
                    studentPassword125 = newPassword;
                }
                else if (studentCount == 126)
                {
                    studentUsername127 = newUsername;
                    studentPassword127 = newPassword;
                }
                else if (studentCount == 127)
                {
                    studentUsername128 = newUsername;
                    studentPassword128 = newPassword;
                }
                else if (studentCount == 128)
                {
                    studentUsername129 = newUsername;
                    studentPassword129 = newPassword;
                }
                else if (studentCount == 129)
                {
                    studentUsername130 = newUsername;
                    studentPassword130 = newPassword;
                }
                else if (studentCount == 130)
                {
                    studentUsername131 = newUsername;
                    studentPassword131 = newPassword;
                }
                else if (studentCount == 131)
                {
                    studentUsername132 = newUsername;
                    studentPassword132 = newPassword;
                }
                else if (studentCount == 132)
                {
                    studentUsername133 = newUsername;
                    studentPassword133 = newPassword;
                }
                else if (studentCount == 133)
                {
                    studentUsername134 = newUsername;
                    studentPassword134 = newPassword;
                }
                else if (studentCount == 134)
                {
                    studentUsername135 = newUsername;
                    studentPassword135 = newPassword;
                }
                 else if (studentCount == 135)
                {
                    studentUsername136 = newUsername;
                    studentPassword136 = newPassword;
                }
                else if (studentCount == 136)
                {
                    studentUsername137 = newUsername;
                    studentPassword137 = newPassword;
                }
                else if (studentCount == 138)
                {
                    studentUsername139 = newUsername;
                    studentPassword139 = newPassword;
                }
                else if (studentCount == 139)
                {
                    studentUsername140 = newUsername;
                    studentPassword140 = newPassword;
                }
                else if (studentCount == 140)
                {
                    studentUsername141 = newUsername;
                    studentPassword141 = newPassword;
                }
                else if (studentCount == 141)
                {
                    studentUsername142 = newUsername;
                    studentPassword142 = newPassword;
                }
                else if (studentCount == 142)
                {
                    studentUsername143 = newUsername;
                    studentPassword143 = newPassword;
                }
                else if (studentCount == 143)
                {
                    studentUsername144 = newUsername;
                    studentPassword144 = newPassword;
                }
                else if (studentCount == 144)
                {
                    studentUsername145 = newUsername;
                    studentPassword145 = newPassword;
                }
                else if (studentCount == 145)
                {
                    studentUsername146 = newUsername;
                    studentPassword146 = newPassword;
                }
                else if (studentCount == 146)
                {
                    studentUsername147 = newUsername;
                    studentPassword147 = newPassword;
                }
                else if (studentCount == 147)
                {
                    studentUsername148 = newUsername;
                    studentPassword148 = newPassword;
                }
                else if (studentCount == 148)
                {
                    studentUsername149 = newUsername;
                    studentPassword149 = newPassword;
                }
                else if (studentCount == 149)
                {
                    studentUsername150 = newUsername;
                    studentPassword150 = newPassword;
                }
                else if (studentCount == 150)
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
                else if (studentCount == 161 )
                {
                    studentUsername162 = newUsername;
                    studentPassword162 = newPassword;
                }
                else if (studentCount == 162)
                {
                    studentUsername163 = newUsername;
                    studentPassword173 = newPassword;
                }
                else if (studentCount == 163)
                {
                    studentUsername164= newUsername;
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
                else if (studentCount == 175)
                {
                    studentUsername176 = newUsername;
                    studentPassword176 = newPassword;
                }
                else if (studentCount == 176)
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
                else if (studentCount == 199)
                {
                    studentUsername199 = newUsername;
                    studentPassword199 = newPassword;
                }
                else if (studentCount == 199)
                {
                    studentUsername200 = newUsername;
                    studentPassword200 = newPassword;
                }
                else if (studentCount == 200)
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
            goto teacher_menu;
        }
        else if (teacherChoice == 1 && studentCount >= 250)
        {
            cout << "Maximum student accounts for this course reached.\n";
            goto teacher_menu;
        }
        else if (teacherChoice != 2)
        {
            cout << "Invalid choice, please try again.\n";
            goto teacher_menu;
        }
        goto main_menu;
    }

    cout << "Invalid username or password. Please try again.\n";
    goto login;

    return 0;
}
