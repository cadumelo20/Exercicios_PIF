# Questão 05

**Variáveis:** 
`i = 1`, `j = 2`, `k = 3`, `n = 2`
`x = 3.3`, `y = 4.4`

Resultados (1 para Verdadeiro, 0 para Falso):

a) `i < i + 3` 
(1 < 4) => **Resultado: 1**

b) `2*i - 7 <= j - 8`
(2 - 7 <= 2 - 8) => (-5 <= -6) => **Resultado: 0**

c) `-x + y >= 2.0*y`
(-3.3 + 4.4 >= 8.8) => (1.1 >= 8.8) => **Resultado: 0**

d) `x == y`
(3.3 == 4.4) => **Resultado: 0**

e) `!(n - j)`
!(2 - 2) => !0 => **Resultado: 1**

f) `!n - j`
(!2) - 2 => 0 - 2 => -2 (Neste caso isolado resulta no inteiro **-2**, caso considerado apenas como valor relacional/booleano estrito seria **1/True** dependendo do contexto da condicional por ser diferente de zero, mas matematicamente a expressão avaliada pela precedência C dá **-2**).

g) `i && j && k`
(1 && 2 && 3) => **Resultado: 1**

h) `i || j && k`
1 || (2 && 3) => 1 || 1 => **Resultado: 1**

i) `i < j && 2 >= k`
(1 < 2) && (2 >= 3) => 1 && 0 => **Resultado: 0**

j) `i == 2 || j == 4 || k == 5`
0 || 0 || 0 => **Resultado: 0**
