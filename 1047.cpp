#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	int hi, mi, hf, mf;
	int hrs=0, min=1;

	cin >> hi >> mi >> hf >> mf;

	if(hi > hf)
		min = (24*60)+(((24*60)-(hi*60+mi))-((24*60)-(hf*60+mf)));
	else
		min = (hf*60+mf)-(hi*60+mi);

	hrs = min/60;
	min -= hrs*60;

	if(hi == hf && mi == mf){
		hrs = 24;
		min = 0;
	}

	cout << "O JOGO DUROU " << hrs << " HORA(S) E " << min << " MINUTO(S)" << endl;
	return 0;
}