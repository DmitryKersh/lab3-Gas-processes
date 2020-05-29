#ifndef LAB3_GAS_ABSTRACTPROCESS_H
#define LAB3_GAS_ABSTRACTPROCESS_H

#include <iostream>

using std::cout;
using std::endl;

class AbstractProcess {
protected:
  double start_vol;
  double end_vol;
  double start_pres;
  double end_pres;

public:
  AbstractProcess();
  AbstractProcess(double sv, double ev, double sp, double ep);
  virtual void Print();
  virtual double CountWork();
};

#endif // LAB3_GAS_ABSTRACTPROCESS_H
