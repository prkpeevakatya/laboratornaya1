// переменная - ячейка памяти, хранящая в себе какую-либо информацию
// 
// типы данных:
//  - целочисленные:
//      char      - 1байт, -128...127
//      short     - 2 байта, -32768...32767
//      int       - 4 байта, -2^31...2^31 -1
//      long long - 8 байт, -2^63...2^63 -1
//      unsigned  - приставка, добавляющая значения из отрицательного промежутка в положительный
// - вещественные:
//      float       - 4 байта, 6-7 разрядов
//      double      - 8 байт, 15-16 разрядов
//      long double - 12 байтов, 27-28 байтов
// - символьные:
//      char      - 1 байт, -128...127
// - логические:
//      bool      - 1 байт, true/false



#include <iostream>

using namespace std;
#define _CRT_SECURE_NO_WARNINGS 

int main()
{
    cout << "\t\t\tцелочисленные типы данных:";
    cout << endl << "char  -  1 байт" << endl << "\tдиапозон значений : -128...127" << endl;
    char a = 9;
    cout << "ex - " << a  << endl;
    cout << endl << "short  -  2 байта" << endl << "\tдиапозон значений : -32768...32767" << endl;
    short g = 8000;
    cout << "ex - " << g << endl;
    cout << endl << "int  -  4 байта" << endl << "\tдиапозон значений : -2^31...2^31 -1" << endl;
    int u = 900000;
    cout << "ex - " <<  u << endl;
    cout << endl << "long long  -  8 байт" << endl << "\tдиапозон значений : -2^63...2^63 -1" << endl;
    long long q = 12345678987;
    cout << "ex - " << q << endl;
    cout << endl << "\t\t\tвещественные типы данных:";
    cout << endl << "float  -  4 байта" << endl << "\tточность - 6-7 разрядов" << endl;
    float e = 2.7188;
    cout << "ex - " << e << endl;
    cout << endl << "double  -  8 байт" << endl << "\tточность - 15-16 разрядов" << endl;
    double r = 3.141592;
    cout << "ex - " << r << endl;
    cout << endl << "long double  -  12 байтов" << endl << "\tточность - 27-28 байтов" << endl;
    long double p = 1e15;
    cout << "ex - " << p << endl;
    cout << endl << "\t\t\tсимвольные типы данных:";
    cout << endl << "char  -  1 байт" << endl << "\tдиапозон значений : -128...127" << endl;
    char k = 's';
    cout << "ex - " << k << endl;
    cout << endl <<  "\t\t\tлогические типы данных:";
    cout << endl << "bool  -  1 байт" << endl << "\tвывод - true/false" << endl;
    bool z = true;
    cout << "ex - " << z << endl;
}
