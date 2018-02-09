#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	int i = 0;
	double sum = 0,sum2 = 0,mean,std;
	ifstream text;
	text.open("D:\\600610763\\score1.txt",ios::app);
	string textline;
	while(getline(text,textline)){
		cout << atof(textline.c_str()) << "\n";
		sum += atof(textline.c_str());
		sum2 += pow(atof(textline.c_str()),2);
		i++;
		
	}
	mean = sum/i;
	std = sqrt((sum2/i)-pow(mean,2));
	cout << "Number of data = " << i << endl;
	cout << "Mean = " << mean << endl;
	cout << "Standard deviation = " << std;
	return 0;
}
