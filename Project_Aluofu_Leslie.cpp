#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	int speedGpu, speedCpu, numberOfcores, menu, performanceScore;
	
	double mult;
	

	
	cout << "Enter the clock speed (in Megahertz) of their graphic card " << endl;
	
	cin >> speedGpu;
	
if(speedGpu > 0){
	cout << "Invalid graphics card speed entered. Program will terminate " << endl;
	return 0;
}

	
	
	
	
	cout << "Enter the clock speed (in Megahertz) of their processor (CPU) " << endl;
	cin >> speedCpu;

if(speedCpu > 0){
	cout << "Invalid Processor speed entered. Program will terminate " << endl;
	return 0;
}
    
    
    
	
	
	cout << "Enter the number of cores that their processor(CPU) has " << endl;
	
	cin >> numberOfcores;
	
if(numberOfcores > 0){
	cout << "Invalid number of cores entered. Program will terminate " << endl;
	return 0;
}
	
	cin >> numberOfcores;
	
	cout << "\t 1. 1280 x 720 \n";
	cout << "\t 2. 1920 x 1080 \n";
	cout << "\t 3. 2560 x 1440 \n";
	cout << "\t 4. 3840 x 2160 \n";
	
	cin >> menu;
	
	double menuItem1 = 1;  //"1280 x 720";
	double  menuItem2 = 0.75; //"1920 x 1080";
	double menuItem3 = 0.55;  // "2560 x 1440";
	double menuItem4 = 0.35;  //"3840 x 2160";
	
	if(menu == 1){
		mult = menuItem1;
		
	}else
		if(menu == 2){
		mult = menuItem2;
		
	}else
		if(menu == 3){
		mult = menuItem3;
		
	}else
		if(menu == 4){
		mult = menuItem4;
		
	}else{
		//tell user that something went wrong, no input received
		
		cout << " ERROR \n"; 
	}
	
	performanceScore = ((5 * speedGpu) + (numberOfcores * speedCpu)) * mult;
	
	string text;
	text = "Computer Hardware Graphics Quality Recommendation Tool \n";
	
	cout << text << endl;
	
	cout << "GPU clock speed: " << speedGpu << endl;
	
	cout << "CPU clock speed: " << speedCpu << endl;
	
	cout << "The number of cores: " << numberOfcores << endl;
	
	cout << "Monitor Resolution " << menu << endl;
	
	cout << setprecision(3) << showpoint << fixed << endl;
	
	cout << "The Performance Score: " << performanceScore <<endl;
	
	cout << "The recommended Graphics Quality: Unable to Play \n";
	
	
	
	
}
