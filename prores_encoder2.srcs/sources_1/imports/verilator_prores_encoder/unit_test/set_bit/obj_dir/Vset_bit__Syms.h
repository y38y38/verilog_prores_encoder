// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vset_bit__Syms_H_
#define _Vset_bit__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vset_bit.h"

// SYMS CLASS
class Vset_bit__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vset_bit*                      TOPp;
    
    // CREATORS
    Vset_bit__Syms(Vset_bit* topp, const char* namep);
    ~Vset_bit__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
