
/*
File input/output
Control structure O(Part 2) - selection (switch, break, default)

MichaelAngelo Torrez II

9-13-23

*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //Declare variables
    ifstream inputFile; // input file stream var
    ofstream outputFile; // output file stream var
    char op; // operator var
    float number, result;


    // Open files
    //Think like reading a book: open the book, read the words, then close the book

    inputFile.open("Lab4_prog3_data.txt");
    // Open book with above line
    outputFile.open("Lab4_prog3_output.txt");
    // Read book with above line

    //Read file
    inputFile >> op >> number;

    cout << op << " " << number << " ";
    // Closing the book


    // Calculations
    //condition needed; the condition can have multiple values
    //Think of the condition like the key for a lock

    /*
    if(op == '*') {     // comparison operators: ==, !=
        // == means it will check if both values, left and right of ==, are directly equal to one another
        // != means it will check if both values, left and right of !=, are NOT directly equal to one another
        result = 5 * number;
        
    } else if (op == '/') {
        result = 5 / number;

    } else if (op == '+') {
        result = 5 + number;
    
    }
    else if(op == '-') {
    
        result = 5 - number;
    }
    */
   // switch statement

   /*
   This is how it works:

   The switch expression is evaluated once
   The value of the expression is compared with the values of each case
   If there is a match, the associated block of code is executed
   The break and default keywords are optional, and will be described later this week.
   */
  switch(op) { //case var must be integral type
    //inside parathesis go by variable, in this case op, an operator (+, -, *, /) located in the Lab4_prog3_data.txt file
    //this can be any operator btw

    //any case inside of the switch will be ran, so we must use break
    
    case '*': 
        result = 5 * number;
        break;

    case '/': 
        result = 5 / number;
        break;
    case '+': 
        result = 5 + number;
        break;
    case '-': 
        result = 5 - number;    
        break;

    default: //The default keyword specifies some code to run if there is no case match
        result = -10000;
  }


    // Print results
    cout << "The result is: " << result << endl;
    outputFile << "The result is: " << result << endl;

    //Close files
    inputFile.close();
    outputFile.close();
    //Closing the book

    return 0;
}