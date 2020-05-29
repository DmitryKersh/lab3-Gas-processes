#ifndef LAB3_GAS_ISOBARPROCESS_H
#define LAB3_GAS_ISOBARPROCESS_H
#include "AbstractProcess.h"

class IsoBarProcess : public AbstractProcess{
public:
  IsoBarProcess(double sv, double ev, double sp) : AbstractProcess(sv, ev, sp, sp){} //pressure = const
protected:
  void Print() override;
  double CountWork() override;
};

#endif // LAB3_GAS_ISOBARPROCESS_H
