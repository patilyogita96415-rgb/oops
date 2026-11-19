#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    int speed;

public:
    Car(const std::string& carBrand) : brand(carBrand), speed(0) {}

    void accelerate(int amount) {
        if (amount > 0) {
            speed += amount;
        }
    }

    void display() const {
        std::cout << brand << " is moving at " << speed << " km/h.\n";
    }
};

int main() {
    Car myCar("Toyota");

    myCar.display();
    myCar.accelerate(30);
    myCar.display();

    return 0;
}