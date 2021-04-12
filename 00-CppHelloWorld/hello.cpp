#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream myfile;
	myfile.open("output.txt");
	myfile << "Hello, world!\n";
	myfile.close();
	cout << "Hello, world!" << endl;
	return 0;
}