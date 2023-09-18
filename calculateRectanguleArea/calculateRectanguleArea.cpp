#include <iostream>
using namespace std;

int rectangleArea(int length, int width) {
    return length * width;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << rectangleArea(a, b);
}

