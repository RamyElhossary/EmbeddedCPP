/**
 * Project Untitled
 */


#ifndef _IDRIVINGMODE_H
#define _IDRIVINGMODE_H

class IDrivingMode {
public: 
    virtual void accelerate() = 0;
    
    virtual void brake() = 0;
};

#endif //_IDRIVINGMODE_H