//Samantha Osowski 
//Week 5 Programming Asssignment
/*In this program we will make the surf shop operational by deterining the price of each
surfboard by the user input depending on the size of the surfboard.*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//Declaring variables
double SurfboardSmall = 0;
double  SurfboardMedium = 0;
double SurfboardLarge = 0;
double SurfboardXXXSmall = 0;
int iTotalXXXSmall;
int iTotalSmall;
int iTotalMedium;
int iTotalLarge;
int SurfboardQuanity;
char choice; 
char SurfboardSize;

//Showing the user how the program works
void ShowUsage() {
}
//Making a function to sell surfboards
void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXXXSmall) {
    cout << "Please enter the quanity and type (S=small, M=Medium, L=Large XS = squirrel) of surfboard you would like to purchase: " << endl;
    cin >> SurfboardQuanity >> SurfboardSize;
    if (SurfboardSize == 'S' && 's') {
        iTotalSmall = iTotalSmall + SurfboardQuanity;
    }
    else if (SurfboardSize == 'M' && 'm') {
        iTotalMedium = iTotalMedium + SurfboardQuanity;
    }
    else if (SurfboardSize == 'L' && 'l') {
        iTotalLarge = iTotalLarge + SurfboardQuanity;
    }
    else if (SurfboardSize == 'XS' && 'xs') {
        iTotalXXXSmall = iTotalXXXSmall + SurfboardQuanity;
    }
}
//Making a function to show the number of surfboards of each size sold
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXSmall) {
    if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXSmall == 0) {
        cout << "No purchases mad yet." << endl;
        return;
    }
    if (iTotalSmall > 0) {
        cout << "The total number of small surfboards is " << iTotalSmall << endl;
    }
    if (iTotalMedium > 0) {
        cout << "The total number of medium surfboards is " << iTotalMedium << endl;
    }
    if (iTotalLarge > 0) {
        cout << "The total number of large surfboards is " << iTotalLarge << endl;
    }
    if (iTotalXXXSmall > 0) {
        cout << "The total number of squirrel surfboards is " << iTotalXXXSmall << endl;
    }
}
//Making a function to show the total amount of monay made
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXXXSmall) {
    if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0 && iTotalXXXSmall == 0) {
        cout << "No purchases mad yet." << endl;
        return;
    }
    if (iTotalSmall > 0) {
        SurfboardSmall = iTotalSmall * 175.00;
        cout << "The total number of small surfboards is" << iTotalSmall << "at a total of $" << SurfboardSmall << endl;
    }
    if (iTotalMedium > 0) {
        SurfboardMedium = iTotalMedium * 190.00;
        cout << "The total number of medium surfboards is" << iTotalMedium << "at a total of $" << SurfboardMedium << endl;
    }
    if (iTotalLarge > 0) {
        SurfboardLarge = iTotalLarge * 200.00;
        cout << "The total number of large surfboards is" << iTotalLarge << "at a total of $" << SurfboardLarge << endl;
    }
    if (iTotalXXXSmall > 0) {
        SurfboardXXXSmall = iTotalXXXSmall * 120.00;
        cout << "The total number of squirrel surfboards is" << iTotalXXXSmall << "at a total of $" << SurfboardLarge << endl;
    }
    cout << "Amount due: $" << SurfboardSmall + SurfboardMedium + SurfboardLarge + SurfboardXXXSmall << endl;
}
int main(){
//Displaying the welcome message
    cout << "************************************************************" << endl;
    cout << "***** Welcome to my Jhonny Utha's PointBreak Surf Shop *****" << endl;
    cout << "************************************************************" << endl;

//Displaying to the user the menu of selections to make
    cout << "\n\nTo show program usage 'S'" << endl;
    cout << "To purchase surfboard press 'P'" << endl;
    cout << "To display current purchase press 'C'" << endl;
    cout << "To display total amount due press 'T'" << endl;
    cout << "To quit the program press 'Q'" << endl;

   
    //Making a loop based on user input or exititing program if user quits
    while (tolower(choice) != 'q') {
        //getting the user input
        cout << "\nPlease enter selection: ";
        cin >> choice;

        if (tolower(choice) == 's') {
            ShowUsage();
        }
        else if (tolower(choice) == 'p') {
            MakePurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
            cout << endl;
        }
        else if (tolower(choice) == 'c') {
            DisplayPurchase(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
        }
        else if (tolower(choice) == 't') {
            DisplayTotal(iTotalSmall, iTotalMedium, iTotalLarge, iTotalXXXSmall);
        }
        else if (tolower(choice) == 'q') {
            cout << "Thank you" << endl;
        }
    }
}

