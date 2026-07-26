// Morse Code Converter Program
// Translates English text input into Morse code representation
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    char letters[] = {
        'A','B','C','D','E','F','G','H','I','J','K','L','M',
        'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
    };

    string morse[] = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",
        ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
        "...","-","..-","...-",".--","-..-","-.--","--.."
    };

    string message;
    string fullMorse = "";
   
    cout << "=== MORSE CODE CONVERTER ===" << endl;
    cout << "Enter a message: ";
    getline(cin, message);
    if (message.empty()) {
        cout << "No text entered." << endl;
    }

    for (char ch : message)
    {
        if (ch == ' ')
        {
            fullMorse += "   ";
            continue;
        }

        ch = toupper(ch);

        for (int i = 0; i < 26; i++)
        {
            if (ch == letters[i])
            {
                cout << ch << ": " << morse[i] << endl;
                fullMorse += morse[i] + "   ";
                break;
            }
        }
    }

    cout << "\nFull Morse Code:" << endl;
    cout << fullMorse << endl;

    return 0;
}