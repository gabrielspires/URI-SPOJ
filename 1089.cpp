#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int n, //num de amostras
		h[10002], //seq de magnitudes
		numPicos;

	while(cin >> n, numPicos = 0, n != 0){
		
		for(int i=0; i<n; i++){
			cin >> h[i];
			if(i>1){
				if((h[i-1] > h[i-2] && h[i-1] > h[i]) || (h[i-1] < h[i-2] && h[i-1] < h[i])){
					numPicos++;
				}
			}
		}
		if((h[n-1] > h[n-2] && h[n-1] > h[0]) || (h[n-1] < h[n-2] && h[n-1] < h[0])){
			numPicos++;
		}
		if((h[0] > h[1] && h[0] > h[n-1]) || (h[0] < h[1] && h[0] < h[n-1])){
			numPicos++;
		}
		if(n == 2 && h[0] != h[1]){
			numPicos = 2;
		}

		cout << numPicos << endl;
	}
	return 0;
}