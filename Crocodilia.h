/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/
#ifndef _CROCODILIA_H_
#define _CROCODILIA_H_

#include "Reptile.h"

enum CrocType {CrocTypeUnknown, Crocodile, Alligator, Caiman, Gharial};

class Crocodilia : public Reptile
{
public:
  CrocType _crocType;
  Crocodilia ( );
  Crocodilia ( const char* );
  Crocodilia ( const char* n, const GenderType& gt,
               double fc, double lf, const CrocType& ct);

  Crocodilia ( const Crocodilia& );

  ~Crocodilia ( );

  Crocodilia& operator= ( const Crocodilia& );

  CrocType dispCT()const;
  void newCT( CrocType );

  void Display()const;
  void CageMaintenance()const;


};
#endif
