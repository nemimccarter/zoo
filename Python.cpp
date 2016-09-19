/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/

#include "Python.h"
#include <iostream>
using namespace std;

Python::Python ( )
:Reptile()
{
  _length = 0;
}
Python::Python ( const char* name )
:Reptile(name)
{
 _length = 0; 
}

Python::Python ( const char* n, const GenderType& gt,
               double fc, double lf, double length)
:Reptile(n,gt,fc,lf,Carnivore,LiveMice,Land)
{
 _length = length; 
}

Python::Python ( const Python& b)
:Reptile(b)
{
  _length = b._length;
}

Python::~Python ( ) { }

Python& Python::operator= ( const Python& b)
{
  Reptile::operator=(b);
  _length = b._length;
  return *this;
}

double Python::Length() const
{
  return _length;
}

void Python::Length(double l)
{
  _length = l;
}

bool Python::LengthInRange()const
{
  return (_length >= 15 && _length <= 23);
}

void Python::Display()const
{
  Reptile::Display();
  cout << "Length (ft): " << _length << endl;
}

void Python::CageMaintenance()const
{
  cout << "1- Catch the Python" << endl
       << "2- Put the Python in the back room" << endl
       << "3- Scoop poop out of the cage" << endl
       << "4- Release the Python" << endl;
}
