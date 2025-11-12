#include <iomanip> 
#include <sstream>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

// initialize structs
struct plant{
    std::string name;
    int ageInDays = 0;
    bool watered = 0;
};

int main() {
    
    
    int choice = 0;
    int nameChoice = 0;
    bool exit = false;
    
    // make plant structs
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
    
    // testing with io file things
    ofstream myfile;
    myfile.open("plantList.txt");
    myfile << dandelion.name;
    myfile.close();
    // io file testing end

    do {
        // print menu
        std::cout << "Hello, welcome to your plants, please select one of the following options:" << endl;
        std::cout << "1) View plants list" << endl;
        std::cout << "2) Print out struct code" << endl;
        std::cout << "3) Exit" << endl;
        std::cout << "Enter Choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1: // view plants list
                std::cout << "Please enter which plant you would like to view data of: " << endl;
                std::cout << "1) " + dandelion.name + "\n" + "2) " + orchid.name + "\n" + "3) " + monstera.name << endl;
                std::cout << "4) Exit" << endl;
                cin >> nameChoice;
                switch (nameChoice) {
                    case 1:
                        std::cout << "Dandelion age: ";
                        cout << dandelion.ageInDays << endl;
                        if (dandelion.watered == 1) {
                            cout << "Dandelion has been watered today!" << endl;
                        } else {
                            cout << "Dandelion has not been watered today:(" << endl;
                        }
                        break;
                    case 2:
                        std::cout << "Orchid age: ";
                        cout << orchid.ageInDays << endl; 
                        if (orchid.watered == 1) {
                            cout << "Orchid has been watered today!" << endl;
                        } else {
                            cout << "Orchid has not been watered today:(" << endl;
                        }
                        break;
                    case 3:
                       std::cout << "Monstera age: ";
                        cout << monstera.ageInDays << endl; 
                        if (monstera.watered == 1) {
                            cout << "Monstera has been watered today!" << endl;
                        } else {
                            cout << "Monstera has not been watered today:(" << endl;
                        }
                        break;
                }
                break;
            case 2:
                std::cout << "print struct code here" << endl;
                break;

            case 3: // exit
                std::cout << "Goodbye! Thank you for checking in on the plants:)" << endl;
                exit = true;
                break;
        }
    } while (!exit);

    
    return 0;
}
