// write a program that converts characters to Morse code.

#include <iostream>      // Include the input-output stream library
#include <string>        // Include the string library
#include <algorithm>     // Include the algorithm library for using transform and other operations

using namespace std;     // Using the standard namespace for easier access to standard library functions

// Function to convert a character to its Morse code representation
string get_morse_code(char c) {
    // Switch statement maps characters to their Morse code
    switch (toupper(c)) {  // Convert the character to uppercase before comparison

        // Cases for individual characters and their corresponding Morse code
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        case '1': return ".----";
        case '2': return "..---";
        case '3': return "...--";
        case '4': return "....-";
        case '5': return ".....";
        case '6': return "-....";
        case '7': return "--...";
        case '8': return "---..";
        case '9': return "----.";
        case '0': return "-----";
        case '@': return "..---..";         // Add more special character cases here
        case ' ': return "/";              // Using "/" to represent space in Morse code
        default: return "invalid";         // Return empty string for unsupported characters
    }
}

// Main function where the program execution starts
int main() {

    string text;  // Declare a string variable to store user input
    cout << endl << endl << "\t********** Morse Code Generator **********" << endl << endl << endl;

    while (true) {
        cout << "\nSelect an option:" << endl;
        cout << "1. Convert text to Morse code" << endl;
        cout << "2. Quit" << endl;

        int choice;  // Declare an integer variable to store user choice
        cout << "\nEnter your choice: ";
        cin >> choice;        // Get user's choice
        cin.ignore();         // Clear newline character from previous input

        if (choice == 1) {    // Check if the user chose to convert text to Morse code
            cout << "\nEnter the text to convert into Morse code: ";
            getline(cin, text);    // Get the entire line of user input

            string morse_code = "";  // Initialize a string to store the Morse code
            for (int i = 0; i < text.size(); i++) {
                morse_code += get_morse_code(text[i]);  // Convert each character and append its Morse code
                morse_code += " ";  // Add a space between Morse code representations
            }

            cout << "Morse code:\t" << morse_code << endl;  // Display the generated Morse code
        } else if (choice == 2) {
            cout << "\nExiting the program.\n" << endl;  // Inform the user and break the loop
            break;
        } else {
            cout << "\nInvalid choice. Please select a valid option." << endl;  // Handle invalid choices
        }
    }

    return 0;  // Indicate successful program execution
}