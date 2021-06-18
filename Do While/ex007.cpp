#include <iostream>

using namespace std;
int main (){
	int i = 1, result;
	
	do{
		result = i*i;
			cout <<"O quadrado de "<< i << " e = "<<result <<"\n";
		i = i + 1; 
	}while(i <= 20);
	
	return 0;
}
