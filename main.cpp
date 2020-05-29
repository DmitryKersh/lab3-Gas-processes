#include <iostream>
#include <vector>
#include "IsoBarProcess.h"
#include "IsoChorPocess.h"

using std::cin;

int main() {
  int quantity;
  cin >> quantity;
  double sv,ev,sp,ep;

  std::vector<AbstractProcess*> processes(quantity);

  for (size_t i = 0; i < quantity; i++){
    cin >> sv >> ev >> sp >> ep;
    if (i % 2)
      processes[i] = new IsoBarProcess(sv, ev, sp);
    else
      processes[i] = new IsoChorPocess(sv, sp, ep);
  }

  for (AbstractProcess* p : processes)
    p->Print();

  return 0;
}