#include <iostream>
#include <stack>
using namespace std;

int main(){
	string expressao = "(a+b);";
	
	stack<char> pilha;
	for (int i = 0; i < expressao.length(); i++){
	char caracter = expressao[i];
	
	if (caracter == '('){
		pilha.push(caracter);
		cout << pilha.top() << endl;
	}
	if (caracter == 'a'){
		pilha.push(caracter);
		cout << pilha.top() << endl;
	}
	
	if (caracter == '+'){
		pilha.push(caracter);
		cout << pilha.top() << endl;
	}
		
	if (caracter == 'b'){
		pilha.push(caracter);
		cout << pilha.top() << endl;
	}
	
	if (caracter == ')'){
		pilha.push(caracter);
		cout << pilha.top() << endl;
		}
		
	else if (caracter == ';'){
		if(pilha.empty() || pilha.top() != caracter){
			cout << "FIM" << endl;
			
			//desempilha
			while (!pilha.empty()){
				//pilha.pop();
				}
			
			//mostra a pilha depois dos elementos removidos
			cout << pilha.top() << endl;
			return 0;
			}
			
		}
		
	}
			

	if (pilha.empty()){
		cout << "Pilha vazia" << endl;
	}	
	
	
	return 0;
}
