/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

/**
 * @file stackTemplate.cpp
 * @author Josué Salmerón Córdoba (tomado del repositorio ebadilla10)
 * @brief La idea de esta segunda parte de la tarea es identificar que headers no son necesarios para el 
 * código implementado. Y en efecto, hay headers inútiles en este archivo. Lo que se hizo fue instalar una 
 * extensión de C++ en Vscode y cuando se comentaba cualquier header, entonces vscode de manera inmediata
 *  marca en rojo la instrucción que depende de esa librería, el hacer esto facilitó el trabajo solicitado.
 * De esa manera, los headers innecesarios son algorithm y vector. Los demás si se ocupan para trabjar con 
 * algunas funciones específicas.
 * 
 * @version 0.1
 * @date 2023-05-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
//#include <vector>
// #include <algorithm>
#include <stdexcept> // se queja el typename y la excepción.
#include <functional> // se queja el foreach.
/**
 * @brief Acá se implementa un template que inicialmente muestra el tamaño de la pila. Que es de 3
 * es un atributo privado para que no se pueda editar. Luego, la función push toma el typename de 
 * la clase Stack que se encarga de añadir un elemento al final del vector. 
 * 
 * @tparam T 
 */
template<typename T>
class Stack {
private:
  std::vector<T> data_;
/**
 * @brief Se imprime el valor de la pila.
 * 
 */
public:
/**
 * @brief Se añade un elemento al final del vector.
 * 
 * @param value: int que almacena el valor de la pila.
 */
  void push(T value) {
    data_.push_back(value);
  }
/**
 * @brief Después se toma a T, que elimina el primer elemento 
 * de la cola, por eso es que se usa un condicional ya que se hace uso de empty() y devolver true si el vector está 
 * vacío o false caso contrario. Solo que en este caso se usa throw, y esto sirve para lanzar una excepción si se 
 * detecta un problema. Fuera del condicional T value devuelve una referencia al último elemento de la lista y al 
 * mismo tiempo se elimina el último elemento.

 * 
 * @return T 
 */
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }
/**
 * @brief La función void clear, elimina todos los elementos.
 * 
 */
  void clear() {
    data_.clear();
  }
/**
 * @brief Acá básicamente devolverá un true si la lista está vacía, un false caso
 * contrario.
 * 
 * @return true 
 * @return false 
 */
  bool empty() const {
    return data_.empty();
  }
/**
 * @brief En esta pequeña función se muestra el tamaño de la lista 
 * Eso justifica el uso de .size().
 * @return std::size_t: tamaño de la lista.
 */
  std::size_t size() const {
    return data_.size();
  }
/**
 * @brief Esta función no devuelve ningún valor, ya que es un void. Toma la referencia sobre T.
 * y los compara con la referencia func. Luego, se imprimen los valores del inicio y el final de la 
 * pila.
 * 
 * @param func: variable enetera del stack usado.
 */
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};
/**
 * @brief Esto es el llamado de la función main, aquí se carga la pila, o se apila los elementos que se
 * van a usar (viéndolos o pensando ensamblador) ya que se hace uso de push, es decir, se están agregando 
 * elementos al final de la lista, un total de 4. Después se imprime el tamaño de la pila con .size().
 * Por último se hace un llamado a la función foreach para traer lo que tiene contenido value y mostrarlo
 * por consola, además se desapila el valor del stack, esto con ayuda de .pop. de donde se atrapan las exce-
 * pciones del programa con try y catch para estar seguros de no tener valores inapropiados.
 * @return int 
 */
int main() {
  Stack<int> s;
  s.push(2021);
  s.push(2054);
  s.push(6524);

  std::cout << "Stack size: " << s.size() << std::endl;

  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });
/**
 * @brief 
 * 
 */
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  return 0;
}
