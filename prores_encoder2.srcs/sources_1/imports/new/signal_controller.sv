`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2021/04/18 13:50:11
// Design Name: 
// Module Name: signal_controller
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


module signal_controller(
	//for module control
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

	assign CLKB = CLOCK;

	reg enb;

	reg [3:0] state;
	localparam STATE_IDLE = 4'h0;
	localparam STATE_READ = 4'h1;
	localparam STATE_READING = 4'h2;
	localparam STATE_CALC = 4'h3;
	localparam STATE_WRITE = 4'h4;
	localparam STATE_WRITEING = 4'h5;


	assign STATUS = state;
	assign RSTB =  ~RESET;

	reg [31:0] ram_address = 32'hffffffff;
	reg [31:0] block;
	reg calc_start = 1'b0;
	reg [31:0] calc_output_data;
	reg calc_output_data_enable = 1'b0;

	reg [31:0] dinb;
	reg [3:0] web;

	assign DINB = dinb;
	assign ENB = enb;
	assign WEB = web;

	assign ADDRB = ram_address;

	assign STATUS2 = block;

	always @( posedge CLOCK) begin
		if (RESET == 1'b0) begin
			state <= STATE_IDLE;
			web <= 4'b0;
			enb <= 1'b1;
		end else begin
			if (state == STATE_IDLE) begin
				web <= 4'b0000;
				if (START == 1'b1) begin
					state <= STATE_READ;
					ram_address <= INPUT_RAM_ADDRESS;
				end
			end
			if (state == STATE_READ) begin
				state <= STATE_READING;				
			end

			if (state == STATE_READING) begin
				block <= DOUTB;
				state <= STATE_CALC;
			end
			if (state == STATE_CALC) begin
				block <= ~block; 
				ram_address <= OUTPUT_RAM_ADDRESS;
				state <= STATE_WRITE;
			end
			if (state == STATE_WRITE) begin
				dinb <= block;
				web <= 4'b1111;
				ram_address <= OUTPUT_RAM_ADDRESS;
				state <= STATE_IDLE;
			end
		end
	end

endmodule
