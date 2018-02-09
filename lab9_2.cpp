#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream text("D:\\600610763\\cheerbook_copy.txt");
	text << "AR CHI\n";
	text << "AR BOW\n";
	text << "BA KA\n";
	text << "BA GEAR\n";
	text << "CHEER CHEER\n";
	text << "WE ARE ALL\n";
	text << "ENTANEER\n";
	text << "CMU\n";
	text.close();
	return 0;
}

