/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 
 * @author Álvaro Luis González
 * @date 28-11-2024 
 * @brief El programa calcula los cubos desde el 0 hasta el numero dado
 * @bug No hay bugs desconocidos
 */

#include <iostream>

int main() {
	int num1;
	std::cin >> num1;
  for (int i = 0; i <= num1; ++i) {
    if (i > 0) {
      std::cout << ",";
    }
      std::cout << i * i * i;
 	}
	std::cout << "\n";
}

