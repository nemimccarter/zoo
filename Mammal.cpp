/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/

#include "Mammal.h"

Mammal::Mammal ( )
:Animal()
{
  _temp = 1;
}
Mammal::Mammal ( const char* name )
:Animal(name)
{
  _temp = 1;
}
Mammal::Mammal ( const char* n, const GenderType& gt,
             double fc, double lf, const DietType& dt,
             const FeedType& ft, double temp)
:Animal(n,gt,fc,lf,dt,ft)
{
  _temp = temp;
}
Mammal::Mammal ( const Mammal& b)
:Animal(b)
{
 _temp = b._temp; 
}

Mammal::~Mammal ( ) { }

Mammal& Mammal::operator= ( const Mammal& b)
{
  Animal::operator=(b);
  _temp = b._temp;
  return *this;
}

void Mammal::Display()const
{
  Animal::Display();
  cout << "Body temp: " << _temp << "\n";
  if (tempInRange())
    cout << "Temp is in range\n";
  else
    cout << "Temp is not in range\n"; 
}

void Mammal::updateTemp(const double newTemp)
{
  _temp = newTemp;
}
