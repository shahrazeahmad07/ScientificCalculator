#include <iostream>
#include <limits>
#include <process.h>
#include <iomanip>
#include <cmath>

            long double degrees, radians, result;


long double sum (long double a, long double b)
{
    long double c;
    c = a + b;
    return c;
};

long double diff (long double a, long double b)
{
    long double c;
    c = a - b;
    return c;
};

long double mul (long double a, long double b)
{
    long double c;
    c = a * b;
    return c;
};

long double div (long double a, long double b)
{
    long double c;
    c = a / b;
    return c;
};


long double radconvert (long double a)
{
    long double radians;
    radians = a * 0.0174533;
    return radians;
};


using namespace std;

main()
{

    ////////////////// main Menu option /////////////////////
mainMenu:
    cout << endl << endl;
    cout << "               1 : Arithmetic Operations" << endl;
    cout << "               2 : Trigonometric Functions" << endl;
    cout << "               3 : Logarithmic Functions" << endl;
    cout << "               4 : Power Functions" << endl;
    cout << "               5 : Exit....." << endl << endl;
    cout << "Choose an option: ";


    int option;
    if (!(cin >> option))
    {
        cout << "Invalid Selection. Select again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto mainMenu;
    }


    switch (option)
    {

        ////////////// Arithmetic //////////////////
Arithmetic:
    case 1:
        cout << endl << endl;
        cout << "               1 : Addition" << endl;
        cout << "               2 : Subtraction" << endl;
        cout << "               3 : Multiplication" << endl;
        cout << "               4 : Division" << endl;
        cout << "               5 : Return to main menu" << endl << endl;
        cout << "Choose an option: ";


        int secondoption;
        if (!(cin >> secondoption))
        {
            cout << "Invalid Selection. Select again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto Arithmetic;
        }


        switch (secondoption)
        {
        //////////////// Addition //////////////
        case 1:
            long double firstSum, secondSum;
            cout << "Enter 1st no: ";
            while (!(cin >> firstSum))
            {
                cout << "Must be a no: ";
                cin.clear ();
                cin.ignore (numeric_limits<streamsize>:: max (), '\n');
            }
            cout << "Enter 2nd no: ";
            while (!(cin >> secondSum))
            {
                cout << "Must be a no: ";
                cin.clear ();
                cin.ignore (numeric_limits<streamsize>:: max (), '\n');
            }
            cout << "Result: " << sum (firstSum, secondSum);
            goto mainMenu;

        ////////////// Subtraction //////////////////////
        case 2:
            long double firstDif, secondDif;
            cout << "Enter 1st no: ";
            while (!(cin >> firstDif))
            {
                cout << "Must be a no: ";
                cin.clear ();
                cin.ignore (numeric_limits<streamsize>:: max (), '\n');
            }
            cout << "Enter 2nd no: ";
            while (!(cin >> secondDif))
            {
                cout << "Must be a no: ";
                cin.clear ();
                cin.ignore (numeric_limits<streamsize>:: max (), '\n');
            }
            cout << "Result: " << diff (firstDif, secondDif);
            goto mainMenu;

        ///////////////// Multiplication ////////////////////
        case 3:
            long double firstMul, secondMul;
            cout << "Enter 1st no: ";
            while (!(cin >> firstMul))
            {
                cout << "Must be a no: ";
                cin.clear ();
                cin.ignore (numeric_limits<streamsize>:: max (), '\n');
            }
            cout << "Enter 2nd no: ";
            while (!(cin >> secondMul))
            {
                cout << "Must be a no: ";
                cin.clear ();
                cin.ignore (numeric_limits<streamsize>:: max (), '\n');
            }
            cout << "Result: " << mul (firstMul, secondMul);
            goto mainMenu;

        ////////////////// division //////////////////////
        case 4:
            long double firstDiv, secondDiv;
            cout << "Enter Dividend: ";
            while (!(cin >> firstDiv))
            {
                cout << "Must be a no: ";
                cin.clear ();
                cin.ignore (numeric_limits<streamsize>:: max (), '\n');
            }
            Divisor:
            cout << "Enter Divisor: ";
            while (!(cin >> secondDiv))
            {
                cout << "Must be a no: ";
                cin.clear ();
                cin.ignore (numeric_limits<streamsize>:: max (), '\n');
            }
            if (secondDiv == 0)
            {
                cout << "Invalid Divisor. Divisor must be greater than \"0\"" << endl;
                goto Divisor;
            }
            cout << "Result: " << div (firstDiv, secondDiv);
            goto mainMenu;

        ///////////////// Return to main menu ////////////////////
        case 5:
            goto mainMenu;

        ///////////////// Arithmetic Invalid Selection /////////////////////
        default:
            cout << "Invalid Selection. Select again: ";
            goto Arithmetic;
        }

    //////////////////// Arithmetic End ////////////////////////

    //////////////////// Trigonometric /////////////////////////
Trigonometric:
    case 2:
        cout << endl << endl;
        cout << "               1 : Sin()" << endl;
        cout << "               2 : Cos()" << endl;
        cout << "               3 : Tan()" << endl;
        cout << "               4 : Sin-1" << endl;
        cout << "               5 : Cos-1" << endl;
        cout << "               6 : tan-1" << endl;
        cout << "               7 : Sec()" << endl;
        cout << "               8 : Cosec()" << endl;
        cout << "               9 : Cot()" << endl;
        cout << "               10 : Sinh()" << endl;
        cout << "               11 : Cosh()" << endl;
        cout << "               12 : Tanh()" << endl;
        cout << "               13 : Sinh-1()" << endl;
        cout << "               14 : Cosh-1()" << endl;
        cout << "               15 : Tanh-1()" << endl;
        cout << "               16 : Return to main menu" << endl << endl;
        cout << "Choose an option: ";

        if (!(cin >> secondoption))
        {
            cout << "Invalid Selection. Select again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto Trigonometric;
        }

        switch (secondoption)
        {

        /////////////////// Sin () ////////////////////
        case 1:
            cout << "Enter Degrees: ";
            sinInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto sinInput;
            }
            radians = radconvert(degrees);
            result = sin(radians);
            cout << "Result: " << result;
            goto mainMenu;


        /////////////////// Cos () ////////////////////
        case 2:
            cout << "Enter Degrees: ";
            cosInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto cosInput;
            }
            radians = radconvert(degrees);
            result = cos(radians);
            cout << "Result: " << result;
            goto mainMenu;


        /////////////////// Tan () ////////////////////
        case 3:
            cout << "Enter Degrees: ";
            tanInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto tanInput;
            }
            if (degrees != 90 && degrees != 270)
            {
                radians = radconvert(degrees);
                result = tan(radians);
                cout << "Result: " << result;
                goto mainMenu;
            }
            else
            {
                cout << "Result: Infinity";
                goto mainMenu;
            }


        //////////////////// Sin-1 /////////////////
        case 4:
            cout << "Enter value. to find sin-1: ";
            while (!(cin >> radians))
            {
                cout << "Must be a no. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>:: max(), '\n');
            }
            result = (asin(radians)) /0.0174533;
            cout << "Result: " << result;
            goto mainMenu;


        //////////////////// Cos-1 /////////////////
        case 5:
            cout << "Enter value. to find cos-1: ";
            while (!(cin >> radians))
            {
                cout << "Must be a no. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>:: max(), '\n');
            }
            result = (acos(radians)) /0.0174533;
            cout << "Result: " << result;
            goto mainMenu;


        //////////////////// Tan-1 /////////////////
        case 6:
            cout << "Enter value. to find tan-1: ";
            while (!(cin >> radians))
            {
                cout << "Must be a no. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>:: max(), '\n');
            }
            result = (atan(radians)) /0.0174533;
            cout << "Result: " << result;
            goto mainMenu;


        /////////////////// Sec () ////////////////////
        case 7:
            cout << "Enter Degrees: ";
            secInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto secInput;
            }
            if (degrees != 90 && degrees != 180)
            {
                radians = radconvert(degrees);
                result = 1/ (cos(radians));
                cout << "Result: " << result;
                goto mainMenu;
            }
            else
            {
                cout << "Result: Infinity";
                goto mainMenu;
            }




        /////////////////// Cosec () ////////////////////
        case 8:
            cout << "Enter Degrees: ";
            cosecInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto cosecInput;
            }
            if (degrees != 0 && degrees != 180)
            {
                radians = radconvert(degrees);
                result = 1/ (sin(radians));
                cout << "Result: " << result;
                goto mainMenu;
            }
            else
            {
                cout << "Result: Infinity";
                goto mainMenu;
            }



        /////////////////// cot () ///////////////////
        case 9:
            cout << "Enter Degrees: ";
            cotInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto cotInput;
            }
            if (degrees != 90 && degrees != 270)
            {
                radians = radconvert(degrees);
                result = 1/ (tan(radians));
                cout << "Result: " << result;
                goto mainMenu;
            }
            else
            {
                cout << "Result: Infinity";
                goto mainMenu;
            }


        /////////////////// Sinh() ///////////////////////
        case 10:
            cout << "Enter Degrees: ";
            sinhInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto sinhInput;
            }
            radians = radconvert(degrees);
            result = sinh (degrees);
            cout << "Result: " << result;
            goto mainMenu;



        ////////////////// Cosh() ///////////////////////
        case 11:
            cout << "Enter Degrees: ";
            coshInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto coshInput;
            }
            radians = radconvert(degrees);
            result = cosh(degrees);
            cout << "Result: " << result;
            goto mainMenu;



        ////////////////// Tanh() ///////////////////////
        case 12:
            cout << "Enter Degrees: ";
            tanhInput:
            while (!(cin >> degrees))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (degrees > 360)
            {
                cout << "Degrees must be from 0 to 360, Enter again: ";
                goto tanhInput;
            }
            radians = radconvert(degrees);
            result = tanh(degrees);
            cout << "Result: " << result;
            goto mainMenu;


        ////////////////// Sinh-1() ///////////////////////
        case 13:
            cout << "Enter value to find sinh-1(): ";
            while (!(cin >> radians))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            result = asinh(radians);
            cout << "Result: " << result;
            goto mainMenu;



        ////////////////// Cosh-1() ///////////////////////
        case 14:
            cout << "Enter value to find cosh-1(): ";
            while (!(cin >> radians))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            result = acosh(radians);
            cout << "Result: " << result;
            goto mainMenu;



        ////////////////// Tanh-1() ///////////////////////
        case 15:
            cout << "Enter value to find tanh-1(): ";
            while (!(cin >> radians))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            result = atanh(radians);
            cout << "Result: " << result;
            goto mainMenu;


        /////////////////// Return to main Menu //////////////////
        case 16:
            goto mainMenu;



        /////////////////// Trigonometric Invalid Selection ////////////////////
        default:
            cout << "Invalid Selection. Select Again: ";
            goto Trigonometric;
        }



    /////////////// Log /////////////////
    case 3:
        cout << endl << endl;
        cout << "               1 : Natural log or log e" << endl;
        cout << "               2 : Base 10 log or log 10" << endl;
        cout << "               3 : Return to main menu" << endl << endl;
        cout << "Choose an option: ";
        int logoption;
        logOptionInput:
        if (!(cin >> logoption))
            {
                cout << "Invalid option. Choose again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                goto logOptionInput;
            }
        switch (logoption)
        {

        /////////////////// Natural Log ///////////////
        case 1:
            long double logInput;
            cout << "Enter value: ";
            logSmallInput:
            while (!(cin >> logInput))
            {
                cout << "Must be in numbers. Enter again: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (logInput < 0)
            {
                cout << "Value must be greater than 0. Input again: ";
                goto logSmallInput;
            }
            if (logInput == 0)
            {
                cout << "Undefined";
                goto mainMenu;
            }
            result = log(logInput);
            cout << "Result: " << result;
            goto mainMenu;


        }


    /////////////// Exit ////////////////
    case 5:
        exit (0);

    //////////////// Main Menu Invalid Selection ////////////
    default:
        cout << "Invalid Selection Select Again:";
        goto mainMenu;
    }
}
