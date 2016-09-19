/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/

#include "Elephant.h"

Elephant::Elephant ( )
:Mammal()
{
  _weight = 0;
}
Elephant::Elephant ( const char* name )
:Mammal(name)
{
  _weight = 0;
}

Elephant::Elephant ( const char* n, const GenderType& gt,
                     double fc, double lf, double wt)
:Mammal(n,gt,fc,lf,Herbivore,Hay,wt)
{
  _weight = wt;
}

Elephant::Elephant ( const Elephant& b)
:Mammal(b)
{
  _weight = b._weight;
}

Elephant::~Elephant ( ) { }

double Elephant::Weight ( ) const
{
  return _weight;
}

void Elephant::Weight (double wt)
{
  _weight = wt;
}

Elephant& Elephant::operator= ( const Elephant& b)
{
  Animal::operator=(b);
  _weight = b._weight;
  return *this;
}

void Elephant::Display()const
{
  Mammal::Display();
  cout << "Weight: " << _weight << endl;
}

void Elephant::CageMaintenance()const
{
  cout << "Shovel poop out of the cage\n";
}

bool Elephant::tempInRange()const
{
  return (_temp >= 97 && _temp <= 98);
}

bool Elephant::weightInRange()const
{
  return (_weight <= 12000 && _weight >= 15000);
}
