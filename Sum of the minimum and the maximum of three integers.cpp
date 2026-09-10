#include <iostream>
using namespace std;
int main()
{
    int ent1, ent2, ent3;
    cin >> ent1 >> ent2 >> ent3;
    int min, max;
    if (ent1 <= ent2 && ent1 <= ent3)
    {
        min = ent1;
    }
    else if (ent2 <= ent1 && ent2 <= ent3)
    {
        min = ent2;
    }
    else
    {
        min = ent3;
    }
    //
    if (ent1 >= ent2 && ent1 >= ent3)
    {
        max = ent1;
    }
    else if (ent2 >= ent1 && ent2 >= ent3)
    {
        max = ent2;
    }
    else
    {
        max = ent3;
    }

    int sum = min + max;
    cout << sum << endl;

    return 0;
}