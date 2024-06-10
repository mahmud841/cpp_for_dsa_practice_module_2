#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];
    int *b = new int[3];
    for (int i = 1; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < 3; i++)
        cout << b[i] << " ";
    delete[] a;
    // for (int i = 0; i < 3; i++)
    //     cout << a[i] << " ";
    a = new int[5];
    for (int i = 0; i < 3; i++)
    {

        a[i] = b[i];
    }
    delete b;
    a[3]=50;
    a[4]=60;
     for (int i = 0; i < 3; i++)
    {

         cout << a[i] << " ";
    }
    return 0;
}