vlib work
vlib activehdl

vlib activehdl/xil_defaultlib
vlib activehdl/xpm
vlib activehdl/microblaze_v11_0_0
vlib activehdl/lmb_v10_v3_0_9
vlib activehdl/lmb_bram_if_cntlr_v4_0_15
vlib activehdl/blk_mem_gen_v8_4_2
vlib activehdl/axi_lite_ipif_v3_0_4
vlib activehdl/mdm_v3_2_15
vlib activehdl/lib_cdc_v1_0_2
vlib activehdl/proc_sys_reset_v5_0_13
vlib activehdl/interrupt_control_v3_1_4
vlib activehdl/axi_gpio_v2_0_20
vlib activehdl/generic_baseblocks_v2_1_0
vlib activehdl/axi_infrastructure_v1_1_0
vlib activehdl/axi_register_slice_v2_1_18
vlib activehdl/fifo_generator_v13_2_3
vlib activehdl/axi_data_fifo_v2_1_17
vlib activehdl/axi_crossbar_v2_1_19
vlib activehdl/lib_pkg_v1_0_2
vlib activehdl/lib_srl_fifo_v1_0_2
vlib activehdl/axi_uartlite_v2_0_22
vlib activehdl/xbip_utils_v3_0_9
vlib activehdl/axi_utils_v2_0_5
vlib activehdl/xbip_pipe_v3_0_5
vlib activehdl/xbip_dsp48_wrapper_v3_0_4
vlib activehdl/xbip_dsp48_addsub_v3_0_5
vlib activehdl/xbip_dsp48_multadd_v3_0_5
vlib activehdl/xbip_bram18k_v3_0_5
vlib activehdl/mult_gen_v12_0_14
vlib activehdl/floating_point_v7_1_7

vmap xil_defaultlib activehdl/xil_defaultlib
vmap xpm activehdl/xpm
vmap microblaze_v11_0_0 activehdl/microblaze_v11_0_0
vmap lmb_v10_v3_0_9 activehdl/lmb_v10_v3_0_9
vmap lmb_bram_if_cntlr_v4_0_15 activehdl/lmb_bram_if_cntlr_v4_0_15
vmap blk_mem_gen_v8_4_2 activehdl/blk_mem_gen_v8_4_2
vmap axi_lite_ipif_v3_0_4 activehdl/axi_lite_ipif_v3_0_4
vmap mdm_v3_2_15 activehdl/mdm_v3_2_15
vmap lib_cdc_v1_0_2 activehdl/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 activehdl/proc_sys_reset_v5_0_13
vmap interrupt_control_v3_1_4 activehdl/interrupt_control_v3_1_4
vmap axi_gpio_v2_0_20 activehdl/axi_gpio_v2_0_20
vmap generic_baseblocks_v2_1_0 activehdl/generic_baseblocks_v2_1_0
vmap axi_infrastructure_v1_1_0 activehdl/axi_infrastructure_v1_1_0
vmap axi_register_slice_v2_1_18 activehdl/axi_register_slice_v2_1_18
vmap fifo_generator_v13_2_3 activehdl/fifo_generator_v13_2_3
vmap axi_data_fifo_v2_1_17 activehdl/axi_data_fifo_v2_1_17
vmap axi_crossbar_v2_1_19 activehdl/axi_crossbar_v2_1_19
vmap lib_pkg_v1_0_2 activehdl/lib_pkg_v1_0_2
vmap lib_srl_fifo_v1_0_2 activehdl/lib_srl_fifo_v1_0_2
vmap axi_uartlite_v2_0_22 activehdl/axi_uartlite_v2_0_22
vmap xbip_utils_v3_0_9 activehdl/xbip_utils_v3_0_9
vmap axi_utils_v2_0_5 activehdl/axi_utils_v2_0_5
vmap xbip_pipe_v3_0_5 activehdl/xbip_pipe_v3_0_5
vmap xbip_dsp48_wrapper_v3_0_4 activehdl/xbip_dsp48_wrapper_v3_0_4
vmap xbip_dsp48_addsub_v3_0_5 activehdl/xbip_dsp48_addsub_v3_0_5
vmap xbip_dsp48_multadd_v3_0_5 activehdl/xbip_dsp48_multadd_v3_0_5
vmap xbip_bram18k_v3_0_5 activehdl/xbip_bram18k_v3_0_5
vmap mult_gen_v12_0_14 activehdl/mult_gen_v12_0_14
vmap floating_point_v7_1_7 activehdl/floating_point_v7_1_7

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"F:/vivado/Vivado/2018.3/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"F:/vivado/Vivado/2018.3/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"F:/vivado/Vivado/2018.3/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work microblaze_v11_0_0 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/2ed1/hdl/microblaze_v11_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MicroBlazee/ip/MicroBlazee_microblaze_0_0/sim/MicroBlazee_microblaze_0_0.vhd" \

vcom -work lmb_v10_v3_0_9 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/78eb/hdl/lmb_v10_v3_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MicroBlazee/ip/MicroBlazee_dlmb_v10_0/sim/MicroBlazee_dlmb_v10_0.vhd" \
"../../../bd/MicroBlazee/ip/MicroBlazee_ilmb_v10_0/sim/MicroBlazee_ilmb_v10_0.vhd" \

