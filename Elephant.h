/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/
#include "Mammal.h"

#ifndef _ELEPHANT_H_
#define _ELEPHANT_H_

class Elephant : public Mammal
{
  double _weight;

public:
  Elephant ( );
  Elephant ( const char* );
  Elephant ( const char* n, const GenderType& gt,
            double fc, double lf, double wt);

  Elephant ( const Elephant& );

  ~Elephant ( );

  Elephant& operator= ( const Elephant& );

  double Weight ( ) const;
  void Weight ( double );

  void Display()const;
  void CageMaintenance()const;
  
  virtual bool tempInRange() const;
  bool weightInRange()const;
};
#endif
