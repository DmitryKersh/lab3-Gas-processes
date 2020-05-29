#include "AbstractProcess.h"

AbstractProcess::AbstractProcess() {
  start_vol = 0;
  end_vol = 0;
  start_pres = 0;
  end_pres = 0;
}

AbstractProcess::AbstractProcess(double sv, double ev, double sp, double ep){
  start_vol = sv;
  end_vol = ev;
  start_pres = sp;
  end_pres = ep;
}

void AbstractProcess::Print(){
  cout << "Start Volume: " << start_vol << endl
       << "End Volume: " << end_vol << endl
       << "Start Pressure: " << start_pres << endl
       << "End Pressure: " << end_pres << endl
       << "WORK = " << CountWork() << endl;
}
double AbstractProcess::CountWork(){ return  0; }


