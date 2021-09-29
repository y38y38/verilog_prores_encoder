// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vwrapper_H_
#define _Vwrapper_H_

#include "verilated.h"

class Vwrapper__Syms;

//----------

VL_MODULE(Vwrapper) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(CLOCK,0,0);
    VL_IN8(RESET,0,0);
    VL_IN8(header_chroma_format,1,0);
    VL_IN8(header_interlace_mode,1,0);
    VL_IN8(header_aspect_ratio_information,3,0);
    VL_IN8(header_frame_rate_code,3,0);
    VL_IN8(header_color_primaries,7,0);
    VL_IN8(header_transfer_characteristic,7,0);
    VL_IN8(header_matrix_coefficients,7,0);
    VL_IN8(header_alpha_channel_type,3,0);
    VL_OUT8(set_bit_output_enable_byte,3,0);
    VL_IN16(header_horizontal,15,0);
    VL_IN16(header_vertical,15,0);
    VL_IN(QSCALE,31,0);
    VL_IN(slice_size_table_slice_num,31,0);
    VL_IN(block_num,31,0);
    VL_OUT(slice_sequencer_offset_addr,31,0);
    VL_OUT(slice_sequencer_val,31,0);
    VL_OUT(slice_sequencer_byte_size,31,0);
    VL_OUT64(set_bit_output_val,63,0);
    VL_IN(INPUT_DATA_MEM[4096],31,0);
    VL_IN(Y_QMAT[8][8],31,0);
    VL_IN(C_QMAT[8][8],31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(wapper__DOT__component_reset_n,0,0);
    VL_SIG8(wapper__DOT__header2_reset_n,0,0);
    VL_SIG8(wapper__DOT__sb_reset,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__header_reset_n,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__matrix_reset_n,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__picture_header_reset_n,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__slice_size_table_reset_n,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__slice_header_reset_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__dc_vlc_reset,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__ac_vlc_reset,0,0);
    VL_SIG8(wapper__DOT__is_y,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__header_output_enable,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__header_flush,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__matrix_output_enable,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__matrix_flush,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__picture_header_output_enable,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__picture_header_flush,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__slice_size_table_output_enable,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__slice_size_table_flush,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__slice_header_output_enable,0,0);
    VL_SIG8(wapper__DOT__header_inst__DOT__slice_header_flush,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__dc_vlc_output_enable,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__dc_output_enable,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__dc_output_flush,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__ac_output_enable,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__ac_vlc_output_flush,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__ac_output_flush,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__ac_vlc_output_enable,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__is_expo_golomb_code,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__is_expo_golomb_code_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__is_expo_golomb_code_n_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__is_add_setbit,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__k,2,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__first_diff,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__first,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__first_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__first_n_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__exp_golomb_code_inst__DOT__is_add_setbit_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__exp_golomb_code_inst__DOT__k_n,2,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__golomb_rice_code_inst__DOT__is_minus_n_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__golomb_rice_code_inst__DOT__is_ac_level_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__golomb_rice_code_inst__DOT__k_n,2,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__is_expo_golomb_code,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__is_expo_golomb_code_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__is_expo_golomb_code_n_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__is_add_setbit,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__k,2,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__first,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__is_minus,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__is_minus_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__exp_golomb_code_inst__DOT__is_add_setbit_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__exp_golomb_code_inst__DOT__k_n,2,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__golomb_rice_code_inst__DOT__is_minus_n_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__golomb_rice_code_inst__DOT__is_ac_level_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__golomb_rice_code_inst__DOT__k_n,2,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__is_expo_golomb_code,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__is_expo_golomb_code_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__is_expo_golomb_code_n_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__is_add_setbit,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__k,2,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__exp_golomb_code_inst__DOT__is_add_setbit_n,1,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__exp_golomb_code_inst__DOT__k_n,2,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__golomb_rice_code_inst__DOT__is_minus_n_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__golomb_rice_code_inst__DOT__is_ac_level_n,0,0);
    VL_SIG8(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__golomb_rice_code_inst__DOT__k_n,2,0);
    VL_SIG8(wapper__DOT__set_bit_inst__DOT__tmp_bit,7,0);
    VL_SIG(wapper__DOT__slice_sequencer_counter,31,0);
    VL_SIG(wapper__DOT__slice_sequencer_offset,31,0);
    VL_SIG(wapper__DOT__slice_sequencer_block_num,31,0);
    VL_SIG(wapper__DOT__set_bit_total_byte_size,31,0);
    VL_SIG(wapper__DOT__slice_size_table_size,31,0);
    VL_SIG(wapper__DOT__slice_size_offset_addr,31,0);
    VL_SIG(wapper__DOT__picture_size_offset_addr,31,0);
    VL_SIG(wapper__DOT__frame_size_offset_addr,31,0);
    VL_SIG(wapper__DOT__y_size_offset_addr,31,0);
    VL_SIG(wapper__DOT__cb_size_offset_addr,31,0);
    VL_SIG(wapper__DOT__sequencer_inst__DOT__picture_size,31,0);
    VL_SIG(wapper__DOT__sequencer_inst__DOT__frame_size,31,0);
    VL_SIG(wapper__DOT__sequencer_inst__DOT__slice_size,31,0);
    VL_SIG(wapper__DOT__sequencer_inst__DOT__slice_size_tmp,31,0);
    VL_SIG(wapper__DOT__sequencer_inst__DOT__y_size,31,0);
    VL_SIG(wapper__DOT__sequencer_inst__DOT__cb_size,31,0);
    VL_SIG(wapper__DOT__header_inst__DOT__header_sequencer_inst__DOT__counter,31,0);
    VL_SIG(wapper__DOT__header_inst__DOT__frame_header_inst__DOT__counter,31,0);
    VL_SIG(wapper__DOT__header_inst__DOT__matrix_inst__DOT__counter,31,0);
    VL_SIG(wapper__DOT__header_inst__DOT__picture_header_inst__DOT__counter,31,0);
    VL_SIG(wapper__DOT__header_inst__DOT__slice_size_table_inst__DOT__counter,31,0);
    VL_SIG(wapper__DOT__header_inst__DOT__slice_header_inst__DOT__counter,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__sequence_counter,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__sequence_counter2,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dc_vlc_counter,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__ac_vlc_counter,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__INPUT_DC_DATA2,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__DC_BITSTREAM_SUM,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__LENGTH,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__INPUT_AC_DATA2,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__AC_BITSTREAM_LEVEL_LENGTH,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__AC_BITSTREAM_LEVEL_SUM,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__AC_BITSTREAM_RUN_LENGTH,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__AC_BITSTREAM_RUN_SUM,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__mem_to_ac_vlc_inst__DOT__conefficient1,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__mem_to_ac_vlc_inst__DOT__position,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__previousDCDiff,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__sum_n,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__abs_previousDCDiff,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__abs_previousDCDiff_next,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__previousDCCoeff,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__dc_coeff_difference,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__val,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__val_n,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__codeword_length,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__exp_golomb_sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__exp_golomb_codeword_length,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__rice_sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__rice_codeword_length,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__exp_golomb_code_inst__DOT__sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__exp_golomb_code_inst__DOT__q,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__golomb_rice_code_inst__DOT__q,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__golomb_rice_code_inst__DOT__sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__Coeff_n,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__previousLevel,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__abs_level_minus_1,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__abs_level_minus_1_n,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__exp_golomb_sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__exp_golomb_codeword_length,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__rice_sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__rice_codeword_length,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__exp_golomb_code_inst__DOT__sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__exp_golomb_code_inst__DOT__q,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__golomb_rice_code_inst__DOT__q,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__golomb_rice_code_inst__DOT__sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__sum_n_n,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__codeword_length_n_n,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__previousRun,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__run,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__run_n,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__exp_golomb_sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__exp_golomb_codeword_length,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__rice_sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__rice_codeword_length,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__exp_golomb_code_inst__DOT__sum,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__exp_golomb_code_inst__DOT__q,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__golomb_rice_code_inst__DOT__q,31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__golomb_rice_code_inst__DOT__sum,31,0);
    VL_SIG64(wapper__DOT__sb_val,63,0);
    VL_SIG64(wapper__DOT__sb_size_of_bit,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__header_val,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__header_size_of_bit,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__matrix_val,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__matrix_size_of_bit,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__picture_header_val,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__picture_header_size_of_bit,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__slice_size_table_val,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__slice_size_table_size_of_bit,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__slice_header_val,63,0);
    VL_SIG64(wapper__DOT__header_inst__DOT__slice_header_size_of_bit,63,0);
    VL_SIG64(wapper__DOT__component_inst__DOT__dc_output_val,63,0);
    VL_SIG64(wapper__DOT__component_inst__DOT__dc_output_size_of_bit,63,0);
    VL_SIG64(wapper__DOT__component_inst__DOT__ac_output_val,63,0);
    VL_SIG64(wapper__DOT__component_inst__DOT__ac_output_size_of_bit,63,0);
    VL_SIG64(wapper__DOT__set_bit_inst__DOT__tmp_buf_bit_offset,63,0);
    VL_SIG64(wapper__DOT__set_bit_inst__DOT__enable_byte64,63,0);
    VL_SIG64(wapper__DOT__set_bit_inst__DOT__total_byte_size64,63,0);
    VL_SIG64(wapper__DOT__set_bit_inst__DOT__tmp_bit64,63,0);
    VL_SIG(wapper__DOT__component_inst__DOT__INPUT_DATA_ARRAY2[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__PRE_DCT_OUTPUT[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__DCT_OUTPUT[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__OUTPUT_DATA[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__v_data_result[2048],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__s1_output[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__tmp_data[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__s3_output[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__0__KET____DOT__butterfly1__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__0__KET____DOT__butterfly1__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__0__KET____DOT__butterfly1__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__0__KET____DOT__butterfly1__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__0__KET____DOT__butterfly1__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__1__KET____DOT__butterfly1__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__1__KET____DOT__butterfly1__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__1__KET____DOT__butterfly1__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__1__KET____DOT__butterfly1__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__1__KET____DOT__butterfly1__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__2__KET____DOT__butterfly1__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__2__KET____DOT__butterfly1__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__2__KET____DOT__butterfly1__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__2__KET____DOT__butterfly1__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__2__KET____DOT__butterfly1__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__3__KET____DOT__butterfly1__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__3__KET____DOT__butterfly1__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__3__KET____DOT__butterfly1__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__3__KET____DOT__butterfly1__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__3__KET____DOT__butterfly1__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__4__KET____DOT__butterfly1__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__4__KET____DOT__butterfly1__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__4__KET____DOT__butterfly1__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__4__KET____DOT__butterfly1__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__4__KET____DOT__butterfly1__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__5__KET____DOT__butterfly1__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__5__KET____DOT__butterfly1__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__5__KET____DOT__butterfly1__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__5__KET____DOT__butterfly1__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__5__KET____DOT__butterfly1__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__6__KET____DOT__butterfly1__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__6__KET____DOT__butterfly1__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__6__KET____DOT__butterfly1__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__6__KET____DOT__butterfly1__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__6__KET____DOT__butterfly1__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__7__KET____DOT__butterfly1__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__7__KET____DOT__butterfly1__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__7__KET____DOT__butterfly1__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__7__KET____DOT__butterfly1__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__7__KET____DOT__butterfly1__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__0__KET____DOT__butterfly2__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__0__KET____DOT__butterfly2__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__0__KET____DOT__butterfly2__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__0__KET____DOT__butterfly2__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__0__KET____DOT__butterfly2__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__1__KET____DOT__butterfly2__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__1__KET____DOT__butterfly2__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__1__KET____DOT__butterfly2__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__1__KET____DOT__butterfly2__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__1__KET____DOT__butterfly2__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__2__KET____DOT__butterfly2__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__2__KET____DOT__butterfly2__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__2__KET____DOT__butterfly2__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__2__KET____DOT__butterfly2__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__2__KET____DOT__butterfly2__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__3__KET____DOT__butterfly2__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__3__KET____DOT__butterfly2__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__3__KET____DOT__butterfly2__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__3__KET____DOT__butterfly2__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__3__KET____DOT__butterfly2__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__4__KET____DOT__butterfly2__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__4__KET____DOT__butterfly2__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__4__KET____DOT__butterfly2__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__4__KET____DOT__butterfly2__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__4__KET____DOT__butterfly2__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__5__KET____DOT__butterfly2__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__5__KET____DOT__butterfly2__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__5__KET____DOT__butterfly2__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__5__KET____DOT__butterfly2__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__5__KET____DOT__butterfly2__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__6__KET____DOT__butterfly2__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__6__KET____DOT__butterfly2__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__6__KET____DOT__butterfly2__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__6__KET____DOT__butterfly2__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__6__KET____DOT__butterfly2__DOT__s5[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__7__KET____DOT__butterfly2__DOT__s1[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__7__KET____DOT__butterfly2__DOT__s2[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__7__KET____DOT__butterfly2__DOT__s3[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__7__KET____DOT__butterfly2__DOT__s4[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__7__KET____DOT__butterfly2__DOT__s5[8],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__wapper__DOT__header2_reset_n,0,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__first_diff,0,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__first_n,0,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__first,0,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__golomb_rice_code_inst__DOT__k_n,2,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__is_minus,0,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__first,0,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__is_expo_golomb_code_n,1,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__golomb_rice_code_inst__DOT__k_n,2,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__is_expo_golomb_code_n,1,0);
    VL_SIG8(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__golomb_rice_code_inst__DOT__k_n,2,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__header2_reset_n,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__header_inst__DOT__header_reset_n,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__header_inst__DOT__picture_header_reset_n,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__header_inst__DOT__slice_size_table_reset_n,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__header_inst__DOT__slice_header_reset_n,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__header_inst__DOT__matrix_reset_n,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__component_reset_n,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__component_inst__DOT__dc_vlc_reset,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__component_inst__DOT__ac_vlc_reset,0,0);
    VL_SIG8(__VinpClk__TOP__wapper__DOT__sb_reset,0,0);
    VL_SIG8(__Vclklast__TOP__CLOCK,0,0);
    VL_SIG8(__Vclklast__TOP__RESET,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__header2_reset_n,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__header_inst__DOT__header_reset_n,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__header_inst__DOT__picture_header_reset_n,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__header_inst__DOT__slice_size_table_reset_n,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__header_inst__DOT__slice_header_reset_n,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__header_inst__DOT__matrix_reset_n,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__component_reset_n,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__component_inst__DOT__dc_vlc_reset,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__component_inst__DOT__ac_vlc_reset,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__wapper__DOT__sb_reset,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__component_reset_n,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__header2_reset_n,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__sb_reset,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__header_inst__DOT__header_reset_n,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__header_inst__DOT__matrix_reset_n,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__header_inst__DOT__picture_header_reset_n,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__header_inst__DOT__slice_size_table_reset_n,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__header_inst__DOT__slice_header_reset_n,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__component_inst__DOT__dc_vlc_reset,0,0);
    VL_SIG8(__Vchglast__TOP__wapper__DOT__component_inst__DOT__ac_vlc_reset,0,0);
    VL_SIG(__Vfunc_get_position__0__Vfuncout,31,0);
    VL_SIG(__Vfunc_get_position__0__coneff,31,0);
    VL_SIG(__Vdly__wapper__DOT__slice_sequencer_counter,31,0);
    VL_SIG(__Vdly__wapper__DOT__sequencer_inst__DOT__slice_size_tmp,31,0);
    VL_SIG(__Vdly__wapper__DOT__sequencer_inst__DOT__y_size,31,0);
    VL_SIG(__Vdly__wapper__DOT__sequencer_inst__DOT__cb_size,31,0);
    VL_SIG(__Vdly__wapper__DOT__sequencer_inst__DOT__slice_size,31,0);
    VL_SIG(__Vdly__wapper__DOT__sequencer_inst__DOT__picture_size,31,0);
    VL_SIG(__Vdly__wapper__DOT__sequencer_inst__DOT__frame_size,31,0);
    VL_SIG(__Vdly__wapper__DOT__header_inst__DOT__header_sequencer_inst__DOT__counter,31,0);
    VL_SIG(__Vdly__wapper__DOT__header_inst__DOT__frame_header_inst__DOT__counter,31,0);
    VL_SIG(__Vdly__wapper__DOT__header_inst__DOT__matrix_inst__DOT__counter,31,0);
    VL_SIG(__Vdly__wapper__DOT__header_inst__DOT__picture_header_inst__DOT__counter,31,0);
    VL_SIG(__Vdly__wapper__DOT__header_inst__DOT__slice_size_table_inst__DOT__counter,31,0);
    VL_SIG(__Vdly__wapper__DOT__header_inst__DOT__slice_header_inst__DOT__counter,31,0);
    VL_SIG(__Vdly__wapper__DOT__component_inst__DOT__sequence_counter,31,0);
    VL_SIG(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__dc_coeff_difference,31,0);
    VL_SIG(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__previousDCDiff,31,0);
    VL_SIG(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_dc_coefficients_inst__DOT__abs_previousDCDiff,31,0);
    VL_SIG(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_level_coefficients_inst__DOT__previousLevel,31,0);
    VL_SIG(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__previousRun,31,0);
    VL_SIG(__Vdly__wapper__DOT__component_inst__DOT__entropy_encode_ac_run_coefficients_inst__DOT__run,31,0);
    VL_SIG(__Vdly__wapper__DOT__set_bit_total_byte_size,31,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__header_val,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__header_size_of_bit,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__matrix_val,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__matrix_size_of_bit,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__picture_header_val,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__picture_header_size_of_bit,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__slice_size_table_val,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__slice_size_table_size_of_bit,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__slice_header_val,63,0);
    VL_SIG64(__Vdly__wapper__DOT__header_inst__DOT__slice_header_size_of_bit,63,0);
    VL_SIG64(__Vdly__wapper__DOT__component_inst__DOT__dc_output_val,63,0);
    VL_SIG64(__Vdly__wapper__DOT__component_inst__DOT__dc_output_size_of_bit,63,0);
    VL_SIG64(__Vdly__wapper__DOT__component_inst__DOT__ac_output_val,63,0);
    VL_SIG64(__Vdly__wapper__DOT__component_inst__DOT__ac_output_size_of_bit,63,0);
    VL_SIG(wapper__DOT____Vcellinp__header_inst__C_QMAT[8][8],31,0);
    VL_SIG(wapper__DOT____Vcellinp__header_inst__Y_QMAT[8][8],31,0);
    VL_SIG(wapper__DOT____Vcellinp__component_inst__C_QMAT[8][8],31,0);
    VL_SIG(wapper__DOT____Vcellinp__component_inst__Y_QMAT[8][8],31,0);
    VL_SIG(wapper__DOT____Vcellinp__component_inst__INPUT_DATA_MEM[4096],31,0);
    VL_SIG(wapper__DOT__header_inst__DOT____Vcellinp__matrix_inst__C_QMAT[8][8],31,0);
    VL_SIG(wapper__DOT__header_inst__DOT____Vcellinp__matrix_inst__Y_QMAT[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellout__array_form_mem_inst__output_data_array[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__array_form_mem_inst__input_data[4096],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellout__pre_dct_inst__OUTPUT_DATA[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__pre_dct_inst__INPUT_DATA[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellout__dct_inst__OUTPUT_DATA[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__dct_inst__INPUT_DATA[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellout__pre_quant_qt_qscale_inst__OUTPUT_DATA[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__pre_quant_qt_qscale_inst__C_QMAT[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__pre_quant_qt_qscale_inst__Y_QMAT[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__pre_quant_qt_qscale_inst__INPUT_DATA[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellout__array_to_mem_inst__output_data[2048],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__array_to_mem_inst__input_data_array[8][8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__mem_to_dc_vlc_inst__input_data[2048],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT____Vcellinp__mem_to_ac_vlc_inst__input_data[2048],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__0__KET____DOT____Vcellout__butterfly1__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__0__KET____DOT____Vcellinp__butterfly1__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__1__KET____DOT____Vcellout__butterfly1__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__1__KET____DOT____Vcellinp__butterfly1__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__2__KET____DOT____Vcellout__butterfly1__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__2__KET____DOT____Vcellinp__butterfly1__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__3__KET____DOT____Vcellout__butterfly1__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__3__KET____DOT____Vcellinp__butterfly1__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__4__KET____DOT____Vcellout__butterfly1__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__4__KET____DOT____Vcellinp__butterfly1__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__5__KET____DOT____Vcellout__butterfly1__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__5__KET____DOT____Vcellinp__butterfly1__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__6__KET____DOT____Vcellout__butterfly1__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__6__KET____DOT____Vcellinp__butterfly1__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__7__KET____DOT____Vcellout__butterfly1__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk1__BRA__7__KET____DOT____Vcellinp__butterfly1__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__0__KET____DOT____Vcellout__butterfly2__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__0__KET____DOT____Vcellinp__butterfly2__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__1__KET____DOT____Vcellout__butterfly2__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__1__KET____DOT____Vcellinp__butterfly2__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__2__KET____DOT____Vcellout__butterfly2__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__2__KET____DOT____Vcellinp__butterfly2__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__3__KET____DOT____Vcellout__butterfly2__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__3__KET____DOT____Vcellinp__butterfly2__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__4__KET____DOT____Vcellout__butterfly2__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__4__KET____DOT____Vcellinp__butterfly2__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__5__KET____DOT____Vcellout__butterfly2__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__5__KET____DOT____Vcellinp__butterfly2__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__6__KET____DOT____Vcellout__butterfly2__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__6__KET____DOT____Vcellinp__butterfly2__DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__7__KET____DOT____Vcellout__butterfly2__OUT_DATA[8],31,0);
    VL_SIG(wapper__DOT__component_inst__DOT__dct_inst__DOT__genblk3__BRA__7__KET____DOT____Vcellinp__butterfly2__DATA[8],31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vwrapper__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vwrapper& operator= (const Vwrapper&);  ///< Copying not allowed
    Vwrapper(const Vwrapper&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vwrapper(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vwrapper();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vwrapper__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vwrapper__Syms* symsp, bool first);
  private:
    static QData _change_request(Vwrapper__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__12(Vwrapper__Syms* __restrict vlSymsp);
    static void _combo__TOP__18(Vwrapper__Syms* __restrict vlSymsp);
    static void _combo__TOP__27(Vwrapper__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _eval(Vwrapper__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vwrapper__Syms* __restrict vlSymsp);
    static void _eval_settle(Vwrapper__Syms* __restrict vlSymsp);
    static void _initial__TOP__15(Vwrapper__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__30(Vwrapper__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__32(Vwrapper__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__35(Vwrapper__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__38(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__1(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__10(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__14(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__17(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__19(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__20(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__21(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__22(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__23(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__24(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__25(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__28(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__29(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__31(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__33(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__34(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__36(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__37(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vwrapper__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vwrapper__Syms* __restrict vlSymsp);
    static void _settle__TOP__13(Vwrapper__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
