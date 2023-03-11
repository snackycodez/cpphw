#include <iostream>
#include <cmath>
using namespace std;

int shape(int choice, int x, int y, int z)
{
    if (choice == 1)
    {
        cout << "[1] Triangle Selected\n";
        cout << "Enter height and base: ";
        cin >> x >> y;
        z = (x * y) / 2;
        cout << "The area of Triangle is: " << z;
        return 0;
    }
}
int shape(int choice, int x, int z)
{
    if (choice == 2)
    {
        cout << "[2] Square Selected\n";
        cout << "Enter side: ";
        cin >> x;
        z = pow(x, 2);
        cout << "The area of Square is: " << z;
        return 0;
    }
}
int main()
{
    int choice, x, y, z;
    cout << "What shape to calculate its area?\n"
         << "[1] Triangle\n"
         << "[2] Square\n"
         << "Select a shape: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        shape(choice, x, y, z);
        break;
    case 2:
        shape(choice, x, z);
        break;
    default:
        cout << "Invalid Number Please Try Again Between 1 & 2";
        break;
    }

    return 0;
}
