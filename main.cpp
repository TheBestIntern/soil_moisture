#include <vector>
#include <iomanip> 
#include <sstream>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;


struct plant{
    std::string name;
    int ageInDays = 0;
    bool watered = 0;
};

int main() {
    
    int choice = 0;
    int nameChoice = 0;
    bool exit = false;

    plant dandelion;
    dandelion.name = "dandelion";
    dandelion.ageInDays = 27;
    dandelion.watered = true;
    plant orchid;
    orchid.name = "orchid";
    orchid.ageInDays = 50;
    orchid.watered = false;
    plant monstera;
    monstera.name = "monstera";
    monstera.ageInDays = 87    ;
    monstera.watered = false;

    do {
        std::cout << "Hello, welcome to planty plants, please select one of the following options:" << endl;
        std::cout << "1) View plants list" << endl;
        std::cout << "2) Print out struct code" << endl;
        std::cout << "3) Exit" << endl;
        std::cout << "Enter Choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1: // view plants list
                cout << "Please enter which plant you would like to view data of: ";
                cout << "1) " + dandelion.name + "\n" + "2) " + orchid.name + "\n" + "3) " + monstera.name << endl;
                cout << "4) Exit";
                cin >> nameChoice;
                switch (nameChoice) {
                    case 1:
                        cout << "dandelion age: " + dandelion.ageInDays << endl;
                        cout << "watered? " + dandelion.watered << endl;
                        break;
                    case 2:
                        cout << "orchid age: " + orchid.ageInDays << endl;
                        cout << "watered? " + orchid.watered << endl;
                        break;
                    case 3:
                        cout << "monstera age: " + monstera.ageInDays << endl;
                        cout << "watered? " + monstera.watered << endl;
                        break;
                }
            case 2:
                cout << "print struct code here" << endl;
                break;

            case 3: // exit
                cout << "Goodbye! Thank you for checking in on the plants:)" << endl;
                exit = true;
                break;
        }
    } while (!exit);

    return 0;
}
