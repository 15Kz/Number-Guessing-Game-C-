#include <iostream>
#include <random>
using namespace std;

int main() {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 10);
    int random = dist(gen);
    int user;

    do {
    
    cout << "Enter (1-10;): ";
    cin >> user;
    if (user > random) {
        cout << "Try guessing lower. " << endl;
    }
    else if (user < random) {
        cout << "Try guessing higher. " << endl;
    }
    else {
        cout << "Congratulations you guessed it right! The number was " << random;
    }

    } while (user != random);

}
