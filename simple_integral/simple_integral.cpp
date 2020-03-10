#include <iostream>
#include <cmath>

double f(double);

int main()
{
	float a, b;
	double delta_x, area = 0;
	int m;
	
	std::cout << "Choose a range [a, b]\n";
	std::cin >> a;
	std::cin >> b;
	
	std::cout << "Choose a m partition number\n";
	std::cin >> m;
	
	delta_x = (b - a) / m;
	
	double middle_point;
	
	for(double x = a; x < b; x += delta_x) {
		middle_point = x + delta_x / 2;
		
		area += f(middle_point) * delta_x;
	}
	
	std::cout << "approximate area = " << area << "\n";
}

double f(double x)
{
	/* x² */
	return x * x;
}