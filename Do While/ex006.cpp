#include <iostream>

using namespace std;
int main (){
	int i = 1;
	
	do{
		if(i % 2 != 0){
			cout << i <<" IMPAR\n";
		}
		i++; 
	}while(i <= 200);
	
	return 0;
}
