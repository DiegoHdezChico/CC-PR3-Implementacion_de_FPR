/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la definición de métodos de la clase FuncionCero
*/

#include <string>

#include "../includes/funcion_cero.h"

/**
 * @brief Ejecuta la función cero
 * 
 * @param contador para controlar el número de llamadas a función
 * @param parametros_funcion lista de parámetros con los que ejecutar la función
 * cero
 * 
 * @return cero en caso de que la lista de parámetros sea correcta
 */
int FuncionCero::Ejecutar(int& contador, const std::vector<int>& parametros_funcion) {
  try {
    Comprobar(parametros_funcion);
  } catch (std::string error) {
    throw error;
  }
  ++contador;
  return 0;
}