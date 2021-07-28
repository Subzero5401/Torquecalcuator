#include "torquecal.h"
#pragma once

void torquecal::force(){


	

		std::cout << " \n";
		std::cout << " first gear with final " << torque * firstgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) << " pound force \n";
		std::cout << " second gear with final " << secondgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque << " pound force \n";
		std::cout << " third gear with final " << thirdgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque << " pound force \n";
		std::cout << " fourth gear with final " << fourthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque << " pound force \n";
		std::cout << " fifth gear with final " << fifthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque << " pound force \n";
		std::cout << " sixth gear with final " << sixthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque << " pound force \n";
		std::cout << "\n";

	






}
torquecal::torquecal() {
	std::cout << " This program is for calculating ";
	std::cout << " Please enter first gear  ";
	std::cin >> firstgear;
	std::cout << std::endl << " Please enter second gear ";
	std::cin >> secondgear;
	std::cout << std::endl << " Please enter third gear ";
	std::cin >> thirdgear;
	std::cout << std::endl << " Please enter fourth gear ";
	std::cin >> fourthgear;
	std::cout << std::endl << " Please enter fifth gear ";
	std::cin >> fifthgear;
	std::cout << std::endl << " Please enter sixth gear ";
	std::cin >> sixthgear;
	std::cout << std::endl << "Please enter final gear";
	std::cin >> finaldrive;
	std::cout << std::endl << " Please enter torque  ";
	std::cin >> torque;
	std::cout << std::endl << " Please enter rimdiameter  ";
	std::cin >> rimdiameter;
	std::cout << std::endl << " Please enter aspect ratio  ";
	std::cin >> aspectratio;
	std::cout << std::endl << " Please enter tire width  ";
	std::cin >> tirewidth;
	std::cout << std::endl << " enter the weight of your vehicle in ibs";
	std::cin >> weight; 



}
void torquecal::change()
{ // how do i take a input and check to see if 
	std::cout << " Please enter first gear \n";
	std::cin >> firstgear;
	std::cout << std::endl << " Please enter second gear ";
	std::cin >> secondgear;
	std::cout << std::endl << " Please enter third gear ";
	std::cin >> thirdgear;
	std::cout << std::endl << " Please enter fourth gear ";
	std::cin >> fourthgear;
	std::cout << std::endl << " Please enter fifth gear ";
	std::cin >> fifthgear;
	std::cout << std::endl << " Please enter sixth gear ";
	std::cin >> sixthgear;
	std::cout << std::endl << "Please enter final gear";
	std::cin >> finaldrive;
	std::cout << std::endl << " Please enter torque  ";
	std::cin >> torque;
	std::cout << std::endl << " Please enter rimdiameter  ";
	std::cin >> rimdiameter;
	std::cout << std::endl << " Please enter aspect ratio  ";
	std::cin >> aspectratio;
	std::cout << std::endl << " Please enter tire width  ";
	std::cin >> tirewidth;
	std::cout << std::endl << " enter the weight of your vehicle in ibs";
	std::cin >> weight;





}

void torquecal::real() 
{
	std::cout << " \n this is under the assumption that the drivetrain loses and engine friction make the engine .85 efficient \n " ;
	std::cout << " first gear with final " << torque * firstgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * .85 << " pound force \n";
	std::cout << " second gear with final " << secondgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque *.85 << " pound force \n";
	std::cout << " third gear with final " << thirdgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque *.85 << " pound force \n";
	std::cout << " fourth gear with final " << fourthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque *.85 << " pound force \n";
	std::cout << " fifth gear with final " << fifthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque * .85 << " pound force \n";
	std::cout << " sixth gear with final " << sixthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque *.85 << " pound force \n";
	std::cout << "\n";

}


void torquecal::acceleration()
{
	std::cout << " \n";
	std::cout << " first gear with final " << torque * firstgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) / weight<< " g force \n ";
	std::cout << " second gear with final " << secondgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque / weight << " g force \n ";
	std::cout << " third gear with final " << thirdgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque / weight << " g force \n ";
	std::cout << " fourth gear with final " << fourthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque  / weight<< " g force \n ";
	std::cout << " fifth gear with final " << fifthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque / weight<< " g force \n ";
	std::cout << " sixth gear with final " << sixthgear * finaldrive / (rimdiameter / 2 / 12 + (aspectratio * tirewidth / 25.4 / 12)) * torque / weight << " g force \n ";
	std::cout << "\n";





}