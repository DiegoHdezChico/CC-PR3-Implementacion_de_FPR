# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Complejidad Computacional
# 
# @author Diego Hernández Chico
# @date 19 Oct 2025
# CORREO: alu0101572062@ull.edu.es
# @brief Makefile del programa potencia_fpr
#

CXX = g++
CXXFLAGS = -g -std=c++17 #-fsanitize=address

.PHONY: all clean 

all: potencia_fpr

potencia_fpr: src/*.cc
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f potencia_fpr