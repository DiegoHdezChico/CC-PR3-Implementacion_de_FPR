/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la definición de métodos de la clase FuncionDosParametros
*/

#include <string>

#include "../includes/funcion_dos_parametros.h"

/**
 * @brief Comprueba que la función se haya instanciado con el número correcto 
 * de parámetros
 * 
 * @param parametros_a_comprobar
 */
void FuncionDosParametros::Comprobar(const std::vector<int>& parametros_a_comprobar) {
  if (parametros_a_comprobar.size() != 2) {
    std::string error{"Error. Se ha llamado a una función de dos parámetros con un número incorrecto de parámetros."};
    throw error;
  }
}