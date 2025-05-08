#include <iostream>

void ejemplo_1() {
    int* ptr = new int{};
    std::cout << *ptr << std::endl;
    int* ptr2 = new int{10};
    std::cout << *ptr2 << std::endl;

    std::cout << ptr2[0] << std::endl;
    std::cout << ptr2[1] << std::endl;

    delete ptr;
    delete ptr2;
}

void ejemplo_2() {
    auto ptr = new int[10]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    *(ptr + 4) = 55;
    for (int i = 0; i < 10; i++) {
        std::cout << ptr[i] << " ";
    }

    delete [] ptr;
}

void ejemplo_3() {
    int n = 10;
    auto ptr = new int[n]{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    auto curr =  ptr;
    while(curr != ptr + n) {
        std::cout << *curr << " ";
        ++curr;
    }

    delete [] ptr;
}

int* crear_arreglo(int sz) {
    return new int[sz];
}

int* liberar_arreglo(int* arr) {
    delete [] arr;
    arr = nullptr;
    return arr;
}

int sumarizar(int* arr, int sz) {
    int sum = 0;
    for (int i = 0; i < sz; i++) {
        sum += arr[i];
    }
    return sum;
}

void leer_arreglo(int* arr, int sz) {
    for (int i = 0; i < sz; i++) {
        std::cout << "Ingrese un numero " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

void mostrar_arreglo(int* arr, int sz) {
    for (int i = 0; i < sz; i++) {
        std::cout << arr[i] << " ";
    }
}

void ejemplo_arreglo() {
    // crear el arreglo
    int n = 10;
    auto arr = crear_arreglo(n);
    leer_arreglo(arr, n);
    auto sum = sumarizar(arr, n);
    std::cout << sum << std::endl;
    arr = liberar_arreglo(arr);
}



int main() {
    // ejemplo_1();
    // ejemplo_2();
    ejemplo_arreglo();
    return 0;
}
