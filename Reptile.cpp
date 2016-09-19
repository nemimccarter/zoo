/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/

#include "Reptile.h"

Reptile::Reptile ( )
:Animal()
{
  _et = Land;  
}
Reptile::Reptile ( const char* name )
:Animal(name)
{
  _et = Land;
}
Reptile::Reptile ( const char* n, const GenderType& gt,
             double fc, double lf, const DietType& dt,
             const FeedType& ft, const EnvironmentType& et)
:Animal(n,gt,fc,lf,dt,ft)
{
  _et = et;
}
Reptile::Reptile ( const Reptile& b )
:Animal(b)
{
 _et = b._et;
}

Reptile::~Reptile ( ) { }

Reptile& Reptile::operator= ( const Reptile& b)
{
  Animal::operator=(b);
  _et = b._et;
  return *this;
}

EnvironmentType Reptile:: dispET ( ) const
{
  return _et;
}

void Reptile::newET (EnvironmentType et)
{
  _et = et;
}
void Reptile::Display()const
{
  Animal::Display();
  cout << "Environment Type: " << _et << endl;
}
