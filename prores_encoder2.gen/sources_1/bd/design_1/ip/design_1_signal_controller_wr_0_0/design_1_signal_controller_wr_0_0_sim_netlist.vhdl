-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2021.1 (lin64) Build 3247384 Thu Jun 10 19:36:07 MDT 2021
-- Date        : Thu Sep 30 05:36:07 2021
-- Host        : b running 64-bit Ubuntu 18.04.6 LTS
-- Command     : write_vhdl -force -mode funcsim
--               /home/y/fpga/prores_encoder2/prores_encoder2.gen/sources_1/bd/design_1/ip/design_1_signal_controller_wr_0_0/design_1_signal_controller_wr_0_0_sim_netlist.vhdl
-- Design      : design_1_signal_controller_wr_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xczu3eg-sbva484-1-i
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_signal_controller_wr_0_0_signal_controller is
  port (
    Q : out STD_LOGIC_VECTOR ( 0 to 0 );
    SR : out STD_LOGIC_VECTOR ( 0 to 0 );
    STATUS2 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    ADDRB : out STD_LOGIC_VECTOR ( 31 downto 0 );
    DINB : out STD_LOGIC_VECTOR ( 31 downto 0 );
    WEB : out STD_LOGIC_VECTOR ( 2 downto 0 );
    STATUS : out STD_LOGIC_VECTOR ( 1 downto 0 );
    CLOCK : in STD_LOGIC;
    START : in STD_LOGIC;
    DOUTB : in STD_LOGIC_VECTOR ( 31 downto 0 );
    INPUT_RAM_ADDRESS : in STD_LOGIC_VECTOR ( 31 downto 0 );
    OUTPUT_RAM_ADDRESS : in STD_LOGIC_VECTOR ( 31 downto 0 );
    RESET : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_signal_controller_wr_0_0_signal_controller : entity is "signal_controller";
end design_1_signal_controller_wr_0_0_signal_controller;

architecture STRUCTURE of design_1_signal_controller_wr_0_0_signal_controller is
  signal \FSM_onehot_state_reg_n_0_[0]\ : STD_LOGIC;
  signal \FSM_onehot_state_reg_n_0_[1]\ : STD_LOGIC;
  signal \FSM_onehot_state_reg_n_0_[2]\ : STD_LOGIC;
  signal \FSM_onehot_state_reg_n_0_[3]\ : STD_LOGIC;
  signal \^q\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \^sr\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \^status2\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \__4/i__n_0\ : STD_LOGIC;
  signal \block\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \block[31]_i_1_n_0\ : STD_LOGIC;
  signal \dinb[31]_i_1_n_0\ : STD_LOGIC;
  signal p_0_out_n_0 : STD_LOGIC;
  signal ram_address : STD_LOGIC;
  signal \ram_address[0]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[10]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[11]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[12]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[13]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[14]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[15]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[16]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[17]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[18]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[19]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[1]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[20]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[21]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[22]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[23]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[24]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[25]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[26]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[27]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[28]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[29]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[2]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[30]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[31]_i_2_n_0\ : STD_LOGIC;
  signal \ram_address[3]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[4]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[5]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[6]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[7]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[8]_i_1_n_0\ : STD_LOGIC;
  signal \ram_address[9]_i_1_n_0\ : STD_LOGIC;
  signal \^web\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \web[3]_i_1_n_0\ : STD_LOGIC;
  attribute FSM_ENCODED_STATES : string;
  attribute FSM_ENCODED_STATES of \FSM_onehot_state_reg[0]\ : label is "iSTATE:00001,iSTATE0:10000,iSTATE1:01000,iSTATE2:00100,iSTATE3:00010,";
  attribute FSM_ENCODED_STATES of \FSM_onehot_state_reg[1]\ : label is "iSTATE:00001,iSTATE0:10000,iSTATE1:01000,iSTATE2:00100,iSTATE3:00010,";
  attribute FSM_ENCODED_STATES of \FSM_onehot_state_reg[2]\ : label is "iSTATE:00001,iSTATE0:10000,iSTATE1:01000,iSTATE2:00100,iSTATE3:00010,";
  attribute FSM_ENCODED_STATES of \FSM_onehot_state_reg[3]\ : label is "iSTATE:00001,iSTATE0:10000,iSTATE1:01000,iSTATE2:00100,iSTATE3:00010,";
  attribute FSM_ENCODED_STATES of \FSM_onehot_state_reg[4]\ : label is "iSTATE:00001,iSTATE0:10000,iSTATE1:01000,iSTATE2:00100,iSTATE3:00010,";
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \STATUS[0]_INST_0\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \STATUS[1]_INST_0\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \__4/i_\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \block[0]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \block[10]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \block[11]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \block[12]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \block[13]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \block[14]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \block[15]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \block[16]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \block[17]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \block[18]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \block[19]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \block[1]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \block[20]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \block[21]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \block[22]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \block[23]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \block[24]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \block[25]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \block[26]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \block[27]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \block[28]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \block[29]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \block[2]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \block[30]_i_1\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \block[31]_i_2\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \block[3]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \block[4]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \block[5]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \block[6]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \block[7]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \block[8]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \block[9]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \ram_address[0]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \ram_address[31]_i_2\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \web[0]_i_1\ : label is "soft_lutpair0";
begin
  Q(0) <= \^q\(0);
  SR(0) <= \^sr\(0);
  STATUS2(31 downto 0) <= \^status2\(31 downto 0);
\FSM_onehot_state_reg[0]\: unisim.vcomponents.FDSE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => p_0_out_n_0,
      D => \^q\(0),
      Q => \FSM_onehot_state_reg_n_0_[0]\,
      S => \^sr\(0)
    );
