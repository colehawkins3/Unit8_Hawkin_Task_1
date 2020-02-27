//Stephen Hawkins - 2/26/20
//Program to practice passing a struct by pointer (*)
#include <iostream>
#include <string>
using namespace std;
//Declaration of struct
struct car
{
  string Make;
  string Model;
  int Year;
  string Color;
};//don't forget this semicolon

//function Definition Declaration
void printCar(car *c)
{
  cout << "\nCar details: " <<endl;
  cout << "Make - " << car->Make <<endl;
  cout << "Model - " << car->Model <<endl;
  cout << "Year - " << car->Year <<endl;
}
int main()
{
//declare an instance of the struct
  car car1;
  car1.Make = "Hyundai";
  car1.Model = "Genesis";
  car1.Year = 2016;

  car car2 = {"GMC","Yukon", 1975};

  car car3 ={"Toyota", "Avalon", 2003};
  

  return 0;
}