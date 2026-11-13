#include <iostream>

using namespace std;

int main(){
	double liczby[3];
	
	cout<<"podaj trzy liczby"<<endl;
	
	cin>>liczby[0];
	cin>>liczby[1];
	cin>>liczby[2];

	double i = liczby[0];

	for (int u; u<3; u++) {
		if (liczby[u] > i) {
			i = liczby[u];
		}
	}

	cout<<"najwieksza to: "<<i<<endl;

	return 0;
}
