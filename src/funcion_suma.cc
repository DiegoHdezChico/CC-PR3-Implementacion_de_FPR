/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la definición de métodos de la clase FuncionSuma
*/

#include <string>

#include "../includes/funcion_suma.h"
#include "../includes/funcion_proyeccion.h"
#include "../includes/funcion_sucesor.h"

/**
 * @brief Ejecuta la función suma
 * 
 * @param contador
 * @param parametros_funcion
 * @return Suma de los parámetros de entrada para el nivel de recursión actual,
 * si no se ha lanzado ningún error
 */
int FuncionSuma::Ejecutar(int& contador, const std::vector<int>& parametros_funcion) {
  try {
    Comprobar(parametros_funcion);
  } catch (std::string error) {
    throw error;
  }
  ++contador;
  FuncionProyeccion proyeccion;
  if (parametros_funcion[1] == 0) {
    std::vector<int> parametros_proyeccion1{2, 1, parametros_funcion[0], parametros_funcion[1]};
    return proyeccion.Ejecutar(contador, parametros_proyeccion1);
  }
  int primer_sumando = parametros_funcion[0];
  int segundo_sumando = parametros_funcion[1] - 1;
  int suma_anterior = Ejecutar(contador, std::vector<int> {primer_sumando, segundo_sumando});
  int resultado_proyeccion = proyeccion.Ejecutar(contador, {3, 3, primer_sumando, segundo_sumando, suma_anterior});
  FuncionSucesor sucesor;
  return sucesor.Ejecutar(contador, std::vector<int> {resultado_proyeccion});
}