\FSM_onehot_state_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => CLOCK,
      CE => p_0_out_n_0,
      D => \__4/i__n_0\,
      Q => \FSM_onehot_state_reg_n_0_[1]\,
      R => \^sr\(0)
    );
\FSM_onehot_state_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => CLOCK,
      CE => p_0_out_n_0,
      D => \FSM_onehot_state_reg_n_0_[1]\,
      Q => \FSM_onehot_state_reg_n_0_[2]\,
      R => \^sr\(0)
    );
\FSM_onehot_state_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => CLOCK,
      CE => p_0_out_n_0,
      D => \FSM_onehot_state_reg_n_0_[2]\,
      Q => \FSM_onehot_state_reg_n_0_[3]\,
      R => \^sr\(0)
    );
\FSM_onehot_state_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => CLOCK,
      CE => p_0_out_n_0,
      D => \FSM_onehot_state_reg_n_0_[3]\,
      Q => \^q\(0),
      R => \^sr\(0)
    );
RSTB_INST_0: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => RESET,
      O => \^sr\(0)
    );
\STATUS[0]_INST_0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \FSM_onehot_state_reg_n_0_[1]\,
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      O => STATUS(0)
    );
\STATUS[1]_INST_0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \FSM_onehot_state_reg_n_0_[2]\,
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      O => STATUS(1)
    );
\__4/i_\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0001"
    )
        port map (
      I0 => \^q\(0),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \FSM_onehot_state_reg_n_0_[1]\,
      I3 => \FSM_onehot_state_reg_n_0_[2]\,
      O => \__4/i__n_0\
    );
\block[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(0),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(0),
      O => \block\(0)
    );
\block[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(10),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(10),
      O => \block\(10)
    );
\block[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(11),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(11),
      O => \block\(11)
    );
\block[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(12),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(12),
      O => \block\(12)
    );
\block[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(13),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(13),
      O => \block\(13)
    );
\block[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(14),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(14),
      O => \block\(14)
    );
\block[15]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(15),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(15),
      O => \block\(15)
    );
\block[16]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(16),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(16),
      O => \block\(16)
    );
\block[17]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(17),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(17),
      O => \block\(17)
    );
\block[18]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(18),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(18),
      O => \block\(18)
    );
\block[19]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(19),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(19),
      O => \block\(19)
    );
\block[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(1),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(1),
      O => \block\(1)
    );
\block[20]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(20),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(20),
      O => \block\(20)
    );
\block[21]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(21),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(21),
      O => \block\(21)
    );
\block[22]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(22),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(22),
      O => \block\(22)
    );
