#include "IsoChorPocess.h"

void IsoChorPocess::Print() {
cout << "Volume = const = " << start_vol << endl
     << "Start Pressure: " << start_pres << endl
     << "End Pressure: " << end_pres << endl
     << "WORK = " << CountWork() << " as process is IsoChoric " << endl;
}

double IsoChorPocess::CountWork() {
  return 0; //Volume = const => dV = 0 => A = 0
}
