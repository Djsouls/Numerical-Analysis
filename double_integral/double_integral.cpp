#include <iostream>
#include <vector>

double f(std::vector<double>);

int main()
{
	float a, b, c, d;
	double delta_x, delta_y, volume = 0;
	int m, n;
	
	std::cout << "Choose the first range [a, b]\n";
	std::cin >> a;
	std::cin >> b;
	
	std::cout << "Choose the second range [c, d]\n";
	std::cin >> c;
	std::cin >> d;
	
	std::cout << "Choose the number of m partitions\n";
	std::cin >> m;
	
	std::cout << "Choose the number of n partitions\n";
	std::cin >> n;
	
	delta_x = (b - a) / m;
	delta_y = (d - c) / n;
	
	std::vector<double> middle_point = {0,0};
	
	for(double x = a; x < b; x += delta_x) {
		for(double y = c; y < d; y += delta_y) {
			middle_point[0] = x + delta_x / 2;
			middle_point[1] = y + delta_y / 2;
			
			volume += f(middle_point) * delta_x * delta_y;
		}
	}
	
	std::cout << "approximate volume = " << volume << "\n";
}

/*Insert your function of preference in the return value of the function*/
double f(std::vector<double> point)
{
	/* 2xy + y */
	return 2 * point[0] * point[1] + point[1];
}