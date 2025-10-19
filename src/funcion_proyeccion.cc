/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la definición de métodos de la clase FuncionProyeccion
*/

#include <string>

#include "../includes/funcion_proyeccion.h"

/**
 * @brief Ejecuta la función proyección sobre los parámetros dados
 * 
 * @param contador
 * @param parametros_funcion
 * @return Resultado de la proyección, si no ha saltado ningún error
 */
int FuncionProyeccion::Ejecutar(int& contador, const std::vector<int>& parametros_funcion) {
  try {
    Comprobar(parametros_funcion);
  } catch (std::string error) {
    throw error;
  }
  ++contador;
  int tamano_entrada = parametros_funcion[0];
  int indice_seleccionado = parametros_funcion[1] - 1;
  std::vector<int> valores_proyeccion;
  for (int i{2}; i < parametros_funcion.size(); ++i) {
    valores_proyeccion.push_back(parametros_funcion[i]);
  }
  return valores_proyeccion[indice_seleccionado];
}

/**
 * @brief Comprueba el primer valor de la proyección coincida con el número de 
 * parámetros pasados y que el segundo valor de la proyección no sea superior 
 * al primero.
 *
 * @param parametros_a_comprobar
 */
void FuncionProyeccion::Comprobar(const std::vector<int>& parametros_a_comprobar) {
  int tamano_entrada = parametros_a_comprobar[0];
  int indice_seleccionado = parametros_a_comprobar[1] - 1;
  if (indice_seleccionado >= tamano_entrada) {
    std::string error{"Error en la proyección. Se ha seleccionado un índice superior al número de parámetros de la proyección"};
    throw error;
  }
  if (parametros_a_comprobar.size() - 2 != tamano_entrada) {
    std::string error{"Error en la proyección. El tamaño de la entrada especificado no coincide con el tamaño real."};
    throw error;
  }
}