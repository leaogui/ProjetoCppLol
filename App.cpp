#include <iostream>
#include <cstdlib>
#include <locale>
#include "Controller.h"

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	Controller control;
	
	control.comeco();
	
	
	
	system("pause");
	return 0;
}
