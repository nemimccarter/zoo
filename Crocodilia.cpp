/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/
#include "Crocodilia.h"

Crocodilia::Crocodilia ( )
:Reptile()
{
  _crocType = CrocTypeUnknown;
}
Crocodilia::Crocodilia ( const char* name )
:Reptile(name)
{
  _crocType = CrocTypeUnknown;
}

Crocodilia::Crocodilia ( const char* n, const GenderType& gt,
                         double fc, double lf, const CrocType& ct)
:Reptile(n,gt,fc,lf,Carnivore,RawMeat,Water)
{
  _crocType = ct;
}

Crocodilia::Crocodilia ( const Crocodilia& b)
:Reptile(b)
{
  _crocType = b._crocType;
}

Crocodilia::~Crocodilia ( ) { }

Crocodilia& Crocodilia::operator= ( const Crocodilia& b)
{
  Reptile::operator=(b);
  _crocType = b._crocType;
  return *this;
}

CrocType Crocodilia::dispCT ( ) const
{
  return _crocType;
}
void Crocodilia::newCT ( CrocType ct )
{
  _crocType = ct;
}

void Crocodilia::Display()const
{
  Reptile::Display();
  cout << "Croc Type: " << _crocType << endl;
}

void Crocodilia::CageMaintenance()const
{
  cout << "1- Be careful" << endl
       << "2- Remove the poop" << endl
       << "3- Toss in some raw meat" << endl;
}

