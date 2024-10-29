#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  while (a) {
      x = x | b;
      y = y ^ a;
      z = z & (a+b);
      a = a >> 1;
      b = b << 1;
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}
/*
x = a = 10
y = b = 1
z = a + b = 10 + 1 = 11

"|" é um or
"^" é uma xor
"&" é uma and
">>" e "<<" deslocar para direita ou esqueda, divide por dois ou multiplica por dois.

While (a = 10):
x = 10 | 1 -> x = 11 (10 = 1010, 1 = 0001 -> 1011)
y = 1 ^ 10 -> y = 11 (1 = 0001, 10 = 1010 -> 1011)
z = 11 & (10 + 1) -> z = 11 & 11 = 11 (11 = 1011, 11 = 1011 -> 1011)
a = 10 >> 1 -> a = 5 (10 em binário é 1010, que se torna 0101)
b = 1 << 1 -> b = 2 (1 em binário é 0001, que se torna 0010)

While (a = 5):
x = 11 | 2 -> x = 11 (11 = 1011, 2 = 0010 -> 1011)
y = 11 ^ 5 -> y = 14 (11 = 1011, 5 = 0101 -> 1110)
z = 11 & (5 + 2) -> z = 11 & 7 = 3 (11 = 1011, 7 = 0111 -> 0011)
a = 5 >> 1 -> a = 2 (5 em binário é 0101, que se torna 0010)
b = 2 << 1 -> b = 4 (2 em binário é 0010, que se torna 0100)

While (a = 2):
x = 11 | 4 -> x = 15 (11 = 1011, 4 = 0100 -> 1111)
y = 14 ^ 2 -> y = 12 (14 = 1110, 2 = 0010 -> 1100)
z = 3 & (2 + 4) -> z = 3 & 6 = 2 (3 = 0011, 6 = 0110 -> 0010)
a = 2 >> 1 -> a = 1 (2 em binário é 0010, que se torna 0001)
b = 4 << 1 -> b = 8 (4 em binário é 0100, que se torna 1000)

While (a = 1):
x = 15 | 8 -> x = 15 (15 = 1111, 8 = 1000 -> 1111)
y = 12 ^ 1 -> y = 13 (12 = 1100, 1 = 0001 -> 1101)
z = 2 & (1 + 8) -> z = 2 & 9 = 0 (2 = 0010, 9 = 1001 -> 0000)
a = 1 >> 1 -> a = 0 (1 em binário é 0001, que se torna 0000)
b = 8 << 1 -> b = 16 (8 em binário é 1000, que se torna 10000)

Resultado Final:
O loop termina pois a agora é 0.
x = 15
y = 13
z = 0
*/
