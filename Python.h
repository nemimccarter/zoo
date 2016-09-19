/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/

#ifndef _PYTHON_H_
#define _PYTHON_H_

#include "Reptile.h"

class Python : public Reptile
{
  double _length; //length is given in feet

public:
  Python ( );
  Python ( const char* );
  Python ( const char* n, const GenderType& gt,
         double fc, double lf, double length);

  Python ( const Python& );

  ~Python ( );

  Python& operator= ( const Python& );

  double Length ()const;
  void Length (double);
  bool LengthInRange()const;
  void Display()const;
  void CageMaintenance()const;
};
#endif
