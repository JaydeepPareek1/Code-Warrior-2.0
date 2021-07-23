#include<iostream>
using namespace std;

int main(){

	int a[5] = {1,2,3,4,5};
	cout <<"Addresses are"<<endl;
	for(int i = 0 ; i < 5;i++){
		cout << a + i << endl;
	}
	cout <<"values inside arrays are"<<endl;
	for(int i = 0 ; i < 5;i++){
		cout << a[i] <<" "<<*(a+i)<< " "<< i[a] << endl;
	}
}