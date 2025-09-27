#include <iostream>
using namespace std;

// Cambia valores del booleano
void modificar(bool arr[], int n);

// Cambia valores en arreglo de enteros y los imprime
void modificar(int arr[], int n);

int main() {

    bool buleano[5];
    modificar(buleano, 5);

    cout << " Booleano \n";
    for (int i = 0; i < 5; i++) {
        cout << "Buleano[" << i << "] = "
            << buleano[i] << endl;
    }

    // Arreglo de enteros
    cout << " Enteros ";
    int nums[10] = { 0,1,2,3,4,5,6,7,8,9 };
    modificar(nums, 10);

    return 0;
}

// Cambia valores del booleano
void modificar(bool arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = (i % 2 != 0);
    }
}

// Cambia valores en arreglo de enteros y los imprime
void modificar(int arr[], int n) {
    int* puntero = arr;
    for (int i = 0; i < n; i++) {
        *puntero = *puntero % 2;
        cout << "Direccion: " << puntero << "  Valor: " << *puntero << endl;
        puntero++;
    }
}