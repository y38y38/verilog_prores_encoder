-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
-- Date        : Thu Sep 30 05:36:05 2021
-- Host        : b running 64-bit Ubuntu 18.04.6 LTS
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_signal_controller_wr_0_0_stub.vhdl
-- Design      : design_1_signal_controller_wr_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xczu3eg-sbva484-1-i
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    CLOCK : in STD_LOGIC;
    RESET : in STD_LOGIC;
    START : in STD_LOGIC;
    INPUT_RAM_ADDRESS : in STD_LOGIC_VECTOR ( 31 downto 0 );
    OUTPUT_RAM_ADDRESS : in STD_LOGIC_VECTOR ( 31 downto 0 );
    STATUS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    STATUS2 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    ADDRB : out STD_LOGIC_VECTOR ( 31 downto 0 );
    CLKB : out STD_LOGIC;
    DINB : out STD_LOGIC_VECTOR ( 31 downto 0 );
    DOUTB : in STD_LOGIC_VECTOR ( 31 downto 0 );
    ENB : out STD_LOGIC;
    RSTB : out STD_LOGIC;
    WEB : out STD_LOGIC_VECTOR ( 3 downto 0 )
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "CLOCK,RESET,START,INPUT_RAM_ADDRESS[31:0],OUTPUT_RAM_ADDRESS[31:0],STATUS[3:0],STATUS2[31:0],ADDRB[31:0],CLKB,DINB[31:0],DOUTB[31:0],ENB,RSTB,WEB[3:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "signal_controller_wrapper,Vivado 2021.1";
begin
end;
