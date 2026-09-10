#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << "Uppercase letter" << endl;
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "Lowercase letter" << endl;
    }
    else
    {
        cout << "Number" << endl;
    }
    return 0;
}