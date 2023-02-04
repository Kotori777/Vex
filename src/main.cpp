#include "vex.h"

vex::competition Competition;

int main() {
  // check robot config.cpp
  vexcodeInit();

  // check driver controll.cpp
  Competition.drivercontrol();

  // for when I get around to creating auto code
  // Competition.autonomous( );
  

  return 0;
}


//testing shit
