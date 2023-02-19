// DZ2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int nod(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else if (a > b)
        return nod(b, a % b);
    else
        return nod(a, b % a);
}



int main()
{
    int x, y;
    cin >> x;
    cin >> y;

   cout << nod(x, y);

}
