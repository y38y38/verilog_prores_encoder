// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vwrapper.h for the primary calling header

#ifndef _Vwrapper___024unit_H_
#define _Vwrapper___024unit_H_

#include "verilated.h"

class Vwrapper__Syms;

//----------

VL_MODULE(Vwrapper___024unit) {
  public:
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vwrapper__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vwrapper___024unit& operator= (const Vwrapper___024unit&);  ///< Copying not allowed
    Vwrapper___024unit(const Vwrapper___024unit&);  ///< Copying not allowed
  public:
    Vwrapper___024unit(const char* name="TOP");
    ~Vwrapper___024unit();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vwrapper__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
} VL_ATTR_ALIGNED(128);

#endif // guard
