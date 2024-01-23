#include <iostream>
#include <fstream>
#include <cmath>

// Paramètres de la sphère
const double radius = 1.0; // Rayon de la sphère
const int numPoints = 100; // Nombre de points à générer

int main() {
    std::ofstream file("sphere_points.txt");

    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
        return 1;
    }

    for (int i = 0; i < numPoints; ++i) {
        // Générer des points aléatoires sur la sphère
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
