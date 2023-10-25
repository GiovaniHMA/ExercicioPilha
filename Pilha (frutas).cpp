#include <iostream>
#include <stack>
using namespace std;
int main() {

 stack<string> pilha1;
 stack<string> pilha2;
 
  cout << "Pilha 1:" << endl;
 pilha1.push("Manga");
 cout << pilha1.top() << endl;
 pilha2.push(pilha1.top());
 pilha1.pop();
 pilha1.push("Uva");
 cout << pilha1.top() << endl;
 pilha2.push(pilha1.top());
 pilha1.pop();
 pilha1.push("Banana");
 cout << pilha1.top() << endl;
 pilha1.push("Maca");
 cout << pilha1.top() << endl;
 pilha1.push("Pera");
 cout << pilha1.top() << endl;
 pilha1.push("Laranja");
cout << pilha1.top() << endl;

 cout << "****************" << endl;
 cout << "Pilha 2:" << endl;
 pilha2.push("Abacate");
 cout << pilha2.top() << endl;
 pilha2.push("Mamao");
 cout << pilha2.top() << endl;
 pilha2.push("Melancia");
 cout << pilha2.top() << endl;
 pilha2.push("Kiwi");
 cout << pilha2.top() << endl;
 pilha2.push("Morango");
 cout << pilha2.top() << endl;
 pilha1.push(pilha2.top());
 pilha2.pop();
 pilha2.push("Abacaxi");
 cout << pilha2.top() << endl;
 pilha1.push(pilha2.top());
 pilha2.pop();
 
cout << "****************" << endl;
 

 cout << "Nova Pilha 1: " << endl;
 while (!pilha1.empty()) {
   cout << pilha1.top() << " " << endl;
   pilha1.pop();}
 cout << "Nova Pilha 2: " << endl;
 while (!pilha2.empty()) {
   cout << pilha2.top() << " " << endl;
   pilha2.pop();  
 }
 cout << endl;
 return 0;

}
