-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
-- Date        : Mon May  5 18:20:17 2025
-- Host        : DESKTOP-FKJK7PE running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               D:/term6/FPGA/MicroBlaze/MicroBlazeVivado/MicroBlaze/MicroBlaze.srcs/sources_1/bd/MicroBlazee/MicroBlazee_stub.vhdl
-- Design      : MicroBlazee
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a200tfbg676-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MicroBlazee is
  Port ( 
    clk_in1_0 : in STD_LOGIC;
    gpio_io_o_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    reset : in STD_LOGIC
  );

end MicroBlazee;

architecture stub of MicroBlazee is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clk_in1_0,gpio_io_o_0[31:0],reset";
begin
end;
