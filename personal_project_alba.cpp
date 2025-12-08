//DECEMBER 8, 2025 (4:28 pm)
#include <iostream>  //mandatory header file 
#include <cmath>  //for calculations 
#include <iomanip> //i personally forgot
#include <cctype> //for character manipulation (small or big letter/s) 
using namespace std;

// NAME: ALBA, AERICK LEE P. 
// DATE: FEBRUARY 16, 2025 (3:46 pm) 
// PROJECT: ACADEMIC TOOL HUB 
// The Academic Hub consists of 4 subjects: math, english, 
// filipino and science. It will be helpful for students of all 
// ages and year-levels

// OVERALL UPDATE AS OF DECEMBER 8, 2025 (6:30 pm):
// ENGLISH, FILIPINO AND SCIENCE will hopefully be utilized
// CONTEMPLATING in MATH because i want to add PHYSICS and STATISTICS separately under MATH
// Will try to integrate more concepts to this project in the future

//for all users (students & teachers)
void accMenu(int& number)  
{
    cout << "WELCOME!\n"
            "====================\n"
            "[1] SIGN-UP\n"
            "[2] LOG-IN\n"
            "====================\n"
            "ENTER YOUR CHOICE: "; cin >> number; 
}

//for all users (students & teachers)
void accCreate(string& name, int& age, char& choice) 
{
    cout << "===== ACCOUNT CREATION =====\n"
            "ENTER YOUR NAME: "; cin >> name;
    cout << "ENTER YOUR AGE: "; cin >> age;
    cout << "====================\n" 
            "WHICH ONE ARE YOU?: \n"
            "[A] TEACHER\n"
            "[B] STUDENT\n"
            "====================\n" 
            "ENTER YOUR CHOICE: "; cin >> choice;
    cout << "====================\n"; 

    choice = toupper(choice); 
}

//to be continued
void teacherMenu()
{
    cout << "WELCOME TO THE ACADEMIC TOOL HUB! (for teachers)\n"
            "====================\n"
            "[1] MATH"
            "[2] ENGLISH"
            "[3] SCIENCE"
            "[4] FILIPINO"; 

    //The function or purpose for teachers in using Academic Hub: 
    // track student progress ; grade student scores ; provide lessons via uploads 
    // generate tests for them 

}

//STUDENT MENU: for-loop, array, switch  
// (contains the four subjects for this project: math, english, filipino and science) 
void studentMenu(int &number, string student_menu[])
{
    cout << "WELCOME TO THE ACADEMIC TOOL HUB! (for students)\n";
        
    for (int i = 0; i < 4; i++)
    {
        cout << student_menu[i]; 
    }

    cout << "====================\n" 
            "ENTER YOUR CHOICE: "; cin >> number;  
    cout << "====================\n";
}

//MATH MENU: for-loop, array, switch 
void mathMenu(int& number, string math_menu[])
{
    cout << "WELCOME TO MATH!\n"
            "====================\n";

    for (int i = 0; i < 8; i++)
    {
        cout << math_menu[i]; 
    }
       
     cout << "====================\n"
             "ENTER YOUR CHOICE: "; cin >> number;
     cout << "====================\n"; 
}

