#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        char minus = a + 32;
        cout << minus << endl;
    }
    else if (a >= 'a' && a <= 'z')
    {
        char mayus = a - 32;
        cout << mayus << endl;
    }

    return 0;
}