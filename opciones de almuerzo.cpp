#include <iostream>
using namespace std;

int main()
{
    char opcion, variable = 'x';
    do
    {
        cout << "Menu" << "\n";
        cout << " A tacos" << "\n";
        cout << " B Pupusas" << "\n";
        cout << " C Pizza" << "\n";
        cout << "Seleccione una opcion: " << "\n";
        cin >> opcion;
        cout << "opcion seleccionada: " << opcion << "\n";
    } 
    while (opcion != variable);
    return 0;
}









        
    
    