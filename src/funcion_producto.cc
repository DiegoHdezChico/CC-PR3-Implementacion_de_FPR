/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la definción de métodos de la clase FuncionProducto
*/

#include <string>

#include "../includes/funcion_producto.h"
#include "../includes/funcion_cero.h"
#include "../includes/funcion_proyeccion.h"
#include "../includes/funcion_suma.h"

/**
 * @brief Ejecuta la función producto
 * 
 * @param contador
 * @param parametros_funcion
 * @return Multiplica los parámetros de entrada para el nivel de recursión
 *  actual, si no se ha lanzado ningún error
 */
int FuncionProducto::Ejecutar(int& contador, const std::vector<int>& parametros_funcion) {
  try {
    Comprobar(parametros_funcion);
  } catch (std::string error) {
    throw error;
  }
  ++contador;
  if (parametros_funcion[1] == 0) {
    FuncionCero cero;
    return cero.Ejecutar(contador, std::vector<int> {parametros_funcion[0]});
  }
  int primer_factor = parametros_funcion[0];
  int segundo_factor = parametros_funcion[1] - 1;
  FuncionProyeccion proyeccion;
  int producto_anterior = Ejecutar(contador, std::vector<int> {primer_factor, segundo_factor});
  int resultado_proyeccion1 = proyeccion.Ejecutar(contador, std::vector<int> {3, 1, primer_factor, segundo_factor, producto_anterior});
  int resultado_proyeccion2 = proyeccion.Ejecutar(contador, std::vector<int> {3, 3, primer_factor, segundo_factor, producto_anterior});
  FuncionSuma suma;
  return suma.Ejecutar(contador, std::vector<int> {resultado_proyeccion1, resultado_proyeccion2});
}