// MULTIPLICATION TABLES: will try to understand how the code works in this part since i used AI on how 
// it displays each multiplication table 
void mathTable(char &choice, int &b)
{
    do 
    {
        cout << "===== MULTIPLICATION TABLES =====\n"
                "CHOOSE THE MULTIPLICATION TABLE OF YOUR CHOICE:\n"
                "A) TABLE OF 1\n"
                "B) TABLE OF 2\n"
                "C) TABLE OF 3\n"
                "D) TABLE OF 4\n"
                "E) TABLE OF 5\n"
                "F) TABLE OF 6\n"
                "G) TABLE OF 7\n"
                "H) TABLE OF 8\n"
                "I) TABLE OF 9\n"
                "J) TABLE OF 10\n"
                "====================\n" 
                "ENTER YOUR CHOICE: "; cin >> choice; 
        cout << "====================\n";
        
        int table = (choice >= 'a' && choice <= 'j') ? (choice - 'a' + 1) :
            (choice >= 'A' && choice <= 'J') ? (choice - 'A' + 1) : -1;

        if (table != -1)
        {
            cout << "Table of " << table << endl;
            for (b = 1; b <= 10; b++)
            {
                cout << table << " * " << b << " = " << table * b << endl;
            }
            cout << "\n";
        }
        else
        {
            cout << "INVALID INPUT\n";
        }

        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');
    cout << "THANK YOU FOR USING MATH! :-)\n"; 
}

// a simple execution of a conditional statement (switch case) 
// a beginner friendly C++ system that allows the user how a calculator works through 
// the selection of operations that they want to perform. 
// i'm contemplating for this to be dynamic in the future
// example: instead of users being limited to only entering two numbers, 
// they can enter as many numbers as they want 
void mathCalc(char &choice, int& num1, int& num2, int& sum, int& diff, 
    int& prod, int& quo, int& modulo)
{
    do
    {
        cout << "===== CALCULATOR =====\n"
                "ENTER THE FIRST NUMBER: "; cin >> num1;
        cout << "ENTER THE SECOND NUMBER: "; cin >> num2;
        cout << "CHOOSE AN OPERATOR (+, -, *, /, %): "; cin >> choice;

        switch (choice)
        {
            case '+':
            sum = num1 + num2;
            cout << "ANSWER: " << sum << endl;
            break;

            case '-':
            diff = num1 - num2;
            cout << "ANSWER: " << diff << endl;
            break;

            case '*':
            prod = num1 * num2;
            cout << "ANSWER: " << prod << endl;
            break;

            case '/':
            if (num2 != 0)
            {
                quo = num1 / num2;
                cout << "ANSWER: " << quo << endl;
            }

            else
            {
                cout << "ERROR: Division by zero!" << endl;
            }
            break;

            case '%':
            modulo = num1 % num2;
            cout << "ANSWER: " << modulo << endl;
            break;

            default:
            cout << "INVALID INPUT\n";
        }

        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');      
    cout << "THANK YOU FOR USING MATH! :-)\n";
}

// MATH VOLUME MENU: for-loop, array, switch
// contemplating to add more volume of figures. to be continued 
void mathVolume(char &choice, int& side, int& cube, int& length, 
    int& width, int& height, int& rec_prism, int& radius, int& sphere, 
    int& cylinder, float& sphere_fraction, float& pi, string math_volume[])
{
    do
    {
        cout << "===== VOLUME OF FIGURES =====\n";
         
        for (int i = 0; i < 4; i++)
        {
            cout << math_volume[i]; 
        }

        cout << "ENTER YOUR CHOICE: "; cin >> choice; 

        choice = toupper(choice); 

        switch (choice) 
        {
            case 'A':
            cout << "YOU HAVE CHOSEN CUBE\n"
                    "ENTER SIDE: "; cin >> side;
            cube = side * side * side;
            cout << "THE VOLUME OF THE CUBE IS: " << cube << endl;
            break;
            
            case 'B':
            cout << "YOU HAVE CHOSEN RECTANGULAR PRISM\n"
                    "ENTER LENGTH: "; cin >> length;
            cout << "ENTER WIDTH: "; cin >> width;
            cout << "ENTER HEIGHT: "; cin >> height;
            rec_prism = length * width * height;
            cout << "THE VOLUME OF THE RECTANGULAR PRISM IS: " << rec_prism 
                << endl;
            break;
            
            case 'C':
            cout << "YOU HAVE CHOSEN SPHERE\n"
                    "ENTER RADIUS: "; cin >> radius;
            sphere = sphere_fraction * pi * (radius * radius * radius);
            cout << "THE VOLUME OF THE SPHERE IS: " << sphere << endl;
            break;

            case 'D':
            cout << "YOU HAVE CHOSEN CYLINDER\n"
                    "ENTER RADIUS: "; cin >> radius;
            cout << "ENTER HEIGHT: "; cin >> height;
            cylinder = pi * (radius * radius) * height;
            cout << "THE VOLUME OF THE CYLINDER IS: " << cylinder << endl;
            break;

            default:
            cout << "INVALID INPUT\n";
        }
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');
    cout << "THANK YOU FOR USING MATH! :-)\n";   
}

// a simple execution of a conditional statement (if else) 
// checks if a number is odd or even 
void mathOdd(int& number, char& choice)
{
    do
    {
        cout << "===== ODD AND EVEN NUMBERS =====\n"
                "ENTER A NUMBER: "; cin >> number;

        if (number % 2 != 0)
        {
            cout << "THE NUMBER IS ODD\n";
        }

        else if (number % 2 == 0)
        {
            cout << "THE NUMBER IS EVEN\n";
        }

        else
        {
            cout << "INVALID INPUT\n";
        }

        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');    
    cout << "THANK YOU FOR USING MATH! :-)\n";  
}

// a simple execution of a conditional statement (if else) 
// checks if a number is positive or negative 
void mathPositive(int& number, char& choice)
{
    do
    {
        cout << "===== POSITIVE AND NEGATIVE NUMBERS =====\n"
                "ENTER A NUMBER: "; cin >> number;

        if (number >= 0)
        {
            cout << "THE NUMBER IS POSITIVE\n";
        }

        else if (number < 0)
        {
            cout << "THE NUMBER IS NEGATIVE\n";
        }

        else
        {
            cout << "INVALID INPUT\n";
        }

        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');   
    cout << "THANK YOU FOR USING MATH! :-)\n";   
}

// a simple execution of a conditional statement (if else) 
void mathBig(int& num1, int& num2, char& choice)
{
    do
    {
        cout << "===== BIG AND SMALL NUMBERS =====\n"
                "ENTER THE FIRST NUMBER: "; cin >> num1;
        cout << "ENTER THE SECOND NUMBER: "; cin >> num2;

        if (num1 > num2)
        {
            cout << "THE NUMBER " << num1 << " IS BIGGER THAN THE NUMBER " << 
                num2 << "\n";
        }

        else
        {
            cout << "THE NUMBER " << num1 << " IS SMALLER THAN THE NUMBER " << 
                num2 << "\n";
        }

        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice); 
    } 
    while (choice == 'Y');    
    cout << "THANK YOU FOR USING MATH! :-)\n"; 
}

// OTHER MATH TOPICS MENU: for-loop, array, switch 
// (other features of math that are not well-known/underutilized in school) 
void mathOther(char& choice, string math_others[])
{
    cout << "===== OTHERS =====\n";

    for (int i = 0; i < 4; i++)
    {
        cout << math_others[i]; 
    }     
    cout << "ENTER YOUR CHOICE: "; cin >> choice;
    cout << "====================\n";

    choice = toupper(choice); 
}

// mathematical built in c++ functions utilized: sqrt (square root) 
void mathSquareroot(double& digit, double& answer, char& choice)
{
    do
    {
        cout << "===== SQUAREROOT OF A NUMBER =====\n"
                "ENTER A NUMBER: "; cin >> digit;
        answer = sqrt(digit);
        cout << "THE SQUAREROOT OF " << digit << " IS: " << answer << "\n";
       
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice); 
    } 
    while (choice == 'Y');   
    cout << "THANK YOU FOR USING MATH! :-)\n";    
}

// mathematical built in c++ functions utilized: pow (power) 
void mathPower(int& power, int& number, char& choice)
{
    do
    {
        cout << "===== POWER OF A NUMBER =====\n"
                "ENTER A NUMBER: "; cin >> number;
        power = pow(number, 2);
        cout << "THE POWER OF " << number << " IS: " << power << "\n";
       
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');   
    cout << "THANK YOU FOR USING MATH! :-)\n";   
}

// mathematical built in c++ functions utilized: ceil & floor
void mathCeilfloor(float& symbol, char& choice)
{
    do
    {
        cout << "===== CEIL AND FLOOR =====\n"
                "ENTER A NUMBER: "; cin >> symbol;
        cout << "====================\n"
                "THE CEILING OF " << symbol << " IS: " << ceil(symbol) << "\n"
                "THE FLOOR OF " << symbol << " IS: " << floor(symbol) << "\n";
       
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice); 

    } while (choice == 'Y');
}

// MATH CONVERSION MENU: contemplating to re-code everything under this menu in vice-versa.
// example: if a user has already tried converting their input in meters to kilometers, the system would 
// should also allow them to try converting kilometers to meters 
void mathUnitconversion(char& choice)
{    
        cout << "===== UNIT CONVERSION =====\n"
                "[A] METERS TO KILOMETERS\n"
                "[B] CENTIMETERS TO METERS\n" 
                "====================\n"
                "ENTER YOUR CHOICE: "; cin >> choice;
        cout << "====================\n";  
       
        choice = toupper(choice); 
}

// mathematical computation (meter - kilometer conversion). i searched online for the formula used 
void mathMetertokilometer(int& meter, double& formula, char& choice)
{
    do
    {        
        cout << "ENTER THE NUMBER IN METERS: "; cin >> meter;
        formula = meter * 0.001;
        cout << "THE METER " << meter << " CONVERTED TO KILOMETERS IS: " << 
            formula << "\n";
       
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice); 
    } 
    while (choice == 'Y');
}

// mathematical computation (centimeter - meter conversion). i searched online for the formula used 
void mathCentimetertometer(double& centimeter, double& solution, char& choice)
{
    do
    {
        cout << "ENTER THE NUMBER IN CENTIMETERS: "; cin >> centimeter;
        solution = centimeter / 100;
        cout << "THE CENTIMETER " << centimeter << " CONVERTED TO METERS IS: " 
            << solution << "\n";
        
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');
}

// STATISTICS MENU: not fully utilized yet. to be continued 
void mathStatisticsmenu(char& choice)
{
    cout << "===== STATISTICS =====\n"
            "[A] SIMPLE INTEREST CALCULATOR\n"
            "====================\n"
            "ENTER YOUR CHOICE: "; cin >> choice;
    cout << "====================\n";
    
    choice = toupper(choice); 
}

// SIMPLE INTEREST: a block of code i have learned during my first year of college
// in a subject 'COMPUTER PROGRAMMING 1'
void mathSimpleinterest(char& choice, float& interest, int& time, int& amount, 
    int& the_formula, int& the_answer)
{
    do
    {
        cout << "===== SIMPLE INTEREST CALCULATOR =====\n"
                "ENTER THE AMOUNT (PHP): "; cin >> amount;
        cout << "ENTER THE RATE OF INTEREST (%): "; cin >> interest;
        cout << "ENTER THE TIME IN YEARS: "; cin >> time;
        the_formula = amount * interest * time;
        the_answer = the_formula / 100;
        cout << "THE SIMPLE INTEREST IS: PHP " << the_answer << "\n";
       
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');
    cout << "THANK YOU FOR USING MATH! :-)\n";
}

// ENGLISH MENU: not fully utilized yet. to be continued 
void englishMenu(int& number) 
{
    cout << "WELCOME TO ENGLISH!\n"
            "====================\n"
            "[1] CONSONANT AND VOWELS\n"
            "====================\n"
            "ENTER YOUR CHOICE: "; cin >> number; 
    cout << "====================\n"; 
}

// ENGLISH CONSONANT: same principle with the FILIPINO KATINIG void function 
void englishConsonant(char& choice)
{
    do
    {
        cout << "===== CONSONANT AND VOWELS =====\n"
                "ENTER A LETTER: "; cin >> choice;

        choice = toupper(choice); 

        switch (choice)
        {        
            case 'A':
            case 'E':           
            case 'I':            
            case 'O':            
            case 'U':
            cout << "ANSWER: THE LETTER " << choice << " IS A VOWEL" << "\n";
            break;

            default:
            cout << "ANSWER: THE LETTER " << choice << " IS A CONSONANT" << "\n";

        }
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice;
        choice = toupper(choice); 
    } 
    while (choice == 'Y');  
    cout << "THANK YOU FOR USING ENGLISH! :-)\n";     
}

// FILIPINO MENU: not fully utilized yet. to be continued 
void filipinoMenu(int& number) 
{
    cout << "WELCOME TO FILIPINO!\n" 
            "====================\n" 
            "[1] KATINIG AT PATINIG\n" 
            "====================\n" 
            "ENTER YOUR CHOICE: "; cin >> number;  
    cout << "====================\n"; 
}

// FILIPINO KATINIG: a simple execution of a conditional structure (switch case) that allows the
// user to sift through options that outweigh the many (the alphabet has 26 letters, only 5 of them are vowels
// , instead of coding al 26, i only coded the 5 vowels needed to determine whether a letter entered by the
// user is a vowel or a consonant
void filipinoKatinig(char& choice)
{
    do
    {
        cout << "===== KATINIG AT PATINIG =====\n"
                "MAG-SALIN NG LETRA: "; cin >> choice;

        choice = toupper(choice); 

        switch (choice)
        {            
            case 'A':            
            case 'E':            
            case 'I':            
            case 'O':            
            case 'U':
            cout << "SAGOT: ANG LETRANG " << choice << " AY PATINIG" << endl;
            break;

            default:
            cout << "SAGOT: ANG LETRANG  " << choice << " AY KATINIG" << endl;

        }
        cout << "GUSTO MO BANG SUBUKAN ULIT? (Y/N): "; cin >> choice;
        choice = toupper(choice);
    } 
    while (choice == 'Y');
}

// SCIENCE MENU: not fully utilized yet. to be continued 
void scienceMenu(int& number)
{
    cout << "WELCOME TO SCIENCE!\n"
            "====================\n"
            "[1] TEMPERATURE CONVERTER\n"
            "====================\n" 
            "ENTER YOUR CHOICE: "; cin >> number; 
    cout << "====================\n";      
}

// not fully utilized yet 
void scienceTempmenu(char& choice)
{
    cout << "===== TEMPERATURE CONVERTER =====\n"
            "[A] CELCIUS TO FARENHEIT\n"
            "====================\n"
            "ENTER YOUR CHOICE: "; cin >> choice; 
    cout << "====================\n"; 
   
    choice = toupper(choice); 
}

// scientific computation (farenheit). i searched online for the formula used
void scienceConvertfarenheit(double& celcius, int& farenheit, char &choice)
{ 
    do 
    {
        cout << "ENTER THE TEMPERATURE IN CELCIUS: "; cin >> celcius;
        farenheit = celcius * 1.8 + 32;
        cout << "THE TEMPERATURE IN FARENHEIT IS: " << farenheit << endl;
       
        cout << "DO YOU WANT TO TRY AGAIN? (Y/N): "; cin >> choice; 
        choice = toupper(choice); 
    } 
    while (choice == 'Y');  
}

// MAIN MENU: every void function i constructed gets called here. 
int main()
{
    string name; 
    char choice = ' ';
    float sphere_fraction = 1.33, pi = 3.1416, symbol, interest;
    double digit, answer, celcius, formula, centimeter, solution; 
   
    string student_menu[4] = 
    {   "[1] MATH\n", 
        "[2] ENGLISH\n", 
        "[3] FILIPINO\n", 
        "[4] SCIENCE\n" 
    };

    string math_volume[4] = 
    {   "[A] CUBE\n", 
        "[B] RECTANGULAR PRISM\n", 
        "[C] SPHERE\n", 
        "[D] CYLINDER\n" 
    };

    string math_others[4] = 
    {   "[A] SQUAREROOT OF A NUMBER\n", 
        "[B] POWER OF A NUMBER\n", 
        "[C] CEIL AND FLOOR OF A NUMBER\n", 
        "[D] UNIT CONVERSION\n" 
    };
    
    int number = 0, a, b, num1, num2, sum, diff, prod, quo, cube, 
        rec_prism, sphere, side, length, width, height, radius, 
        cylinder,age, modulo, power, farenheit, meter, amount, 
        time, the_formula, the_answer;
    
    string math_menu[8] = 
    {   "[1] MULTIPLICATION TABLES\n", 
        "[2] CALCULATOR\n", 
        "[3] VOLUME OF FIGURES\n", 
        "[4] ODD AND EVEN NUMBERS\n", 
        "[5] POSITIVE AND NEGATIVE NUMBERS\n", 
        "[6] BIG AND SMALL NUMBERS\n", 
        "[7] OTHERS\n", 
        "[8] STATISTICS\n" 
    };

    accMenu(number);  

    if (number == 1) 
    {
        accCreate(name, age, choice);  

        if (choice == 'A') 
        {
            teacherMenu(); 
        }
        
        else if (choice == 'B')
        {
            studentMenu(number, student_menu);  
        }

        else
        {
            cout << "INVALID CHOICE!" << "\n";
        }
    }
    
    if (number == 1)
    {        
       mathMenu(number, math_menu);  

       if (number == 1) 
       {    
         mathTable(choice,b);
       }

       else if (number == 2)
       {
         mathCalc(choice, num1, num2, sum, diff, prod, quo, modulo);         
       }

       else if (number == 3)
       {           
         mathVolume(choice,side,cube,length,width,height,rec_prism,radius,sphere,cylinder,sphere_fraction,pi,math_volume);  
       }

       else if (number == 4) 
       {
         mathOdd(number, choice);
       }

       else if (number == 5) 
       {
         mathPositive(number, choice); 
       }

       else if (number == 6) 
       {
           mathBig(num1,num2,choice);
       }

       else if (number == 7) 
       {
         mathOther(choice, math_others);  
                               
         if (choice == 'A')
         {
           mathSquareroot(digit,answer,choice);
         } 

         else if (choice == 'B')
         {
             mathPower(power,number,choice);
         }

         else if (choice == 'C')
         {
             mathCeilfloor(symbol,choice); 
         }

         else if (choice == 'D')
         {              
             mathUnitconversion(choice);

             if (choice == 'A')
             {
                 mathMetertokilometer(meter,formula,choice);
             }

             else if (choice == 'B')
             {
                 mathCentimetertometer(centimeter,solution,choice);
             }
         }

         else
         {
             cout << "INVALID CHOICE!" << "\n";
         }
       }
        
       else if (number == 8) 
       {
           mathStatisticsmenu(choice);

           if (choice == 'A')
           {               
               mathSimpleinterest(choice,interest,time,amount,the_formula,the_answer);               
           }

           else
           {
               cout << "INVALID CHOICE!" << "\n";
           }
       }

       else
       {
         cout << "INVALID CHOICE!" << "\n";
       }                 
    }

    else if (number == 2)  
    {
        englishMenu(number);  

        if (number == 1) 
        {
            englishConsonant(choice); 
        }

        else
        {
            cout << "INVALID CHOICE!" << "\n";
        }
    } 

    else if (number == 3) 
    {
        filipinoMenu(number);  

        if (number == 1)  
        {
            filipinoKatinig(choice);  
        }
        
        else
        {
            cout << "INVALID CHOICE!" << "\n";
        }
    }

    else if (number == 4) 
    {
        scienceMenu(number);  

        if (number == 1) 
        {
            scienceTempmenu(choice); 

            if (choice == 'A') 
            {
                scienceConvertfarenheit(celcius,farenheit,choice);
            }
           
            else
            {
                cout << "INVALID CHOICE!" << "\n";
            }
        }
    }

    else
    {
        cout << "INVALID CHOICE!" << "\n";
    }

    return 0;
}
