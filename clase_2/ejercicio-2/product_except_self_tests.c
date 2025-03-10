// EJERCICIO 2: Producto de arrays excepto el propio elemento
//
// Descripción: Dado un array de números enteros, devuelve un array output tal que output[i] es igual al producto de todos los elementos de nums excepto nums[i].
// Entrada: Un array de enteros.
// Salida: Un array de enteros con los productos.

#include <stdio.h>
#include <stdlib.h>

void product_except_self(int* nums, int numsSize, int* output) {
    for (int i = 0; i < numsSize; i++){
        int product = 1; //porque si lo inicializo en 0 me da siempre 0
        for (int j = 0; j < numsSize; j++){
            if (j != i) {
                product = product * nums[j];
            }
        }
        output[i] = product;
    }

}

// TESTS
void run_tests() {
    int test1[] = {1, 2, 3, 4};
    int size1 = sizeof(test1) / sizeof(test1[0]);
    int output1[size1];
    product_except_self(test1, size1, output1);
    printf("Prueba 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", output1[i]);
    }
    printf("(Esperado: 24 12 8 6) \n");
    
    int test2[] = {2, 3, 4, 5};
    int size2 = sizeof(test2) / sizeof(test2[0]);
    int output2[size2];
    product_except_self(test2, size2, output2);
    printf("Prueba 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", output2[i]);
    }
    printf("(Esperado: 60 40 30 24) \n");
    
    int test3[] = {1, -1, 1, -1};
    int size3 = sizeof(test3) / sizeof(test3[0]);
    int output3[size3];
    product_except_self(test3, size3, output3);
    printf("Prueba 3: ");
    for (int i = 0; i < size3; i++) {
        printf("%d ", output3[i]);
    }
    printf("(Esperado: 1 -1 1 -1) \n");
}

int main() {
    run_tests();
    return 0;
}
