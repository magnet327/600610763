#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream text;
	text.open("D:\\600610763\\cheerbook_copy.txt",ios::app);
	string textline;
	bool havetext;
	havetext = getline(text,textline);
	cout << "-------------------- SOTUS ---------------------\n";
	while(havetext){
		cout << textline << "\n";
		havetext = getline(text,textline);
	}
	cout << "-------------------- SOTUS ---------------------";
	return 0;
}
