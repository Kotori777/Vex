#include "vex.h"

/* 
*THIS MAY NEED TO BE CHANGED IF WE NEED MORE POWER, IT WOULD BE BETTER TO USE
*VOLTAGE INSTEAD THAT WAY WE CAN CONTROL THE AMOUNT OF POWER GOING INTO THE MOTOR
*THUS CONTROLLING THE SPEED AND HEAT OF THE MOTOR 
*/


void flywheel_shoot( void ){

  //checking to see if you're holding the correct buttons
  if (!Controller1.ButtonR1.pressing()){
    FlyWheel.setVelocity(0, vex::percent);
    return;
  }
  if (!Controller1.ButtonL1.pressing()){
    FlyWheel.setVelocity(0, vex::percent);
    return;
  }

  //turns flywheel on
  FlyWheel.spin(vex::forward, 100, vex::percent);

}
