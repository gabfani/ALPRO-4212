#include <iostream>

using namespace std;

int addRec(int a, int b) /* penjumlahan */
{
    if (a<=0 && b<=0)
        return 0;
    else if (a>0)
        return 1 + addRec(a-1, b);
    else if (b>0)
        return 1 + addRec(a, b-1);
}

int subRec(int a, int b) /* pengurangan */
{
    if (a<=0 && b<=0)
        return 0;
    else if (a > 0 && b > 0)
        return subRec(a - 1, b - 1);
    else if (a>0)
        return -1 + subRec(a-1, b);
    else if (b>0)
        return -1 + subRec(a, b-1);

}

 int multiRec(int a, int b) //perkalian
 {
    if (a==0)
        return 0;
    else if (a>0)
        return b + multiRec(a-1, b);
    else
        return -multiRec(-a, b);

 }

 int divRec(int a, int b) //pembagian
 {
     if (b==0)
        return b;
     else if (a<b)
        return 0;
     else
        return 1 + divRec(a-b, b);

 }

 int expRec(int a)
 {
    if (a==0)
        return 1;
    else
        return 2 * expRec(a - 1);
 }

int main()
{
    cout << addRec(3,5)<< endl;
    cout << subRec(3,5)<< endl;
    cout << multiRec(3,5)<< endl;
    cout << divRec(100,5)<<endl;
    cout << expRec(2)<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
