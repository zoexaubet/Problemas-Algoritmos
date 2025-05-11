## Problema: Perfiles Duplicados en Red Social

Has sido contratado por una compañía que desarrolla una gran red social. Tu primera tarea consiste en buscar perfiles que probablemente pertenecen a un mismo usuario.

La red social contiene `n` perfiles registrados, numerados del 1 al `n`. Algunos pares de perfiles son amigos (la relación de "amistad" es mutua, es decir, si `i` es amigo de `j`, entonces `j` también es amigo de `i`).

Se dice que dos perfiles `i` y `j` (con `i ≠ j`) son **duplicados** si para cualquier otro perfil `k` (donde `k ≠ i` y `k ≠ j`), se cumple una de las siguientes condiciones:

* `k` es amigo tanto de `i` como de `j`, o
* `k` no es amigo ni de `i` ni de `j`.

Es decir, los conjuntos de amigos de `i` y `j`, excluyéndose mutuamente, son indistinguibles desde el punto de vista de los demás perfiles. Además, `i` y `j` pueden ser amigos entre sí o no.

Tu tarea es contar el número de pares no ordenados `(i, j)` tales que los perfiles `i` y `j` son duplicados.

### Entrada

* La primera línea contiene dos enteros `n` y `m` (1 ≤ `n` ≤ 10<sup>6</sup>, 0 ≤ `m` ≤ 10<sup>6</sup>), el número de perfiles y el número de relaciones de amistad, respectivamente.
* Las siguientes `m` líneas contienen pares de enteros `v` y `u` (1 ≤ `v`, `u` ≤ `n`, `v` ≠ `u`), que indican que los perfiles `v` y `u` son amigos.

Se garantiza que cada par no ordenado de amigos aparece como mucho una vez, y que ningún perfil es amigo de sí mismo.

### Salida

* Imprime un único entero: la cantidad de pares no ordenados de perfiles que son duplicados.

### Ejemplo

#### Entrada

```
4 2
1 2
3 4
```

#### Salida

```
2
```

### Explicación

* Los perfiles 1 y 2 tienen el mismo conjunto de amigos (entre ellos), y los perfiles 3 y 4 también.
* Entonces los pares (1, 2) y (3, 4) son duplicados.
* Resultado: 2.
