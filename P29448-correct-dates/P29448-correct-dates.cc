/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 
 * @author Álvaro Luis González
 * @date 28-11-024
 * @brief El programa dice si una fecha es correcta o no 
 * @bug No hay bugs desconocidos
 */


#include<iostream>

int main() {
	int dia, mes, anio;
	std::cin >> dia >> mes >> anio;
	if(dia >= 1 && mes >= 1 && anio >= 1){
		if (dia <= 31 && mes <= 12 && mes == 2 && dia >= 29){
		std::cout << "Correct Date" << std::endl;
		}
	}
		else{
			std::cout << "Incorrect Date" << std::endl;
		}
		if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0){
			if(mes == 2 && dia <= 30){
				std::cout << "Incorrect Date" << std::endl;
			}
		}

	}

