//using this file to declare global variables, classes and functions

#ifndef _ROBOT_CONFIG_H
#define _ROBOT_CONFIG_H

//global brain
extern  vex::brain Brain;

//global variables for motors for use in other source files
extern  vex::motor LeftWheel;
extern  vex::motor RightWheel;
extern  vex::motor FlyWheel;
extern  vex::motor Loader; 



extern vex::controller Controller1;

void  vexcodeInit( void );

#endif