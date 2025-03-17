// EJERCICIO 3: Buscar el primer número que falta en una secuencia ordenada
//
// Descripción: Dado un array de números enteros que representa una secuencia ordenada, pero con algunos números faltantes, encuentra el primer número que falta en la secuencia.
// Entrada: Un array de enteros ordenados y sin repetidos.
// Salida: Un entero que representa el primer número faltante en la secuencia.

#include <stdio.h>

int find_min_distance(int* nums, int nums_size) {
    return 0;
}

// TESTS
void run_tests() {
    int test_1[] = {1, 2, 3, 5, 6};
    int size_1 = sizeof(test_1) / sizeof(test_1[0]);
    printf("Prueba 1: Primer número faltante = %d (Esperado: 4) \n", find_min_distance(test_1, size_1));
    
    int test_2[] = {1, 2, 3, 4, 5};
    int size_2 = sizeof(test_2) / sizeof(test_2[0]);
    printf("Prueba 2: Primer número faltante = %d (Esperado: 6) \n", find_min_distance(test_2, size_2));
    
    int test_3[] = {2, 3, 4, 5, 6};
    int size3 = sizeof(test_3) / sizeof(test_3[0]);
    printf("Prueba 3: Primer número faltante = %d (Esperado: 1) \n", find_min_distance(test_3, size3));
    
    int test_4[] = {3, 4, 5, 6, 7};
    int size_4 = sizeof(test_4) / sizeof(test_4[0]);
    printf("Prueba 4: Primer número faltante = %d (Esperado: 1) \n", find_min_distance(test_4, size_4));
}

int main() {
    run_tests();
    return 0;
}
