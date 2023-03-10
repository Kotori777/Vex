#include "vex.h"

vex::brain Brain;

//defining stuff for use
vex::motor RightWheel = vex::motor(vex::PORT1, vex::ratio6_1, false);
vex::motor LeftWheel = vex::motor(vex::PORT2, vex::ratio6_1, false);
vex::motor Loader1 = vex::motor(vex::PORT3, vex::ratio6_1, false);
vex::motor Loader2 = vex::motor(vex::PORT5, vex::ratio6_1, false);
vex::motor Loader3 = vex::motor(vex::PORT7, vex::ratio6_1, false);

//might need to change gear ratio in future, sdepends on test results on flywheel
vex::motor FlyWheel = vex::motor(vex::PORT4, vex::ratio6_1, false);

//main controller
vex::controller Controller1 (vex::primary);

void vexcodeInit( void ) {
  
}