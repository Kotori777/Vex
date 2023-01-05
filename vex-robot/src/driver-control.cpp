#include "vex.h"

// basic driver control function, will add to this file later
void driver_control( void ){
  while( true ){
    
    /*
    *FOR CONTROLLING CHASIS MOVEMENT
    *IS tested, does work
    *It is setup for arcade drive mode: left joystick is forward/backward, right is right/left
    *May in the future add the option to swap between tank and arcade depending on what my team needs
    */

    LeftWheel.spin(vex::forward, (Controller1.Axis1.value() + Controller1.Axis3.value()), vex::percent);
    RightWheel.spin(vex::forward, (Controller1.Axis1.value() - Controller1.Axis3.value()), vex::percent);

    flywheel_shoot();
    
  } 
}
