#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	int speedGpu, speedCpu, numberOfcores, menu, performanceScore, numberOfcomputers;
	
	double mult;
	
	string text;
	
	string text2;
	
	cout << "How many computers are being processed? \n\n";		// ask user to input number of computers proccessed 
	
	cin >> numberOfcomputers;
	
if(numberOfcomputers < 0) 										// validate input entered by the user 
{
	cout << "Invalid number of computers entered. Program will terminate. "<< endl;
	return 0;
	}	
	
	
	text2 = "Computer Hardware Graphics Quality Recommendation Tool \n\n";
	
	cout << text2 << endl;
	
	cout << "Enter the clock speed (in Megahertz) of their graphic card " << endl;
	
	cin >> speedGpu;
	
if(speedGpu < 800 or speedGpu > 2000){    								// validate GPU value entered 
	cout << "Invalid graphics card speed entered. Program will terminate " << endl;
	return 0;
}

	
	
	
	
	cout << "Enter the clock speed (in Megahertz) of their processor (CPU) " << endl;
	cin >> speedCpu;

if(speedCpu < 1000 or speedCpu >5500){					// validate CPU value entered 
	cout << "Invalid Processor speed entered. Program will terminate " << endl;
	return 0;
}
    
	cout << "Enter the number of cores that their processor(CPU) has " << endl;
	
	cin >> numberOfcores;
	
if(numberOfcores < 1 or numberOfcores >16){				// validate number of cores entered 
	
	cout << "Invalid number of cores entered. Program will terminate " << endl;
	return 0;
}
cout << numberOfcores <<  endl;

	
	cout << "What is the resolution of your monitor? \n";
	
	cout << "\t 1. 1280 x 720 \n";
	cout << "\t 2. 1920 x 1080 \n";
	cout << "\t 3. 2560 x 1440 \n";
	cout << "\t 4. 3840 x 2160 \n";
	cout << "Please select from the options above: ";
	cin >> menu;
	
if(menu <1 or menu >4 )	
{
	cout << "Invalid number selected. Program will terminate " << endl;
	return 0;
}
	
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
