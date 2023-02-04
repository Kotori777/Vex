#include "vex.h"
#include <string.h>

int chassis::get_voltage(){
  return PowerVoltage;
}

int chassis::change_voltage(int nVolt){
  if (nVolt <=100 ){
    *pPowerVoltage = nVolt;
    return 0;
  }
  if (nVolt >= -100){
    *pPowerVoltage = nVolt;
    return 0;
  }
  
  return -1;
}

/*
maybe have different error codes for different problems??


*/