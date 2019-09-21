// Name: Timothy Lee
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main ()
{
  //Create variables for various inputs
  std::string location;
  int days;
  float hotel_expense;
  float meal_expense;
  float total_expense;
  std::string hotel_expense_string;
  std::string meal_expense_string;
  std::string total_expense_string;

  //Display the welcome statement.
  std::cout << "Welcome to the Business Trip Tracker!\n";

  //Blank line to separate lines.
  std::cout << std::endl;

  //Ask for location and allow spaces in input.
  std::cout << "What is the business trip location? ";
  getline(std::cin, location);

  //Ask for number of days
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  //Ask for hotel expense and convert to string with $.
  std::cout << "What is the total hotel expense? $";
  std::cin >> hotel_expense;
  hotel_expense_string = std::to_string(hotel_expense);
  hotel_expense_string = "$" + hotel_expense_string.substr(0, hotel_expense_string.find('.') + 3);


  //Ask for meal expense and convert to string with $.
  std::cout << "What is the total meal expense? $";
  std::cin >> meal_expense;
  meal_expense_string = std::to_string(meal_expense);
  meal_expense_string = "$" + meal_expense_string.substr(0, meal_expense_string.find('.') + 3);


  //Calculate total expense and convert to string with $.
  total_expense = hotel_expense + meal_expense;
  total_expense_string = std::to_string(total_expense);
  total_expense_string = "$" + total_expense_string.substr(0, total_expense_string.find('.') + 3);


  //Blank line to separate lines.
  std::cout << std::endl;

  //Display all the inputs into a table.
  std::cout << std::left << std::setw(20) << "Location"
    << std::right << std::setw(10) << "Days"
    << std::setw(10) << "Hotel"
    << std::setw(10) << "Meal"
    << std::setw(10) << "Total" << std::endl;

  //In location string, only show 20 characters including spaces.
  std::cout << std::left << std::setw(20) << location.substr(0,19)
    << std::right << std::setw(10) << days
    << std::setw(10) << hotel_expense_string
    << std::setw(10) << meal_expense_string
    << std::setw(10) << total_expense_string << std::endl;

  return 0;
}
