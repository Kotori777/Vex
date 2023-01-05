#include "vex.h"

void loader_work ( void ){

    // pretty much copy and pasted from flywheel code
    if (!Controller1.ButtonR1.pressing()){
        FlyWheel.setVelocity(0, vex::percent);
        return;
    }
    if (!Controller1.ButtonL2.pressing()){
        FlyWheel.setVelocity(0, vex::percent);
        return;
    }

    Loader.spin(vex::forward, 100, vex::percent); 
}