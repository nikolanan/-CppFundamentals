#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, line1, line2;
    getline(cin, text);
    getline(cin, line1);
    getline(cin, line2);

    int index = text.find(line1);
    while (index != -1) {
        text.replace(index, line1.length(),line2);
        index = text.find(line1);
    }

    cout << text;
}

