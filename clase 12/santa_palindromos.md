# Santa y los Palíndromos

Santa Claus adora los palíndromos. Recientemente fue su cumpleaños, y **k** de sus amigos lo visitaron para felicitarlo, cada uno regalándole una cadena de caracteres **sᵢ** de longitud **n**. Santa asigna a cada cadena una **belleza aᵢ**, que puede ser negativa si no le gusta la cadena.

Santa está pensando en cuál es **la máxima belleza total que puede obtener al concatenar algunas (o todas) de las cadenas para formar un palíndromo**. Cada regalo puede ser usado como mucho una vez. **Todas las cadenas tienen la misma longitud**.

> Recordá: un palíndromo es una cadena que se lee igual de izquierda a derecha que de derecha a izquierda.

Incluso si todas las bellezas son negativas, la respuesta no puede ser menor que 0, porque siempre puede no usar ninguna cadena (la cadena vacía también es un palíndromo).

---

## Entrada

- La primera línea contiene dos enteros positivos **k** y **n**, indicando la cantidad de amigos de Santa y la longitud de cada cadena respectivamente. (1 ≤ k, n ≤ 100000; n·k ≤ 100000).
- Luego siguen **k líneas**, cada una con una cadena **sᵢ** de longitud **n** y un número entero **aᵢ** (−10000 ≤ aᵢ ≤ 10000), indicando la belleza de esa cadena.

**Notas:**
- Pueden haber cadenas repetidas con distintas bellezas.

---

## Salida

- Imprimí un solo entero: la **máxima belleza total** que se puede obtener concatenando cadenas para formar un palíndromo.

---

## Ejemplo

### Entrada

```
4 3
abc 3
cba 4
aba 2
def -5
```

### Salida

```
9
```

### Explicación

Podemos usar las cadenas "abc" y "cba" (forman un palíndromo juntas: "abccba"), y también "aba" (que es un palíndromo por sí misma). La suma de bellezas es: 3 + 4 + 2 = 9.
