#ifndef _CHASSIS_H
#define _CHASSIS_H

class chassis { 
  public:
    chassis();
    ~chassis();

    int drive_train ( void);
    int flywheel ( void );
    int Loader ( void );
    int get_voltage( void );
    int change_voltage( int nVolt);

  private:
    int PowerVoltage = 0;
    int * const pPowerVoltage = &PowerVoltage;
    
};

#endif