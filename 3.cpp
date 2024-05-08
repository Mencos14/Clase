#include <iostream>

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false; 
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false; 
        }
    }
    return true;
}

int main()
{
    int n;
    std::cout << "ingresa un numero entero positivo: ";
    std::cin >> n;

    if (isPrime(n))
    {
        std::cout << n << " ees un numero primo." << std::endl;
    }
    else
    {
        std::cout << n << " no es un numero primo." << std::endl;
    }

    return 0;
}


    