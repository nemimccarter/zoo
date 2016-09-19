/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/

#include "Zoo.h"

Zoo::Zoo()
{
  _zoo[] = 0;  
}

Zoo:~Zoo()
{
  
}
void Zoo::main_menu() const
{
  cout << "Please choose an option\n"
       << "1. Place a new animal into the Zoo if there is room.\n"
       << "2. Feed the animals.\n"
       << "3. Do cage maintenance for the Zoo.\n"
       << "4. Display all of the animals in the Zoo\n"
       << "5. Exit the simulation.\n";  
}

unsigned Zoo::Selection()
{
  main_menu();
  cin >> sel;
  while (sel > 5 || sel == 0)
  {
    cout << "you entered " << sel << endl
         << "please enter a number from an option on the menu.\n";
    main_menu();
  }
  switch(sel)
  {
    case(1) :
      NewAnimal();
      break;
    case(2) :
      FeedAnimals();
      break;
    case(3) :
      DoMaintenance();
      break;
    case(4) :
      Display();
      break;
    case(5) :
      cout << "Exiting simulation....\n"
      return 0;
  }
}

void Zoo::NewAnimal()
{
  cout << "New Animal\n\n"
       << "What animal would you like to add?\n"
       << "1. Elephant\n"
       << "2. Skunk\n"
       << "3. Crocodilia\n"
       << "4. Python\n";
  cin >> sel;
  cout << "What is the animal's name?\n";
  cin >> name;
  switch(sel)
  {
    case(1) :
      cout << "Adding elephant " << name << "...\n";
      _zoo[_cnt] = new *Elephant;
      _cnt++;
    
    case(2) :
      cout << "Adding skunk " << name << "...\n";

    case(3) :
      cout << "Adding crocodilia " << name << "...\n";

    case(4) :
      cout << "Adding python " << name << "...\n";
  }
}

void Zoo::FeedAnimals()
{

}

void Zoo::DoMaintenance()
{

}

void Zoo::Display() const
{
  if (_cnt == 0)
    cout << "The zoo is empty.\n";
  else
  {
    for (unsigned i = 0; i < _cnt; i++)
      _zoo[i] -> Display();
  }
}

Zoo::Run()
{
Selection();
}
