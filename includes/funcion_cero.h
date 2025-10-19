/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la declaración de la clase FuncionCero
*/

#include "funcion_un_parametro.h"

#ifndef FUNCION_CERO
#define FUNCION_CERO

class FuncionCero: public FuncionUnParametro{
  public:
  FuncionCero() {  }
  virtual int Ejecutar(int& contador, const std::vector<int>& parametros_funcion);
};

#endif