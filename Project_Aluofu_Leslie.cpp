#include <iostream>
using namespace std;

int main()
{
	int speedGpu, speedCpu, numberOfcores, menu, performanceScore;
	
	
	cout << "Enter the clock speed (in Megahertz) of their graphic card " << endl;
	
	cin >> speedGpu;
	
	cout << "Enter the clock speed (in Megahertz) of their processor (CPU) " << endl;
	
	cin >> speedCpu;
	
	cout << "Enter the number of cores that their processor(CPU) has " << endl;
	
	cin >> numberOfcores;
	
	cout << "\t 1. 1280 x 720 \n";
	cout << "\t 2. 1920 x 1080 \n";
	cout << "\t 3. 2560 x 1440 \n";
	cout << "\t 4. 3840 x 2160 \n";
	
	cin >> menu;
	
}
