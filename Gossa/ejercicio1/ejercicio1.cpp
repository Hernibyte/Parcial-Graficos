#include "pch.h"
#include "framework.h"
#include <iostream>

using namespace std;

namespace parcial {
	void mostrarCreditos() {
		cout << "Nombre: Hernan Gossa /n" << "Ver: Visual studio 2017";
	}

	float diferencia(float result, float num1, float num2) {
		result = num1 - num2;
		return result;
	}
}