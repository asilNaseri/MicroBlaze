--Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
--Date        : Tue May  6 15:38:10 2025
--Host        : DESKTOP-FKJK7PE running 64-bit major release  (build 9200)
--Command     : generate_target MicroBlazee_wrapper.bd
--Design      : MicroBlazee_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity MicroBlazee_wrapper is
  port (
    clk_in1_0 : in STD_LOGIC;
    gpio_io_o_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    gpio_io_o_1 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_2 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_3 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    gpio_io_o_4 : out STD_LOGIC_VECTOR ( 0 to 0 );
    reset : in STD_LOGIC;
    rx_0 : in STD_LOGIC;
    tx_0 : out STD_LOGIC
  );
end MicroBlazee_wrapper;

architecture STRUCTURE of MicroBlazee_wrapper is
  component MicroBlazee is
  port (
    reset : in STD_LOGIC;
    clk_in1_0 : in STD_LOGIC;
    rx_0 : in STD_LOGIC;
    tx_0 : out STD_LOGIC;
    gpio_io_o_0 : out STD_LOGIC_VECTOR ( 31 downto 0 );
    gpio_io_o_4 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_3 : out STD_LOGIC_VECTOR ( 7 downto 0 );
    gpio_io_o_2 : out STD_LOGIC_VECTOR ( 0 to 0 );
    gpio_io_o_1 : out STD_LOGIC_VECTOR ( 0 to 0 )
  );
  end component MicroBlazee;
begin
MicroBlazee_i: component MicroBlazee
     port map (
      clk_in1_0 => clk_in1_0,
      gpio_io_o_0(31 downto 0) => gpio_io_o_0(31 downto 0),
      gpio_io_o_1(0) => gpio_io_o_1(0),
      gpio_io_o_2(0) => gpio_io_o_2(0),
      gpio_io_o_3(7 downto 0) => gpio_io_o_3(7 downto 0),
      gpio_io_o_4(0) => gpio_io_o_4(0),
      reset => reset,
      rx_0 => rx_0,
      tx_0 => tx_0
    );
end STRUCTURE;
