#include <iostream>
using namespace std;

int main()
{
    int n = 0, i = 0;
    cout << "ingrese un numero entero: \n";
    cin >> n;
    for (int i = 2; i < n; i += 2)
    {
        cout << i << " ";
    }
    
    return 0;
}