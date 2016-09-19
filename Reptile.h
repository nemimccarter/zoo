/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/
#include "Animal.h"

#ifndef _REPTILE_H_
#define _REPTILE_H_

enum EnvironmentType {Water, Land};

class Reptile : public Animal
{
public:
  EnvironmentType  _et;
  Reptile ( );
  Reptile ( const char* );
  Reptile ( const char* n, const GenderType& gt,
         double fc, double lf, const DietType& dt,
         const FeedType& ft, const EnvironmentType& et);
  Reptile ( const Reptile& );

  ~Reptile ( );

  Reptile& operator= ( const Reptile& );

  EnvironmentType dispET( ) const;
  void newET ( EnvironmentType );
  void Display()const;
  void CageMaintenance()const
  {
    cout << "REPTILE"
         << "1- Remove the reptile" << endl
         << "2- clean the poop out of the cage" << endl
         << "3- release the reptile" << endl;
  };

};
#endif
