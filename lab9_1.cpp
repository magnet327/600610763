#include<iostream>
using namespace std;

int main(){
	char grade;
	int i = 0,a = 0,b = 0,c = 0,d = 0,f = 0;
	int count[5] = {'A','B','C','D','F'}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i+1 << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0'){
			break;
		}else{
			if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F'){
				if(grade == 'A'){
					a++;
				}
				else if(grade == 'B'){
					b++;
				}
				else if(grade == 'C'){
					c++;
				}
				else if(grade == 'D'){
					d++;
				}
				else if(grade == 'F'){
					f++;
				}
			}else{
				cout << "Wrong input. Please input again.\n";
				i--;
			} 
		}
		i++;
	}while(true);
	
	
	cout << "In total " << i << " students." << endl;
	cout << "A = " << a <<", ";
	cout << "B = " << b <<", ";	
	cout << "C = " << c <<", ";
	cout << "D = " << d <<", ";
	cout << "F = " << f;	
	return 0;
}