vcom -work lmb_bram_if_cntlr_v4_0_15 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/92fd/hdl/lmb_bram_if_cntlr_v4_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MicroBlazee/ip/MicroBlazee_dlmb_bram_if_cntlr_0/sim/MicroBlazee_dlmb_bram_if_cntlr_0.vhd" \
"../../../bd/MicroBlazee/ip/MicroBlazee_ilmb_bram_if_cntlr_0/sim/MicroBlazee_ilmb_bram_if_cntlr_0.vhd" \

vlog -work blk_mem_gen_v8_4_2  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/37c2/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../bd/MicroBlazee/ip/MicroBlazee_lmb_bram_0/sim/MicroBlazee_lmb_bram_0.v" \

vcom -work axi_lite_ipif_v3_0_4 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work mdm_v3_2_15 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/41ef/hdl/mdm_v3_2_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MicroBlazee/ip/MicroBlazee_mdm_1_0/sim/MicroBlazee_mdm_1_0.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../bd/MicroBlazee/ip/MicroBlazee_clk_wiz_1_0/MicroBlazee_clk_wiz_1_0_clk_wiz.v" \
"../../../bd/MicroBlazee/ip/MicroBlazee_clk_wiz_1_0/MicroBlazee_clk_wiz_1_0.v" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MicroBlazee/ip/MicroBlazee_rst_clk_wiz_1_100M_0/sim/MicroBlazee_rst_clk_wiz_1_100M_0.vhd" \

vcom -work interrupt_control_v3_1_4 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \

vcom -work axi_gpio_v2_0_20 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/a7c9/hdl/axi_gpio_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MicroBlazee/ip/MicroBlazee_axi_gpio_0_0/sim/MicroBlazee_axi_gpio_0_0.vhd" \
"../../../bd/MicroBlazee/sim/MicroBlazee.vhd" \

vlog -work generic_baseblocks_v2_1_0  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_18  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/cc23/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_3  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/64f4/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_3 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/64f4/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_3  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/64f4/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_data_fifo_v2_1_17  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/c4fd/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_19  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/6c9d/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/85a3" "+incdir+../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec67/hdl" \
"../../../bd/MicroBlazee/ip/MicroBlazee_xbar_0/sim/MicroBlazee_xbar_0.v" \

vcom -work xil_defaultlib -93 \
"../../../bd/MicroBlazee/ip/MicroBlazee_axi_gpio_1_0/sim/MicroBlazee_axi_gpio_1_0.vhd" \
"../../../bd/MicroBlazee/ip/MicroBlazee_axi_gpio_2_0/sim/MicroBlazee_axi_gpio_2_0.vhd" \
"../../../bd/MicroBlazee/ip/MicroBlazee_axi_gpio_3_0/sim/MicroBlazee_axi_gpio_3_0.vhd" \
"../../../bd/MicroBlazee/ip/MicroBlazee_axi_gpio_4_0/sim/MicroBlazee_axi_gpio_4_0.vhd" \

vcom -work lib_pkg_v1_0_2 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \

vcom -work lib_srl_fifo_v1_0_2 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \

vcom -work axi_uartlite_v2_0_22 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/7371/hdl/axi_uartlite_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/MicroBlazee/ip/MicroBlazee_axi_uartlite_0_0/sim/MicroBlazee_axi_uartlite_0_0.vhd" \

vcom -work xbip_utils_v3_0_9 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/0da8/hdl/xbip_utils_v3_0_vh_rfs.vhd" \

vcom -work axi_utils_v2_0_5 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/ec8e/hdl/axi_utils_v2_0_vh_rfs.vhd" \

vcom -work xbip_pipe_v3_0_5 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/442e/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_wrapper_v3_0_4 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_addsub_v3_0_5 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/a04b/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \

vcom -work xbip_dsp48_multadd_v3_0_5 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/b226/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \

vcom -work xbip_bram18k_v3_0_5 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/c08f/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \

vcom -work mult_gen_v12_0_14 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/6bb5/hdl/mult_gen_v12_0_vh_rfs.vhd" \

vcom -work floating_point_v7_1_7 -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/c63e/hdl/floating_point_v7_1_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/vhdl/inv_divisor_CTRL_BUS_s_axi.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/vhdl/inv_divisor_dmul_dEe.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/vhdl/inv_divisor_drecifYi.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/vhdl/inv_divisor_mask_bkb.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/vhdl/inv_divisor_one_hcud.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/vhdl/inv_divisor_uitodeOg.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/vhdl/inv_divisor.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/ip/inv_divisor_ap_dmul_3_max_dsp_64.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/ip/inv_divisor_ap_drecip_9_full_dsp_64.vhd" \
"../../../../MicroBlaze.srcs/sources_1/bd/MicroBlazee/ipshared/4cdd/hdl/ip/inv_divisor_ap_uitodp_3_no_dsp_32.vhd" \
"../../../bd/MicroBlazee/ip/MicroBlazee_inv_divisor_0_1/sim/MicroBlazee_inv_divisor_0_1.vhd" \

vlog -work xil_defaultlib \
"glbl.v"

