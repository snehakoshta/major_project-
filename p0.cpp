#include <iostream>
using namespace std;

class PetrolStation {
private:
    float pricePerLiter;

public:
    PetrolStation(float price) {
        pricePerLiter = price;
    }

    float calculateCost(float liters) {
        return pricePerLiter * liters;
    }
};

int main() {
    float pricePerLiter;
    cout << "Enter the price per liter: ";
    cin >> pricePerLiter;

    PetrolStation station(pricePerLiter);

    float litersToBuy;
    cout << "Enter the amount of petrol to buy (in liters): ";
    cin >> litersToBuy;

    float totalCost = station.calculateCost(litersToBuy);
    cout << "Total cost: $" << totalCost << endl;

    return 0;
}