\block[23]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(23),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(23),
      O => \block\(23)
    );
\block[24]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(24),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(24),
      O => \block\(24)
    );
\block[25]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(25),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(25),
      O => \block\(25)
    );
\block[26]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(26),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(26),
      O => \block\(26)
    );
\block[27]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(27),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(27),
      O => \block\(27)
    );
\block[28]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(28),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(28),
      O => \block\(28)
    );
\block[29]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(29),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(29),
      O => \block\(29)
    );
\block[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(2),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(2),
      O => \block\(2)
    );
\block[30]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(30),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(30),
      O => \block\(30)
    );
\block[31]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A8"
    )
        port map (
      I0 => RESET,
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \FSM_onehot_state_reg_n_0_[2]\,
      O => \block[31]_i_1_n_0\
    );
\block[31]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(31),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(31),
      O => \block\(31)
    );
\block[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(3),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(3),
      O => \block\(3)
    );
\block[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(4),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(4),
      O => \block\(4)
    );
\block[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(5),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(5),
      O => \block\(5)
    );
\block[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(6),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(6),
      O => \block\(6)
    );
\block[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(7),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(7),
      O => \block\(7)
    );
\block[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(8),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(8),
      O => \block\(8)
    );
\block[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => \^status2\(9),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => DOUTB(9),
      O => \block\(9)
    );
\block_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(0),
      Q => \^status2\(0),
      R => '0'
    );
\block_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(10),
      Q => \^status2\(10),
      R => '0'
    );
\block_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(11),
      Q => \^status2\(11),
      R => '0'
    );
\block_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(12),
      Q => \^status2\(12),
      R => '0'
    );
\block_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(13),
      Q => \^status2\(13),
      R => '0'
    );
\block_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(14),
      Q => \^status2\(14),
      R => '0'
    );
\block_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(15),
      Q => \^status2\(15),
      R => '0'
    );
\block_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(16),
      Q => \^status2\(16),
      R => '0'
    );
\block_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(17),
      Q => \^status2\(17),
      R => '0'
    );
\block_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(18),
      Q => \^status2\(18),
      R => '0'
    );
\block_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(19),
      Q => \^status2\(19),
      R => '0'
    );
\block_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(1),
      Q => \^status2\(1),
      R => '0'
    );
\block_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(20),
      Q => \^status2\(20),
      R => '0'
    );
\block_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(21),
      Q => \^status2\(21),
      R => '0'
    );
\block_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(22),
      Q => \^status2\(22),
      R => '0'
    );
\block_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(23),
      Q => \^status2\(23),
      R => '0'
    );
\block_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(24),
      Q => \^status2\(24),
      R => '0'
    );
\block_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(25),
      Q => \^status2\(25),
      R => '0'
    );
\block_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(26),
      Q => \^status2\(26),
      R => '0'
    );
\block_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(27),
      Q => \^status2\(27),
      R => '0'
    );
\block_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(28),
      Q => \^status2\(28),
      R => '0'
    );
\block_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(29),
      Q => \^status2\(29),
      R => '0'
    );
\block_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(2),
      Q => \^status2\(2),
      R => '0'
    );
\block_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(30),
      Q => \^status2\(30),
      R => '0'
    );
\block_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(31),
      Q => \^status2\(31),
      R => '0'
    );
\block_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(3),
      Q => \^status2\(3),
      R => '0'
    );
\block_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(4),
      Q => \^status2\(4),
      R => '0'
    );
\block_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(5),
      Q => \^status2\(5),
      R => '0'
    );
\block_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(6),
      Q => \^status2\(6),
      R => '0'
    );
\block_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(7),
      Q => \^status2\(7),
      R => '0'
    );
\block_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(8),
      Q => \^status2\(8),
      R => '0'
    );
\block_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \block[31]_i_1_n_0\,
      D => \block\(9),
      Q => \^status2\(9),
      R => '0'
    );
\dinb[31]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => RESET,
      I1 => \^q\(0),
      O => \dinb[31]_i_1_n_0\
    );
\dinb_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(0),
      Q => DINB(0),
      R => '0'
    );
