#include <iostream>
using namespace std;
bool statement = true;

void thousandsz (int fourthDigit) {
    switch (fourthDigit) {
        case 1: cout << "one " << "thousand "; break;
        case 2: cout << "two " << "thousand "; break;
        case 3: cout << "three " << "thousand "; break;
        case 4: cout << "four " << "thousand "; break;
        case 5: cout << "five " << "thousand "; break;
        case 6: cout << "six " << "thousand "; break;
        case 7: cout << "seven " << "thousand "; break;
        case 8: cout << "eight " << "thousand "; break;
        case 9: cout << "nine " << "thousand "; break;

    }

}

void hundredsz(int thirdDigit) {
    switch (thirdDigit) {
    case 1: cout << "one " << "hundred "; break;
    case 2: cout << "two " << "hundred "; break;
    case 3: cout << "three " << "hundred "; break;
    case 4: cout << "four " << "hundred "; break;
    case 5: cout << "five " << "hundred "; break;
    case 6: cout << "six " << "hundred "; break;
    case 7: cout << "seven " << "hundred "; break;
    case 8: cout << "eight " << "hundred "; break;
    case 9: cout << "nine " << "hundred "; break;
    }

}

void twentyToNinetyNine(int tenTo99,int lastDigit) {
    switch (tenTo99) {
        case 0: statement = false;
            switch (lastDigit) {
            case 1: cout << "one"; break;
            case 2: cout << "two"; break;
            case 3: cout << "three"; break;
            case 4: cout << "four"; break;
            case 5: cout << "five"; break;
            case 6: cout << "six"; break;
            case 7: cout << "seven"; break;
            case 8: cout << "eight"; break;
            case 9: cout << "nine"; break;
    
        }break;
        case 1:statement = false;
            switch (lastDigit) {
            case 0: cout <<"ten"; break;
            case 1: cout <<"eleven"; break;
            case 2: cout<<"twelve"; break;
            case 3: cout<<"thirteen"; break;
            case 4: cout<<"fourteen"; break;
            case 5: cout<<"fifteen"; break;
            case 6: cout<<"sixteen"; break;
            case 7: cout<<"seventeen"; break;
            case 8: cout<<"eighteen"; break;
            case 9: cout<<"nineteen"; break;
            
        } break;
        case 2: cout << "twenty "; break;
        case 3: cout << "thirty "; break;
        case 4: cout << "fourty "; break;
        case 5: cout << "fifty "; break;
        case 6: cout << "sixty "; break;
        case 7: cout << "seventy "; break;
        case 8: cout << "eighty "; break;
        case 9: cout << "ninety "; break;
    }
}

void theLastDigit(int lastDigit) {
    switch (lastDigit) {
        case 0: cout << "zero"; break;
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;
    }
}

int main()
{
    int n;
    cin >> n;

    int thousands = n / 1000;
    int hundreds = (n % 1000)/100;
    int tenTo99 = (n % 100)/10;
    int lastDigit = (n % 10);

    
    
    if (n <= 9) {
        theLastDigit(lastDigit);
    }
    else {
        thousandsz(thousands);
        hundredsz(hundreds);
        twentyToNinetyNine(tenTo99, lastDigit);
        if (tenTo99 >= 2 && tenTo99 <= 9) {
            if (lastDigit != 0) {
                theLastDigit(lastDigit);
            }
        }
    }
}

