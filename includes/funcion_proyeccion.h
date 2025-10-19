/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la declaración de la clase FuncionProyeccion
*/

#include "funcion_primitiva_recursiva.h"

#ifndef FUNCION_PROYECCION
#define FUNCION_PROYECCION

class FuncionProyeccion: public FuncionPrimitivaRecursiva {
  public:
  FuncionProyeccion() {  }
  virtual int Ejecutar(int& contador, const std::vector<int>& parametros_funcion);
  protected:
  virtual void Comprobar(const std::vector<int>& parametros_a_comprobar);
};

#endif