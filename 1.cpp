#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"rus");
    int a=7;
    int b=8;
    int c=0;
    cout <<"в пустой коробке - " << c << endl;
    cout <<"в первой сумке - " << a << endl;
    cout <<"во второй сумке - " << b << endl;
    cout << endl;
    c = a + b;
    cout <<"всего в коробку добавлено " << c <<" яблок" <<endl;
    return 0;
}