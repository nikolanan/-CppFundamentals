#include <iostream>
using namespace std;
void distance(double x1, double y1, double x2, double y2) {
    int distance1 = x1 * x1 + y1 * y1;
    int distance2 = x2 * x2 + y2 * y2;

    if (distance1 <= distance2) {
        cout << "(" << x1 << ", " << y1 << ")";
    }
    else {
        cout << "(" << x2 << ", " << y2 << ")";
    }
}
int main()
{
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    distance(x1, y1, x2, y2);

}

