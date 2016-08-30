#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
	string assinatura, sequencia;
	int existeAssinatura = 0, instancia = 0;

	while(instancia++, cin >> assinatura, assinatura.compare("0")){
		if(instancia > 1) cout << endl;
		cin >> sequencia;

		for(int i=0; i<=sequencia.size()-assinatura.size() && !existeAssinatura; i++){
			for(int j=0; j<assinatura.size(); j++){

				if(assinatura[j] != sequencia[i+j]){
					break;
				}
				if(j == assinatura.size()-1){
					existeAssinatura = 1;
					break;
				}
			}
		}
		if(existeAssinatura){
			cout << "Instancia " << instancia << "\n" << "verdadeira" << endl;
		}else{
			cout << "Instancia " << instancia << "\n" << "falsa" << endl;
		}
		existeAssinatura = 0;

	}
	return 0;
}