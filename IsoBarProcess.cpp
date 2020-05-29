//
// Created by User on 29.05.2020.
//

#include "IsoBarProcess.h"

void IsoBarProcess::Print() {
  cout << "Start Volume: " << start_vol << endl
       << "End Volume: " << end_vol << endl
       << "Pressure = const = " << start_pres << endl
       << "WORK = " << CountWork() << endl;
}
double IsoBarProcess::CountWork() {
  return (end_vol - start_vol) * start_pres;
}
