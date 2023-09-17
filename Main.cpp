#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    //Задача 1
    int X, Y;   
    std::cout << "Введите значение для X: ";
    std::cin >> X;
    std::cout << "Введите значение для Y: ";
    std::cin >> Y;   
    int* px = &X;
    int* py = &Y;   
    std::cout << "Значение X: " << X << std::endl;
    std::cout << "Значение Y: " << Y << std::endl;
    std::cout << "Указатель px указывает на: " << *px << std::endl;
    std::cout << "Указатель py указывает на: " << *py << std::endl;


    //задача 2
    int x2, y2;    
    std::cout << "Введите значение для X: ";
    std::cin >> x2;
    std::cout << "Введите значение для Y: ";
    std::cin >> y2;
    int* px2 = &x2;
    int* py2 = &y2;   
    int temp = *px;
    *px = *py;
    *py = temp;   
    std::cout << "Значение X после обмена: " << x2 << std::endl;
    std::cout << "Значение Y после обмена: " << x2 << std::endl;

    return 0;
}