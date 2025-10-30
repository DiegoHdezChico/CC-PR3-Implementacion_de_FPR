/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Programa para ejecutar la función proyección.
*/

#include <iostream>
#include <string>
#include <cmath>

#include "../includes/funcion_potencia.h"

int main(int argc, char* argv[]) {
  std::cout << "Introduzca el valor de la base: ";
  double base{0};
  std::cin >> base;
  std::cout << "Introduzca el valor del exponente: ";
  double exponente{0};
  std::cin >> exponente;
  if (base < 0 || exponente < 0 || std::floor(base) != base || std::floor(exponente) != exponente) {
    std::cout << "Error. Los valores de entrada deben pertenecer al conjunto de los números naturales." << std::endl;
    return 1;
  }
  int base_natural = base;
  int exponente_natural = exponente;
  int contador{0};
  FuncionPotencia potencia;
  int resultado{0};
  try {
    resultado = potencia.Ejecutar(contador, std::vector<int>{base_natural, exponente_natural});
  } catch (std::string error) {
    std::cout << error << std::endl;
    return 1;
  }
  std::cout << "El resultado de la potencia es: " << resultado << "." << std::endl;
  std::cout << "Se han realizado " << contador << " llamadas a funciones." << std::endl;
  return 0;
}