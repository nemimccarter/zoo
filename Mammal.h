/*
Nehemya McCarter-Ribakoff
November 9th 2015
*/

#include <iostream>
#include "Animal.h"
using namespace std;

#ifndef _MAMMAL_H_
#define _MAMMAL_H_

class Mammal : public Animal
{
public:
  double _temp;
  Mammal ( );
  Mammal ( const char* );
  Mammal ( const char* n, const GenderType& gt,
         double fc, double lf, const DietType& dt,
         const FeedType& ft, double temp);
  Mammal ( const Mammal& );
  ~Mammal ( );

  Mammal& operator= ( const Mammal& );

  void Display()const;

  void updateTemp(const double);
  virtual bool tempInRange() const = 0;

  void CageMaintenance()const
  {
    cout << "MAMMAL";
    cout << "shovel poop out of the cage"<<endl;
  }
};
#endif
