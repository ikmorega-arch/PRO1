#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);   

    int c = 1000;
    double i;
    cin >> i;
    string tipo;
    cin >> tipo;
    double ncobros;
    double importeCobro;
    double beneficio;

    if (tipo == "semestral")
    {
        ncobros = 2;
    }

    if (tipo == "setmanal")
    {
        ncobros = 52;
    }

    if (tipo == "trimestral")
    {
        ncobros = 4;
    }

    if (tipo == "mensual")
    {
        ncobros = 12;
    }
    importeCobro = i / ncobros;
    for (int x = 1; x <= ncobros; x++)
    {
        beneficio = beneficio + ((c + beneficio) * importeCobro / 100);
    }
    double tae = (beneficio * 100) / c;
    cout << tae << endl;
    return 0;
}