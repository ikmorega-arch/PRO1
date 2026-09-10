#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << "uppercase" << endl;
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "lowercase" << endl;
    }

    switch (a)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "vowel" << endl;
        break;

    default:
        cout << "consonant" << endl;
        break;
    }
    return 0;
}