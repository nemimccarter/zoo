/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/
#include "Mammal.h"

#ifndef _SKUNK_H_
#define _SKUNK_H_

class Skunk : public Mammal
{
  bool _descented;

public:
  Skunk ( );
  Skunk ( const char* );
  Skunk ( const char* n, const GenderType& gt,
         double fc, double lf, bool descented );

  Skunk ( const Skunk& );

  ~Skunk ( );

  Skunk& operator= ( const Skunk& );

  bool tempInRange()const;
  bool Descented()const;
  void Descented(bool);

  void Display()const;
  void CageMaintenance()const;


};
#endif
