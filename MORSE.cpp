#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Morse code map for A-Z and space
    map<char, string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."},
        {'D', "-.."}, {'E', "."}, {'F', "..-."},
        {'G', "--."}, {'H', "...."}, {'I', ".."},
        {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
        {'S', "..."}, {'T', "-"}, {'U', "..-"},
        {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"},
        {'3', "...--"}, {'4', "....-"}, {'5', "....."},
        {'6', "-...."}, {'7', "--..."}, {'8', "---.."},
        {'9', "----."},
        {' ', "/"} // Space represented as '/'
    };

    string input;
    cout << "Enter your message in CAPITAL letters:\n";
    getline(cin, input);

    // Convert to Morse code
    string morseSentence = "";
    for (char c : input) {
        if (morseCode.find(c) != morseCode.end()) {
            morseSentence += morseCode[c] + " ";
        }
    }

    // Display Morse code first, then original message
    cout << "\nMorse Code:\n" << morseSentence << endl;
    cout << "\nOriginal Message:\n" << input << endl;

    return 0;
}
