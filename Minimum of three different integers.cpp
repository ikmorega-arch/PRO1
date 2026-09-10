#include <iostream>
using namespace std;
int main()
{
    int ent1, ent2, ent3;
    cin >> ent1 >> ent2 >> ent3;
    int min;
    if (ent1 <= ent2 && ent1 <= ent3)
    {
        min = ent1;
        cout << min << endl;
    }
    else if (ent2 <= ent1 && ent2 <= ent3)
    {
        min = ent2;
        cout << min << endl;
    }
    else
    {
        min = ent3;
        cout << min << endl;
    }
    return 0;
}