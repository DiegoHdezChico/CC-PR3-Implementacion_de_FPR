/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la definición de métodos de la clase FuncionSucesor
*/

#include <string>

#include "../includes/funcion_sucesor.h"

/**
 * @brief Ejecuta la función sucesor
 * 
 * @param contador
 * @param parametros_funcion
 * @return Sucesor del parámetro de entrada, si no se ha lanzado ningún error
 */
int FuncionSucesor::Ejecutar(int& contador, const std::vector<int>& parametros_funcion) {
  try {
    Comprobar(parametros_funcion);
  } catch (std::string error) {
    throw error;
  }
  ++contador;
  int x = parametros_funcion[0];
  return x + 1;
}