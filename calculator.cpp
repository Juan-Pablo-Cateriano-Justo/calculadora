#include <iostream>
using namespace std;
double calcular(double a, double b, char op) {
  switch(op)
    case '+': return a+b 
    case '-': return a-b
    case '*': return a*b
    case '/': 
      if( b != 0)
        return a/b;
    else {
      cout << "Operacion invalida\n"; 
        return 0;
    }
    
}

int main() {
double a, b,
char op
  
}
