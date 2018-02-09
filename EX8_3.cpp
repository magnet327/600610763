#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N,int M){
	if(N>0 && M>0){
	for(int i=0; i < N ;i++){
		if(i%2 == 0){
			for(int j=0; j < M;j++ ){
				if(j%2 == 0){
					cout << 'O';	
				}else{
					cout << 'X';
				}
			}
		}else{
			for(int j=0; j < M;j++ ){
				if(j%2 == 0){
					cout << 'X';
				}else{
					cout << 'O';
				}
		}
		}
		cout << "\n";
	}
	}else{
		if(N<0){
		cout << "invalid input";
		}else{
		cout << "invalid input";
		}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
