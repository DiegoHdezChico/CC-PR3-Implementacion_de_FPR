/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la declaración de la clase abstracta 
 * FuncionPrimitivaRecursiva
*/

#include <vector>

#ifndef FUNCION_PRMITIVA_RECURSIVA
#define FUNCION_PRMITIVA_RECURSIVA

class FuncionPrimitivaRecursiva {
  public:
  FuncionPrimitivaRecursiva() {  }
  virtual int Ejecutar(int& contador, const std::vector<int>& parametros_funcion) = 0;
  protected:
  virtual void Comprobar(const std::vector<int>& parametros_a_comprobar) = 0;
};

#endif