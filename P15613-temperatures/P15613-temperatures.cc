/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 
 * @author Álvaro Luis González
 * @date 28-10-2024
 * @brief El programa lee un numero dado en grados e interpreta si hace frio, calor o templado 
 * @bug No hay bugs desconocidos
 */

#include<iostream>

int main() {
  int temperature;
  std::cin >> temperature;
  if ((temperature >= 10) && (temperature <= 30)){
    std::cout << "it's ok" << std::endl;
  }
  if ((temperature > 30) && (temperature < 100)){
    std::cout << "it's hot" << std::endl;
  }
  else if(temperature >= 100){
    std::cout << "it's hot""\n""water would boil" << std::endl;
  }
  else if((10 > temperature) && (temperature > 0)){
    std::cout << "it's cold" << std::endl;
  }
}
