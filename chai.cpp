// updated version
#include <iostream>
using namespace std;

// Function to make chai
void makeChai(int sugar, int milk) {
    cout << "\n--- Chai Ban Rahi Hai ---\n";
    cout << "Pan me pani daalo" << endl;
    cout << "Chai patti add karo" << endl;
    cout << "Sugar: " << sugar << " chamach add karo" << endl;
    cout << "Ubhalne do..." << endl;
    cout << "Milk: " << milk << " ml add karo" << endl;
    cout << "Dobara ubhalne do..." << endl;
    cout << "Chai ready ☕" << endl;
}

int main() {
    int sugar, milk;

    cout << "Kitni cheeni (chamach)? ";
    cin >> sugar;

    cout << "Kitna doodh (ml)? ";
    cin >> milk;

    // Function call
    makeChai(sugar, milk);

    return 0;
}