\dinb_reg[10]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(10),
      Q => DINB(10),
      R => '0'
    );
\dinb_reg[11]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(11),
      Q => DINB(11),
      R => '0'
    );
\dinb_reg[12]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(12),
      Q => DINB(12),
      R => '0'
    );
\dinb_reg[13]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(13),
      Q => DINB(13),
      R => '0'
    );
\dinb_reg[14]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(14),
      Q => DINB(14),
      R => '0'
    );
\dinb_reg[15]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(15),
      Q => DINB(15),
      R => '0'
    );
\dinb_reg[16]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(16),
      Q => DINB(16),
      R => '0'
    );
\dinb_reg[17]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(17),
      Q => DINB(17),
      R => '0'
    );
\dinb_reg[18]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(18),
      Q => DINB(18),
      R => '0'
    );
\dinb_reg[19]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(19),
      Q => DINB(19),
      R => '0'
    );
\dinb_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(1),
      Q => DINB(1),
      R => '0'
    );
\dinb_reg[20]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(20),
      Q => DINB(20),
      R => '0'
    );
\dinb_reg[21]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(21),
      Q => DINB(21),
      R => '0'
    );
\dinb_reg[22]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(22),
      Q => DINB(22),
      R => '0'
    );
\dinb_reg[23]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(23),
      Q => DINB(23),
      R => '0'
    );
\dinb_reg[24]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(24),
      Q => DINB(24),
      R => '0'
    );
\dinb_reg[25]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(25),
      Q => DINB(25),
      R => '0'
    );
\dinb_reg[26]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(26),
      Q => DINB(26),
      R => '0'
    );
\dinb_reg[27]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(27),
      Q => DINB(27),
      R => '0'
    );
\dinb_reg[28]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(28),
      Q => DINB(28),
      R => '0'
    );
\dinb_reg[29]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(29),
      Q => DINB(29),
      R => '0'
    );
\dinb_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(2),
      Q => DINB(2),
      R => '0'
    );
\dinb_reg[30]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(30),
      Q => DINB(30),
      R => '0'
    );
\dinb_reg[31]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(31),
      Q => DINB(31),
      R => '0'
    );
\dinb_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(3),
      Q => DINB(3),
      R => '0'
    );
\dinb_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(4),
      Q => DINB(4),
      R => '0'
    );
\dinb_reg[5]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(5),
      Q => DINB(5),
      R => '0'
    );
\dinb_reg[6]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(6),
      Q => DINB(6),
      R => '0'
    );
\dinb_reg[7]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(7),
      Q => DINB(7),
      R => '0'
    );
\dinb_reg[8]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(8),
      Q => DINB(8),
      R => '0'
    );
\dinb_reg[9]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \dinb[31]_i_1_n_0\,
      D => \^status2\(9),
      Q => DINB(9),
      R => '0'
    );
p_0_out: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFEFEFE"
    )
        port map (
      I0 => \^q\(0),
      I1 => \FSM_onehot_state_reg_n_0_[2]\,
      I2 => \FSM_onehot_state_reg_n_0_[1]\,
      I3 => START,
      I4 => \FSM_onehot_state_reg_n_0_[0]\,
      I5 => \FSM_onehot_state_reg_n_0_[3]\,
      O => p_0_out_n_0
    );
\ram_address[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(0),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(0),
      O => \ram_address[0]_i_1_n_0\
    );
\ram_address[10]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(10),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(10),
      O => \ram_address[10]_i_1_n_0\
    );
\ram_address[11]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(11),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(11),
      O => \ram_address[11]_i_1_n_0\
    );
\ram_address[12]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(12),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(12),
      O => \ram_address[12]_i_1_n_0\
    );
\ram_address[13]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(13),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(13),
      O => \ram_address[13]_i_1_n_0\
    );
\ram_address[14]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(14),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(14),
      O => \ram_address[14]_i_1_n_0\
    );
\ram_address[15]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(15),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(15),
      O => \ram_address[15]_i_1_n_0\
    );
\ram_address[16]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(16),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(16),
      O => \ram_address[16]_i_1_n_0\
    );
\ram_address[17]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(17),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(17),
      O => \ram_address[17]_i_1_n_0\
    );
