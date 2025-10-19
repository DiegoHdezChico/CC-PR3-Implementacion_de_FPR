/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la definición de métodos de la clase FuncionPotencia
*/

#include <string>

#include "../includes/funcion_potencia.h"
#include "../includes/funcion_sucesor.h"
#include "../includes/funcion_cero.h"
#include "../includes/funcion_proyeccion.h"
#include "../includes/funcion_producto.h"

/**
 * @brief Realiza la potencia tomando el primer parámetro de entrada como 
 * base y el segundo como exponente
 * 
 * @param contador
 * @param parametros_funcion
 * @return  potencia de los parámetros de entrada para el nivel de recursión
 *  actual, si no se ha lanzado ningún error
 */
int FuncionPotencia::Ejecutar(int& contador, const std::vector<int>& parametros_funcion) {
  try {
    Comprobar(parametros_funcion);
  } catch (std::string error) {
    throw error;
  }
  ++contador;
  if (parametros_funcion[1] == 0) {
    FuncionSucesor sucesor;
    FuncionCero cero;
    int resultado_cero = cero.Ejecutar(contador, std::vector<int> {parametros_funcion[0]});
    return sucesor.Ejecutar(contador, std::vector<int> {resultado_cero});
  }
  int base = parametros_funcion[0];
  int exponente = parametros_funcion[1] - 1;
  FuncionProyeccion proyeccion;
  int resultado_potencia_anterior = Ejecutar(contador, std::vector<int> {base, exponente});
  int resultado_proyeccion1 = proyeccion.Ejecutar(contador, std::vector<int> {3, 1, base, exponente, resultado_potencia_anterior});
  int resultado_proyeccion2 = proyeccion.Ejecutar(contador, std::vector<int> {3, 3, base, exponente, resultado_potencia_anterior});
  FuncionProducto producto;
  return producto.Ejecutar(contador, std::vector<int> {resultado_proyeccion1, resultado_proyeccion2});
}