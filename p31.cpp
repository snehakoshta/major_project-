#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a struct to represent a food item
struct FoodItem {
    string name;
    double price;
};

// Define a struct to represent an order
struct OrderItem {
    string name;
    double price;
};


// Function to display the menu
void displayMenu(const vector<FoodItem>& menu) {
    cout << "Menu:\n";
    for (const auto& item : menu) {
        cout << item.name << " - $" << item.price << endl;
    }
}

// Function to place an order
void placeOrder(const vector<FoodItem>& menu, vector<OrderItem>& order) {
    int choice;
    int item;
    cout << "Enter the number corresponding to the item you want to order (-1 to finish): ";
    cin >> choice;
    
    
    
    while (choice != -1) {
        if (choice < 0 || choice >= menu.size()) {
            cout << "Invalid choice. Please try again.\n";
        } else {
            order.push_back({menu[choice].name, menu[choice].price ,menu[choice].quantity});
            cout << menu[choice].name << " added to order.\n";
        }
        
        cout << "Enter the number corresponding to the item you want to order (-1 to finish): ";
        cin >> choice;
    }
}

// Function to display the order
void displayOrder(const vector<OrderItem>& order) {
    cout << "\nYour Order:\n";
    double total = 0.0;
    for (const auto& item : order) {
        cout << item.name << " - $" << item.price << endl;
        total += item.price;
    }
    cout << "Total: $" << total << endl;
}

int main() {
    // Define the menu
    vector<FoodItem> menu = {
        {"Pizza", 10.99},
        {"Burger", 5.99},
        {"Fries", 2.99},
        {"Salad", 4.99}
    };
    
    vector<OrderItem> order;
    
    // Display menu and place order
    displayMenu(menu);
    placeOrder(menu, order);
    
    // Display the order
    displayOrder(order);
    
    return 0;
}
