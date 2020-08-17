// Unit Converter (temp, currency, volume, mass and more) - Converts various
//units between one another. The user enters the type of unit being entered,
// the type of unit they want to convert to and then the value.
// The program will then make the conversion

#include <iostream>

void Length(){
  ;
}

int main(){
  std::cout << "Available Categories: Length, Temperature, Currency: ";

  std::string category = "";
  std::cin >> category;
  std::cout << category << "\n";

  if (category == "Length"){
    Length();

    }
  }