\ram_address[18]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(18),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(18),
      O => \ram_address[18]_i_1_n_0\
    );
\ram_address[19]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(19),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(19),
      O => \ram_address[19]_i_1_n_0\
    );
\ram_address[1]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(1),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(1),
      O => \ram_address[1]_i_1_n_0\
    );
\ram_address[20]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(20),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(20),
      O => \ram_address[20]_i_1_n_0\
    );
\ram_address[21]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(21),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(21),
      O => \ram_address[21]_i_1_n_0\
    );
\ram_address[22]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(22),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(22),
      O => \ram_address[22]_i_1_n_0\
    );
\ram_address[23]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(23),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(23),
      O => \ram_address[23]_i_1_n_0\
    );
\ram_address[24]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(24),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(24),
      O => \ram_address[24]_i_1_n_0\
    );
\ram_address[25]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(25),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(25),
      O => \ram_address[25]_i_1_n_0\
    );
\ram_address[26]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(26),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(26),
      O => \ram_address[26]_i_1_n_0\
    );
\ram_address[27]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(27),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(27),
      O => \ram_address[27]_i_1_n_0\
    );
\ram_address[28]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(28),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(28),
      O => \ram_address[28]_i_1_n_0\
    );
\ram_address[29]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(29),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(29),
      O => \ram_address[29]_i_1_n_0\
    );
\ram_address[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(2),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(2),
      O => \ram_address[2]_i_1_n_0\
    );
\ram_address[30]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(30),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(30),
      O => \ram_address[30]_i_1_n_0\
    );
\ram_address[31]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AAAAAA80"
    )
        port map (
      I0 => RESET,
      I1 => START,
      I2 => \FSM_onehot_state_reg_n_0_[0]\,
      I3 => \FSM_onehot_state_reg_n_0_[3]\,
      I4 => \^q\(0),
      O => ram_address
    );
\ram_address[31]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(31),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(31),
      O => \ram_address[31]_i_2_n_0\
    );
\ram_address[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(3),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(3),
      O => \ram_address[3]_i_1_n_0\
    );
\ram_address[4]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(4),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(4),
      O => \ram_address[4]_i_1_n_0\
    );
\ram_address[5]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(5),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(5),
      O => \ram_address[5]_i_1_n_0\
    );
\ram_address[6]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(6),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(6),
      O => \ram_address[6]_i_1_n_0\
    );
\ram_address[7]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(7),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(7),
      O => \ram_address[7]_i_1_n_0\
    );
\ram_address[8]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(8),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(8),
      O => \ram_address[8]_i_1_n_0\
    );
\ram_address[9]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FE02"
    )
        port map (
      I0 => INPUT_RAM_ADDRESS(9),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \^q\(0),
      I3 => OUTPUT_RAM_ADDRESS(9),
      O => \ram_address[9]_i_1_n_0\
    );
\ram_address_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[0]_i_1_n_0\,
      Q => ADDRB(0),
      R => '0'
    );
\ram_address_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[10]_i_1_n_0\,
      Q => ADDRB(10),
      R => '0'
    );
\ram_address_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[11]_i_1_n_0\,
      Q => ADDRB(11),
      R => '0'
    );
\ram_address_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[12]_i_1_n_0\,
      Q => ADDRB(12),
      R => '0'
    );
\ram_address_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[13]_i_1_n_0\,
      Q => ADDRB(13),
      R => '0'
    );
\ram_address_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[14]_i_1_n_0\,
      Q => ADDRB(14),
      R => '0'
    );
\ram_address_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[15]_i_1_n_0\,
      Q => ADDRB(15),
      R => '0'
    );
\ram_address_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[16]_i_1_n_0\,
      Q => ADDRB(16),
      R => '0'
    );
\ram_address_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[17]_i_1_n_0\,
      Q => ADDRB(17),
      R => '0'
    );
\ram_address_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[18]_i_1_n_0\,
      Q => ADDRB(18),
      R => '0'
    );
\ram_address_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[19]_i_1_n_0\,
      Q => ADDRB(19),
      R => '0'
    );
\ram_address_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[1]_i_1_n_0\,
      Q => ADDRB(1),
      R => '0'
    );
