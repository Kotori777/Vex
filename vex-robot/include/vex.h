#ifndef _VEX_H
#define _VEX_H

//not vex files
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//vex stuff
#include "v5.h"
#include "v5_vcs.h"

//robot stuff
#include "robot-config-h.h"
#include "driver-control-h.h"
#include "flywheel-h.h"
#include "loader-h.h"


#define waitUntil(condition) \
  do { \
    wait(5, msec); \
  } while (!(condition))

#define repeat(iterations) for (int iterator = 0; iterator < iterations; iterator++)

#endif