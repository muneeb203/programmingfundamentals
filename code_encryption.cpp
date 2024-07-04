#include <iostream>
#include <string>
using namespace std;

string encrypt(const string &input);

int main() {
    string input;
    cout << "Code Encryption" << endl;
    cout << "Enter the code here to get encrypted (max 1000 characters):" << endl;
    
    // Read up to 1000 characters
    getline(cin, input);
    if (input.length() > 1000) {
        input = input.substr(0, 1000);
    }

    string encrypted = encrypt(input);
    cout << "The encrypted code is: " << encrypted << endl;
    return 0;
}

string encrypt(const string &input) {
    string result;
    for (char word : input) {
        switch (word) {
            // Uppercase letters
            case 'A': result += 'L'; break;
            case 'B': result += 'M'; break;
            case 'C': result += 'D'; break;
            case 'D': result += 'P'; break;
            case 'E': result += 'A'; break;
            case 'F': result += 'R'; break;
            case 'G': result += 'T'; break;
            case 'H': result += 'F'; break;
            case 'I': result += 'V'; break;
            case 'J': result += 'G'; break;
            case 'K': result += 'Y'; break;
            case 'L': result += 'K'; break;
            case 'M': result += 'Z'; break;
            case 'N': result += 'O'; break;
            case 'O': result += 'N'; break;
            case 'P': result += 'C'; break;
            case 'Q': result += 'E'; break;
            case 'R': result += 'Q'; break;
            case 'S': result += 'B'; break;
            case 'T': result += 'S'; break;
            case 'U': result += 'H'; break;
            case 'V': result += 'U'; break;
            case 'W': result += 'I'; break;
            case 'X': result += 'W'; break;
            case 'Y': result += 'J'; break;
            case 'Z': result += 'X'; break;
            // Lowercase letters
            case 'a': result += 'l'; break;
            case 'b': result += 'm'; break;
            case 'c': result += 'd'; break;
            case 'd': result += 'p'; break;
            case 'e': result += 'a'; break;
            case 'f': result += 'r'; break;
            case 'g': result += 't'; break;
            case 'h': result += 'f'; break;
            case 'i': result += 'v'; break;
            case 'j': result += 'g'; break;
            case 'k': result += 'y'; break;
            case 'l': result += 'k'; break;
            case 'm': result += 'z'; break;
            case 'n': result += 'o'; break;
            case 'o': result += 'n'; break;
            case 'p': result += 'c'; break;
            case 'q': result += 'e'; break;
            case 'r': result += 'q'; break;
            case 's': result += 'b'; break;
            case 't': result += 's'; break;
            case 'u': result += 'h'; break;
            case 'v': result += 'u'; break;
            case 'w': result += 'i'; break;
            case 'x': result += 'w'; break;
            case 'y': result += 'j'; break;
            case 'z': result += 'x'; break;
            default: result += word; // Keep the original character if it's not in the mapping
        }
    }
    return result;
}
