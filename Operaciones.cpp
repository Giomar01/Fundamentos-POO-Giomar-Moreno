#include <iostream>
#include <string.h>

/**
 * @brief calcula la suma de dos numeros.
 * @param a numero 1.
 * @param b numero 2.
 * @return retorna el resultado de la suma.
 */
 int sum(int a, int b){
     return a+b;
 }
 /**
 * @brief calcula la resta de dos numeros.
 * @param a numero 1.
 * @param b numero 2.
 * @return retorna el resultado de la resta.
 */
 int rest(int a, int b){
     return a-b;
 }
 /**
 * @brief calcula el producto de dos numeros.
 * @param a numero 1.
 * @param b numero 2.
 * @return retorna el resultado del producto.
 */
 int product(int a, int b){
     return a*b;
 }
 /**
 * @brief calcula el cociente de dos numeros.
 * @param a numero 1.
 * @param b numero 2.
 * @return retorna el resultado del cociente.
 */
 float division(int a, int b){
     return a/b;
 }
int main(){
    int num1, num2;
    
    std::cout << "Ingrese el primer numero: " << std::endl;
    std::cin >> num1;
    
    std::cout << "Ingrese el valor del segundo numero: " << std::endl;
    std::cin >> num2;
    
    std::cout << "suma: " << sum(num1, num2) << std::endl;
    std::cout << "resta: " << rest(num1, num2) << std::endl;
    std::cout << "producto: " << product(num1, num2) << std::endl;
    std::cout << "cociente: " << division(num1, num2) << std::endl;
    
    return 0;
}