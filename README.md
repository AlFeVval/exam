# Clever Internship exam

Para usuarios Unix (distribución Ubuntu), unicamente tiene que bajar los archivos .out y ejecutar via terminal para las primeras dos pruebas. Para la ultima, y para 
usarios Windows hay que recompilar y ejecutar el .exe, al ser C++ tienes que usar el comando: "g++ nombreDelArchivo.cpp"

## 1. Suma de digitos
### Dado un *integer* escribe una función que regrese la suma todos sus dígitos. Es decir, para el *integer* 12345 las suma de sus dígitos es: 1+2+3+4+5 = 15
<br>
Definición de la función: digitsSum(inputInt: integer): integer
<br>
Casos de ejemplo:
<br>
● Con inputInt = “999”, la salida debería ser digitsSum(inputInt ) = 27;
<br>
● Con inputInt = “9184501”, la salida debería ser digitsSum(inputInt ) = 28;
<br>
● Con inputInt = “12345”, la salida debería ser digitsSum(inputInt ) = 15;
<br> Resultado: <br>

![](https://github.com/AlFeVval/exam/blob/main/evidence/digitAddition.png) <br>
## [Código este ejercicio](https://github.com/AlFeVval/exam/blob/main/digAdd.cpp)

## 2. Palindromos
### Dado un *string*, escribe una función para verificar si es un palíndromo. Un palíndromo es un texto que se lee igual de izquierda a derecha que de derecha a izquierda. Las palabras: __salas, oso, reconocer y oro__ son palíndromos.
Definición de la función: isPalindrome(inputStr: string): boolean
Casos de ejemplo <br>
● Con inputStr = “aabaa”, la salida debería ser isPalindrome(inputStr) = true; <br>
● Con inputStr = “abac”, la salida debería ser isPalindrome(inputStr) = false; <br>
● Con inputStr = “salas”, la salida debería ser isPalindrome(inputStr) = true;
<br> Resultado <br>
![](https://github.com/AlFeVval/exam/blob/main/evidence/palindrome.png)
## [Código este ejercicio](https://github.com/AlFeVval/exam/blob/main/palindrome.cpp)

## 3. Producto de elementos adyacentes
### Dado un arreglo de enteros, encuentra el par de elementos adyacentes tales que __su producto sea el más grande__ y devuelve dicho producto.

Se consideran como elementos adyacentes aquellos que se encuentren a la izquierda o a la derecha, es decir, dado el arreglo [3, 6, -2, 5] los elementos adyacentes serían:
<br> ● 3 y 6 => 3 * 6 = __18__ <br>
● 6 y-2 => 6 * -2 = -12 <br>
● -2 y 5 => 5 * -2 = -10 <br>
La función debería devolver __18__ dado que es el producto de adyacentes más grande. <br>
Definición de la función: maxAdjacentProd(inputArray: array): integer
Casos de ejemplo <br>
<br> ● Con inputArray= [3, 6, -2, -5, 7, 3]
<br> la salida debería ser maxAdjacentProd(inputArray) = 21;
<br> ●Con inputArray= [5, 1, 2, 3, 1, 4]
<br> la salida debería ser maxAdjacentProd(inputArray) = 6;
<br> ●Con inputArray= [-23, 4, -3, 8, -12]
<br> la salida debería ser maxAdjacentProd(inputArray) = -12;
![](https://github.com/AlFeVval/exam/blob/main/evidence/maxAdjacent.png)
## [Código este ejercicio](https://github.com/AlFeVval/exam/blob/main/maxAdjProd.cpp)