\ram_address_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[20]_i_1_n_0\,
      Q => ADDRB(20),
      R => '0'
    );
\ram_address_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[21]_i_1_n_0\,
      Q => ADDRB(21),
      R => '0'
    );
\ram_address_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[22]_i_1_n_0\,
      Q => ADDRB(22),
      R => '0'
    );
\ram_address_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[23]_i_1_n_0\,
      Q => ADDRB(23),
      R => '0'
    );
\ram_address_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[24]_i_1_n_0\,
      Q => ADDRB(24),
      R => '0'
    );
\ram_address_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[25]_i_1_n_0\,
      Q => ADDRB(25),
      R => '0'
    );
\ram_address_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[26]_i_1_n_0\,
      Q => ADDRB(26),
      R => '0'
    );
\ram_address_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[27]_i_1_n_0\,
      Q => ADDRB(27),
      R => '0'
    );
\ram_address_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[28]_i_1_n_0\,
      Q => ADDRB(28),
      R => '0'
    );
\ram_address_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[29]_i_1_n_0\,
      Q => ADDRB(29),
      R => '0'
    );
\ram_address_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[2]_i_1_n_0\,
      Q => ADDRB(2),
      R => '0'
    );
\ram_address_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[30]_i_1_n_0\,
      Q => ADDRB(30),
      R => '0'
    );
\ram_address_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[31]_i_2_n_0\,
      Q => ADDRB(31),
      R => '0'
    );
\ram_address_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[3]_i_1_n_0\,
      Q => ADDRB(3),
      R => '0'
    );
\ram_address_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[4]_i_1_n_0\,
      Q => ADDRB(4),
      R => '0'
    );
\ram_address_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[5]_i_1_n_0\,
      Q => ADDRB(5),
      R => '0'
    );
\ram_address_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[6]_i_1_n_0\,
      Q => ADDRB(6),
      R => '0'
    );
\ram_address_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[7]_i_1_n_0\,
      Q => ADDRB(7),
      R => '0'
    );
\ram_address_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[8]_i_1_n_0\,
      Q => ADDRB(8),
      R => '0'
    );
\ram_address_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => CLOCK,
      CE => ram_address,
      D => \ram_address[9]_i_1_n_0\,
      Q => ADDRB(9),
      R => '0'
    );
\web[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => \^q\(0),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \FSM_onehot_state_reg_n_0_[1]\,
      O => \^web\(0)
    );
\web[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => \^q\(0),
      I1 => \FSM_onehot_state_reg_n_0_[3]\,
      I2 => \FSM_onehot_state_reg_n_0_[2]\,
      O => \^web\(1)
    );
\web[3]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \FSM_onehot_state_reg_n_0_[0]\,
      I1 => \^q\(0),
      O => \web[3]_i_1_n_0\
    );
\web_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \web[3]_i_1_n_0\,
      D => \^web\(0),
      Q => WEB(0),
      R => \^sr\(0)
    );
\web_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \web[3]_i_1_n_0\,
      D => \^web\(1),
      Q => WEB(1),
      R => \^sr\(0)
    );
