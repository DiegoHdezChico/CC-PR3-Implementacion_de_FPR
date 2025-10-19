/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la declaración de la clase FuncionSucesor
*/

#include "funcion_un_parametro.h"

#ifndef FUNCION_SUCESOR_H
#define FUNCION_SUCESOR_H

class FuncionSucesor: public FuncionUnParametro {
  public:
  FuncionSucesor() {  }
  virtual int Ejecutar(int& contador, const std::vector<int>& parametros_funcion);
};

#endif