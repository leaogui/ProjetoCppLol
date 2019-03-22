#include <iostream>
#include <cstdlib>
#include "Champions.h"

using namespace std;

class Controller{
	
	public:
		
	
		
		void comeco(){
			
			int choice;
		
			
			cout << "Bem vindo ao programa de itens do LoL!\n";
			
				while(choice < 1 || choice > 3){
			
			cout << "Digite 1 para buscar a build de um campeão, 2 para adicionar uma build e 3 para sair.\n";
			
			
			cout << "Escolha: ";
			
			
			cin >> choice;
			
			system("cls");
			
				if(choice < 1 || choice > 3){
				
					cout <<  "Este número não é uma opção, tente novamente.\n";
				}
			
		}
			
			
			
			
			switch(choice){
				
				
				case 1:
					
					
						cout << "Listagem de campeões: \n";
					
					
					break;
				
				
				case 2:
					
						cout << "Adicionar build: \n";
					
					break;
				
				
				case 3:
					
						cout << "Obrigado por utilizar o programa!\n";
					
					break;
				
						
				
			}
			
			
			
			
			
			
		};
	
	
	
	
};
