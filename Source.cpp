#include <iostream>
#pragma once
#include "torquecal.h"
using namespace std;





int main()
{
	int a = 1;
	torquecal camaro;
	while (a == 1)
	{
		int b = 0;
		cout << " Choose what you would like to do 1 for force to wheels calculation \n 2 for changing the variables \n 3 for viewing acceleration \n 4 for acceleration with driveshaft loses \n  5 change the torque  ";
		cin >> b;
		
			
		if (b == 5)
		{

		cout << "\n Enter the torque you would like to change to ";
		cin >> camaro.torque;
		cout << "\n";


		}
		if (b == 0)
		{
			cout << " you didnt enter anything ";

		}
		else if (b == 1)
		{

			camaro.force();



		}
		else if (b == 2)
		{

			camaro.change();


		}
		else if (b == 3)
		{
			camaro.acceleration();
		}
		else if (b == 4)
		{
			camaro.real();
		}
		
		else { 

			b = 0;



		}
		cout << " \n do you wish to continue . type 1 for yes type 0 for no \n ";
		cin >> a;


	}
	
	
	
	
	
	
	
	
	
	
	
	}
	













