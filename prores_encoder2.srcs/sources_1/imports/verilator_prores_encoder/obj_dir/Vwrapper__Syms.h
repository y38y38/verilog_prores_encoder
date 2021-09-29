// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vwrapper__Syms_H_
#define _Vwrapper__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vwrapper.h"
#include "Vwrapper___024unit.h"

// SYMS CLASS
class Vwrapper__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vwrapper*                      TOPp;
    
    // CREATORS
    Vwrapper__Syms(Vwrapper* topp, const char* namep);
    ~Vwrapper__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
