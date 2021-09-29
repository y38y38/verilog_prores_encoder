// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vset_bit_H_
#define _Vset_bit_H_

#include "verilated.h"

class Vset_bit__Syms;

//----------

VL_MODULE(Vset_bit) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(flush_bit,0,0);
    VL_OUT8(output_enable_byte,3,0);
    VL_OUT8(tmp_bit,7,0);
    VL_IN64(val,63,0);
    VL_IN64(size_of_bit,63,0);
    VL_OUT64(output_val,63,0);
    VL_OUT64(tmp_buf_bit_offset,63,0);
    VL_OUT64(tmp_byte,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG8(__Vclklast__TOP__reset_n,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vset_bit__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vset_bit& operator= (const Vset_bit&);  ///< Copying not allowed
    Vset_bit(const Vset_bit&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vset_bit(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vset_bit();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vset_bit__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vset_bit__Syms* symsp, bool first);
  private:
    static QData _change_request(Vset_bit__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(Vset_bit__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vset_bit__Syms* __restrict vlSymsp);
    static void _eval_settle(Vset_bit__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vset_bit__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