\web_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => CLOCK,
      CE => \web[3]_i_1_n_0\,
      D => \^q\(0),
      Q => WEB(2),
      R => \^sr\(0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_signal_controller_wr_0_0_signal_controller_wrapper is
  port (
    Q : out STD_LOGIC_VECTOR ( 0 to 0 );
    SR : out STD_LOGIC_VECTOR ( 0 to 0 );
    STATUS2 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    ADDRB : out STD_LOGIC_VECTOR ( 31 downto 0 );
    DINB : out STD_LOGIC_VECTOR ( 31 downto 0 );
    WEB : out STD_LOGIC_VECTOR ( 2 downto 0 );
    STATUS : out STD_LOGIC_VECTOR ( 1 downto 0 );
    CLOCK : in STD_LOGIC;
    START : in STD_LOGIC;
    DOUTB : in STD_LOGIC_VECTOR ( 31 downto 0 );
    INPUT_RAM_ADDRESS : in STD_LOGIC_VECTOR ( 31 downto 0 );
    OUTPUT_RAM_ADDRESS : in STD_LOGIC_VECTOR ( 31 downto 0 );
    RESET : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_signal_controller_wr_0_0_signal_controller_wrapper : entity is "signal_controller_wrapper";
end design_1_signal_controller_wr_0_0_signal_controller_wrapper;

architecture STRUCTURE of design_1_signal_controller_wr_0_0_signal_controller_wrapper is
begin
signal_controller_inst: entity work.design_1_signal_controller_wr_0_0_signal_controller
     port map (
      ADDRB(31 downto 0) => ADDRB(31 downto 0),
      CLOCK => CLOCK,
      DINB(31 downto 0) => DINB(31 downto 0),
      DOUTB(31 downto 0) => DOUTB(31 downto 0),
      INPUT_RAM_ADDRESS(31 downto 0) => INPUT_RAM_ADDRESS(31 downto 0),
      OUTPUT_RAM_ADDRESS(31 downto 0) => OUTPUT_RAM_ADDRESS(31 downto 0),
      Q(0) => Q(0),
      RESET => RESET,
      SR(0) => SR(0),
      START => START,
      STATUS(1 downto 0) => STATUS(1 downto 0),
      STATUS2(31 downto 0) => STATUS2(31 downto 0),
      WEB(2 downto 0) => WEB(2 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_signal_controller_wr_0_0 is
  port (
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
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of design_1_signal_controller_wr_0_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of design_1_signal_controller_wr_0_0 : entity is "design_1_signal_controller_wr_0_0,signal_controller_wrapper,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of design_1_signal_controller_wr_0_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of design_1_signal_controller_wr_0_0 : entity is "module_ref";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of design_1_signal_controller_wr_0_0 : entity is "signal_controller_wrapper,Vivado 2021.1";
end design_1_signal_controller_wr_0_0;

architecture STRUCTURE of design_1_signal_controller_wr_0_0 is
  signal \<const0>\ : STD_LOGIC;
  signal \<const1>\ : STD_LOGIC;
  signal \^clock\ : STD_LOGIC;
  signal \^status\ : STD_LOGIC_VECTOR ( 2 downto 0 );
  signal \^web\ : STD_LOGIC_VECTOR ( 2 downto 0 );
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of CLOCK : signal is "xilinx.com:signal:clock:1.0 CLOCK CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of CLOCK : signal is "XIL_INTERFACENAME CLOCK, ASSOCIATED_RESET RESET, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN design_1_zynq_ultra_ps_e_0_0_pl_clk0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of RESET : signal is "xilinx.com:signal:reset:1.0 RESET RST";
  attribute X_INTERFACE_PARAMETER of RESET : signal is "XIL_INTERFACENAME RESET, POLARITY ACTIVE_LOW, INSERT_VIP 0";
begin
  CLKB <= \^clock\;
  ENB <= \<const1>\;
  STATUS(3) <= \<const0>\;
  STATUS(2 downto 0) <= \^status\(2 downto 0);
  WEB(3) <= \^web\(2);
  WEB(2 downto 0) <= \^web\(2 downto 0);
  \^clock\ <= CLOCK;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
VCC: unisim.vcomponents.VCC
     port map (
      P => \<const1>\
    );
inst: entity work.design_1_signal_controller_wr_0_0_signal_controller_wrapper
     port map (
      ADDRB(31 downto 0) => ADDRB(31 downto 0),
      CLOCK => \^clock\,
      DINB(31 downto 0) => DINB(31 downto 0),
      DOUTB(31 downto 0) => DOUTB(31 downto 0),
      INPUT_RAM_ADDRESS(31 downto 0) => INPUT_RAM_ADDRESS(31 downto 0),
      OUTPUT_RAM_ADDRESS(31 downto 0) => OUTPUT_RAM_ADDRESS(31 downto 0),
      Q(0) => \^status\(2),
      RESET => RESET,
      SR(0) => RSTB,
      START => START,
      STATUS(1 downto 0) => \^status\(1 downto 0),
      STATUS2(31 downto 0) => STATUS2(31 downto 0),
      WEB(2 downto 0) => \^web\(2 downto 0)
    );
end STRUCTURE;
