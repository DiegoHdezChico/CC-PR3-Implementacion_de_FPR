/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Complejidad Computacional
 * 
 * @author Diego Hernández Chico
 * @date 19 Oct 2025
 * CORREO: alu0101572062@ull.edu.es
 * @brief Fichero con la declaración de la clase FuncionProducto
*/

#include "funcion_dos_parametros.h"

#ifndef FUNCION_PRODUCTO_H
#define FUNCION_PRODUCTO_H

class FuncionProducto: public FuncionDosParametros {
  public:
  FuncionProducto() {  }
  virtual int Ejecutar(int& contador, const std::vector<int>& parametros_funcion);
};

#endif