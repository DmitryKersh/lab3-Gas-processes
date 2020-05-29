#include "AbstractProcess.h"
#ifndef LAB3_GAS_ISOCHORPOCESS_H
#define LAB3_GAS_ISOCHORPOCESS_H

class IsoChorPocess : public AbstractProcess{
public:
  IsoChorPocess(double sv, double sp, double ep) : AbstractProcess(sv, sv, sp, ep){} //volume = const
protected:
  void Print() override;
  double CountWork() override;
};

#endif // LAB3_GAS_ISOCHORPOCESS_H
