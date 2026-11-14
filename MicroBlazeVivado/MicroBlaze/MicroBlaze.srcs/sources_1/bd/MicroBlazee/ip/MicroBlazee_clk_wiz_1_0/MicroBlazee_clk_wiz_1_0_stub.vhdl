-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
-- Date        : Mon May  5 18:38:26 2025
-- Host        : DESKTOP-FKJK7PE running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               D:/term6/FPGA/MicroBlaze/MicroBlazeVivado/MicroBlaze/MicroBlaze.srcs/sources_1/bd/MicroBlazee/ip/MicroBlazee_clk_wiz_1_0/MicroBlazee_clk_wiz_1_0_stub.vhdl
-- Design      : MicroBlazee_clk_wiz_1_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a200tfbg676-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MicroBlazee_clk_wiz_1_0 is
  Port ( 
    clk_out1 : out STD_LOGIC;
    reset : in STD_LOGIC;
    locked : out STD_LOGIC;
    clk_in1 : in STD_LOGIC
  );

end MicroBlazee_clk_wiz_1_0;

architecture stub of MicroBlazee_clk_wiz_1_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clk_out1,reset,locked,clk_in1";
begin
end;
