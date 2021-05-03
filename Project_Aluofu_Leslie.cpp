#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Prototypes
void displayTitle();
string getResolutionString(int);
double getMultiplierValue(int); 
double calculatePerformanceScore(int, int, int, double);
string getRecommendedQuality(double);
void diplayInformation(int, int, int, string, double, string);
// golbal variables

	double menuItem1 = 1;  //"1280 x 720";
	double  menuItem2 = 0.75; //"1920 x 1080";
	double menuItem3 = 0.55;  // "2560 x 1440";
	double menuItem4 = 0.35;  //"3840 x 2160";


void displayTitle()
{
	// object to hold the title
	string title = "Computer Hardware graphics Quality Recommendation Tool";
	cout << title << endl;
}

string getResolutionString(int resolution)
{
	switch(resolution)
	{
		case 1: //1280 * 720
			return "1280 x 720";
		case 2: // 1920 * 1080
			return "1920 x 1080";
		case 3: // 2560 x 1440
			return "2560 x 1440";
		case 4: // 3840 x 2160
			return "3840 x 2160";			
	}
}

double getMultiplierValue(int menu)
{
	switch( menu)
	{
		case 1: // 1280 x 720
			return 1;
		case 2: // 1920 x 1080
			return 0.75;
		case 3: // 2560 x 1440
			return 0.55;
		case 4: //3840 x 2160
			return 0.35;			
	}
	
	
}

double calculatePerformanceScore(int g, int p, int c, double m)
{
	return ((5 *g) +(c * p)) * m;
}

string getRecommendedQuality(double p)
{
	
	if(p > 17000)
	{
		return "Ultra";
	}
	else if(p > 15000 and p <= 17000)
	{
		return "High";
	}
	else if(p > 13000 and p <= 15000)
	{
		return "Medium";
	}
	else if(p > 11000 and p <= 13000)
	{
		return "Low";
	}
	else 
	{
		return "Unable to Play";
	}
}


void diplayInformation(int g, int p, int c, string r, double ps, string q)
{
	cout << "GPU clock speed: " << g<< "MHz" << endl;
	
	cout << "CPU clock speed: " << p<< "MHz" << endl;
	
	cout << "The number of cores: " << c << endl;
	
	cout << "Monitor Resolution: " << r<< endl;
	
	cout << "The Performance Score: " << ps <<endl;
	
	cout << "The recommended Graphics Quality: " << q << endl;
	
}



int main()
{
	int speedGpu, speedCpu, numberOfcores, menu, performanceScore, numberOfcomputers, computers;
	
	double mult;
	
	string text;
	
	string text2;
	
	string quality;
	
	string resolutionString;
	
	int leastPerformance = INT_MAX;
	double maxPerformance =0;
	
	cout << "How many computers are being processed? \n\n";		// ask user to input number of computers proccessed 
	
	cin >> numberOfcomputers;
	
if(numberOfcomputers < 0) 										// validate input entered by the user 
{
	cout << "Invalid number of computers entered. Program will terminate. "<< endl;
	return 0;
	}	
	
	// call function to display the title 
	displayTitle();
	
		for (int computers = 0; computers <numberOfcomputers; computers++ )
			{		performanceScore ;	
			
				}
	
	if(performanceScore < leastPerformance)
	{
		leastPerformance = performanceScore;	
	}
	
	else if(performanceScore > maxPerformance)
	{
		maxPerformance = performanceScore;
	}
	
	
	
	
	
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
	
	
	resolutionString = getResolutionString(menu);
	
	
	// funtion to get the multiplier
	mult = getMultiplierValue(menu);

	// call funtion to get performance score 
	performanceScore =calculatePerformanceScore(speedGpu, speedCpu, numberOfcores, mult);
	
	
	text = getRecommendedQuality(performanceScore);
	
	
//		int highestPf;
//	int lowestPf;
	
//	if(performanceScore >= 13000 and performanceScore <=17000)
//	{
//	highestPf;
//	}
//	else if(performanceScore > 11000)
//	{
//			lowestPf;
//	}
	
	
	cout << text << endl;
	
	cout << setprecision(2) << showpoint << fixed << endl;
	
	
	diplayInformation(speedGpu, speedCpu, numberOfcores, menu, performanceScore, text);

	cout << "The highest performance score was: " << leastPerformance  << endl;
	
	cout << "The lowest performance score was: " << maxPerformance << endl;
	
		
	cout << "How many computers are being processed? \n\n";		// ask user to input number of computers proccessed 
	
	cin >> numberOfcomputers;
	
	
	
	
	
}
