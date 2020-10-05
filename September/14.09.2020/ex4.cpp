#include <iostream>
#include "myConstants.h"

double getStartPoint()
{
	std::cout << "Enter the initial height of the tower in meters: ";
	double startPoint;
	std::cin >> startPoint;
	return startPoint;
}

double calculatePosition(double startPoint, int time)
{
	double delta = constants::gravity * time * time / 2;

	return startPoint - delta;

}

void printPosition(double position, int time)
{
	if (position >= 0.0)
	{
		std::cout << "At " << time << " seconds, the ball at the height: " << position << std::endl;
	}
	else
	{
		std::cout << "At " << time << " seconds, the ball at the ground." << std::endl;
	}
}
void calculateAndPrintPosition(double startPoint, int time)
{
	double position = calculatePosition(startPoint, time);

	printPosition(position, time);
}

void ex4()
{
	const double startPoint =  getStartPoint();

	calculateAndPrintPosition(startPoint, 0);
	calculateAndPrintPosition(startPoint, 1);
	calculateAndPrintPosition(startPoint, 2);
	calculateAndPrintPosition(startPoint, 3);
	calculateAndPrintPosition(startPoint, 4);
	calculateAndPrintPosition(startPoint, 5);
}