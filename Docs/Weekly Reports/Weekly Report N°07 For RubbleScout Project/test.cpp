#include <iostream>
#include <fstream>
#include <cmath>

const double radius = 100;
const int numPoints = 10000;

int main() {
    std::ofstream file("sphere_points.txt");

    if (!file.is_open()) {
        std::cerr << "Could not open file." << std::endl;
        return 1;
    }

    for (int i = 0; i < numPoints; ++i) {

        double phi = acos(1 - 2 * double(rand()) / RAND_MAX);
        double theta = 2 * M_PI * double(rand()) / RAND_MAX;

        double x = radius * sin(phi) * cos(theta);
        double y = radius * sin(phi) * sin(theta);
        double z = radius * cos(phi);

        file << x << ", " << y << ", " << z << std::endl;
    }

    file.close();
    return 0;
}
