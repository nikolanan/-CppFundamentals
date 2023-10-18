#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string output(string text) {
    if (text == "") {
        return "no noise";
    }
    return text;
}

int main()
{
    string text;
    getline(cin, text);

    istringstream words(text);
    
    int maxLength = 0;
    string maxWord = ""; 
    string currentWord;

    string withoutNumbers = "";
    while (words >> currentWord) {
        for (int i = 0; i < currentWord.length(); i++) {
            if (isdigit(currentWord[i])) {
                currentWord.erase(i,1);
                i = 0;
            }
        }
        if (isdigit(currentWord[0])) {
            continue;
        }
        withoutNumbers += currentWord + " ";

        int currentLength = currentWord.length();

        if (currentLength >= maxLength ) {
            
                maxLength = currentLength;
                maxWord = currentWord;
            
        }   
       
    }

    istringstream words2(withoutNumbers);
    string currentWord2;
    while (words2 >> currentWord2) {
        if (currentWord2.length() == maxLength && currentWord2 < maxWord) {
            maxWord = currentWord2;
        }
    }
     
    cout << output(maxWord) << endl;;
   
}

