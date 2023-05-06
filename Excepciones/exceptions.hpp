#include <iostream>
/**
 * @brief En esta clase se define un string que será identificado como una excepción.
 * @return Error: muestra un mensaje por consola de la excepción.
 */
class MyException : public std::exception {
public:
  const char* what() const throw() {
    return "My custom exception";
  }
};