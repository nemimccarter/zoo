/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/

#include "Skunk.h"

Skunk::Skunk ( )
:Mammal()
{
  _descented = false;
}
Skunk::Skunk ( const char* name )
:Mammal(name)
{
  _descented = false;
}

Skunk::Skunk ( const char* n, const GenderType& gt,
               double fc, double lf, bool descented)
:Mammal(n,gt,fc,lf,Carnivore,RawMeat,false)
{
  _descented = descented;
}

Skunk::Skunk ( const Skunk& b)
:Mammal(b)
{
  _descented = b._descented;
}

Skunk::~Skunk ( ) { }

Skunk& Skunk::operator= ( const Skunk& b)
{
  Mammal::operator=(b);
  _descented = b._descented;
  return *this;
}

bool Skunk::Descented ( ) const
{
  return _descented;
}
void Skunk::Descented ( bool descented )
{
  _descented = descented;
}

void Skunk::Display()const
{
  Mammal::Display();
  cout << "De-scented: " << _descented << endl;
}

bool Skunk::tempInRange()const
{
  return (_temp >= 95 && _temp <= 97);
}

void Skunk::CageMaintenance()const
{
  cout << "1- Catch the Skunk" << endl
       << "2- Put the Skunk in the back room" << endl
       << "3- Shovel guano out of the cage" << endl
       << "4- Question if you want a skunk in the zoo" << endl
       << "5- Act upon your decision. Choose wisely." << endl;
}

