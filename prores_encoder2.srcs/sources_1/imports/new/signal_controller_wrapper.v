`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/29/2021 04:15:23 AM
// Design Name: 
// Module Name: signal_controller_wrapper
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module signal_controller_wrapper(
	input CLOCK,
	input RESET,
	input START,
	input [31:0] INPUT_RAM_ADDRESS,
	input [31:0] OUTPUT_RAM_ADDRESS,
	output [3:0] STATUS,
	output [31:0] STATUS2,

	//BRAM IF
	output [31:0] ADDRB,
	output CLKB,
	output [31:0] DINB,
	input [31:0] DOUTB,
	output ENB,
	output RSTB,
	output [3:0] WEB

    );
	
	signal_controller signal_controller_inst(
	.CLOCK(CLOCK),
	.RESET(RESET),
	.START(START),
	.INPUT_RAM_ADDRESS(INPUT_RAM_ADDRESS),
	.OUTPUT_RAM_ADDRESS(OUTPUT_RAM_ADDRESS),
	.STATUS(STATUS),
	.STATUS2(STATUS2),

	//BRAM IF
	.ADDRB(ADDRB),
	.CLKB(CLKB),
	.DINB(DINB),
	.DOUTB(DOUTB),
	.ENB(ENB),
	.RSTB(RSTB),
	.WEB(WEB)

	);

endmodule
