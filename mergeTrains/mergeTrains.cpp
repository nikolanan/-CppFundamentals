#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

void filling(list <int>& train, string wagon) {

    istringstream numbers(wagon);
    int currentNumber;

    while (numbers >> currentNumber) {
        train.push_back(currentNumber);
    }  
}

void printingLists(list <int> train) {
    for (list<int>::iterator i = train.begin(); i != train.end(); i++) {
        cout << *i << " ";
    }
}
list <int> size(list <int> trainA, list<int> trainB) {
    if (trainA.size() >= trainB.size()) {
        return trainA;
    }
    return trainB;
}

list <int> smallerSize(list <int> trainA, list<int> trainB) {
    if (trainA.size() < trainB.size()) {
        return trainA;
    }
    return trainB;
}


int main()
{
    list<int> trainA, trainB;

    string wagonsA, wagonsB;
    getline(cin, wagonsA);
    getline(cin, wagonsB);


    filling(trainA, wagonsA);
    filling(trainB, wagonsB);

    list <int> bigList = size(trainA, trainB);
    list <int> smallList = smallerSize(trainA, trainB);
    for (list <int>::iterator i = smallList.begin(); i != smallList.end(); i++) {
        bigList.push_back(*i);
    }

    vector <int> theBigList;
    for (list <int>::iterator i = bigList.begin(); i != bigList.end(); i++) {
        theBigList.push_back(*i);
    }


    sort(theBigList.begin(), theBigList.end(), greater<int>());

    string code = "";

    for (vector <int>::iterator i = theBigList.begin(); i != theBigList.end(); i++) {

        if (count(trainA.begin(), trainA.end(), *i)) {
            code += "A";
        }
        else {
            code += "B";
        }

    }
    string reversed = "";
    for (int i = code.length() - 1; i >= 0; i--) {
        reversed += code[i];
    }

    cout << reversed << endl;

    for (vector <int>::iterator i = theBigList.begin(); i != theBigList.end(); i++) {
        cout << *i << " ";
    }
}

