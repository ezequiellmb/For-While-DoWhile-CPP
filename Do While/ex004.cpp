#include <iostream>

using namespace std;
int main (){
	int i = 1;
	
	do{
		if(i % 5 == 0){
			cout << i <<" E multiplo de 5\n";
		}
		i++; 
	}while(i <= 500);
	
	return 0;
}
