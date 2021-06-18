#include <iostream>

using namespace std;
int main (){
	int i = 1;
	int result = 0;
	
	while(i <= 20){
		result = i * i;
		cout <<"O quadrado de "<< i << " e = "<<result <<"\n";
		i++;
	}
	
	return 0;
}
