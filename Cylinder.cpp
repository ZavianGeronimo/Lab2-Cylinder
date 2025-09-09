#include <iostream> 

using namespace std;

double calculateVolume(double radius, double height) {
return 3.14159 * radius * radius * height;

}
double calculateSurfaceArea(double radius, double height) {
   return 2 * 3.14159 *radius * (radius + height);
}

int main() {
    double radius = 5.0;
    double height = 10.0;

    double volume = calculateVolume(radius, height);
    double surfaceArea = calculateSurfaceArea(radius,height);
    cout << "Cylinder Details:" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << volume << endl;
    cout << "Surface Area: " << surfaceArea << endl;

    return 0;
}
