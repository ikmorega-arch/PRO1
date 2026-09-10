#include <iostream>
using namespace std;
int main()
{
    int ent1, ent2;
    cin >> ent1 >> ent2;
    int min;
    if (ent1 <= ent2)
    {
        min = ent1;
        cout << min << endl;
    }
    else
    {
        min = ent2;
        cout << min << endl;
    }
    return 0;
}