#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]){
	int k, temp, consulta, numGenoma = 0;
	int n,   	//num de genes [1:50000]
		r,   	//num de inversoes
		q,   	//num de consultas
		i,j,	//indices das inversoes
		genoma[50000]; //genoma

	while(cin >> n >> r, n != 0){
		numGenoma++;

		for(i=0; i<n; i++) genoma[i] = i+1; //reseta o vetor

		while(r--){
			cin  >> i >> j;

			for(k=i; k<=j; k++, j--){ //faz as inversoes
				temp = genoma[k-1];
				genoma[k-1] = genoma[j-1];
				genoma[j-1] = temp;
			}
		}

		cin >> q;
		cout << "Genome " << numGenoma << endl;

		while(q--){
			cin >> consulta;
			for(i=0; i<n; i++){ //acha e imprime a posição consultada
				if(genoma[i] == consulta){
					cout << i+1 << endl;
				}
			}
		}
	}


	return 0;
}