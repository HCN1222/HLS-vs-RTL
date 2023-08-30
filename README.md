# Seminar_in_SOC

## <a name='TableofContents'></a>Table of Contents
<!-- vscode-markdown-toc -->
* [Table of Contents](#TableofContents)
* [Labs](#Labs)
  * [PYNQ](#PYNQ)
    * [Descriptions](#Descriptions)
    * [Lab Results](#LabResults)
    * [Insights and Reflections](#InsightsandReflections)
  * [KV260](#KV260)
    * [Descriptions](#Descriptions-1)
    * [Lab Results](#LabResults-1)
    * [Insights and Reflections](#InsightsandReflections-1)
  * [HLS vs. Verilog ( Combinational )](#HLSvs.VerilogCombinational)
    * [Descriptions](#Descriptions-1)
    * [Lab Results](#LabResults-1)
    * [Insights and Reflections](#InsightsandReflections-1)
  * [HLS vs. Verilog ( Sequential )](#HLSvs.VerilogSequential)
    * [Descriptions](#Descriptions-1)
    * [Lab Results](#LabResults-1)
    * [Insights and Reflections](#InsightsandReflections-1)

<!-- vscode-markdown-toc-config
	numbering=false
	autoSave=true
	/vscode-markdown-toc-config -->
<!-- /vscode-markdown-toc -->

## <a name='Labs'></a>Labs

* Environment: Ubuntu 20.04+ on Oracle VM VirtualBox 6.1.42
* Applications: Xilinx Vitis 2022.1 (Vitis_hls / Vivado)
* FPGA boards: Xilinx PYNQ-Z2 / ZYSOC KV260 / BASYS3

### <a name='PYNQ'></a>PYNQ

#### <a name='Descriptions'></a>Descriptions

* The objective of the lab is to facilitate familiarity with remotely monitoring PYNQ results using the Jupyter Notebook.

#### <a name='LabResults'></a>Lab Results

#### <a name='InsightsandReflections'></a>Insights and Reflections

* Locate the register location of the design in PYNQ within the **hw.h** file, rather than the **.hwh** file.

### <a name='KV260'></a>KV260

#### <a name='Descriptions-1'></a>Descriptions

* KV260


#### <a name='LabResults-1'></a>Lab Results

#### <a name='InsightsandReflections-1'></a>Insights and Reflections

### <a name='HLSvs.VerilogCombinational'></a>HLS vs. Verilog ( Combinational )

#### <a name='Descriptions-1'></a>Descriptions

The lab revolves around implementing combinational logic in Verilog based on the provided HLS code. The primary aim is to compare the utilization reports of the resulting designs.

#### <a name='LabResults-1'></a>Lab Results

1. [parity_generator](/lab/lab3_combinational/parity_generator/Readme.md)

2. [integer_division_modulus](/lab/lab3_combinational/integer_division_modulus/Readme.md)

3. [leading_one](/lab/lab3_combinational/leading_one/Readme.md)

4. [binary2bcd_div](/lab/lab3_combinational/binary2bcd_div/Readme.md)

5. [binary2bcd_double_dabble](/lab/lab3_combinational/binary2bcd_double_dabble/Readme.md)

#### <a name='InsightsandReflections-1'></a>Insights and Reflections

* In a general assessment, the design implemented in Verilog is slightly more efficient than the one implemented by HLS. This could be attributed to the fact that the Verilog design is simpler in terms of combinational logic.

* In vitis_HLS, sometimes the error message "top function not found in testbench" might rise from the over-length of the path of the project, which might be solved by shortening the path. Please take note that the name of the file will effects the path length a lot, since vitis_hls will automatically generate a folder with the same name as the file name and also the .tcl under the file.  

### <a name='HLSvs.VerilogSequential'></a>HLS vs. Verilog ( Sequential )

#### <a name='Descriptions-1'></a>Descriptions

The lab is to focus on implementing sequential logic in Verilog by utilizing the provided HLS code. The primary goal is to subsequently compare the utilization and timing reports of the two resulting designs.

#### <a name='LabResults-1'></a>Lab Results

1. [serial2parallel](/lab/lab4_sequential/serial2parallel/Readme.md)

2. [parallel2serial](/lab/lab4_sequential/parallel2serial/Readme.md)

3. [combinational_lock](/lab/lab4_sequential/combinational_lock/Readme.md)

4. [vending_machine](/lab/lab4_sequential/vending_machine/Readme.md)

5. [bcd_counter](/lab/lab4_sequential/bcd_counter/Readme.md)

6. [single_cycle_regular_pulse](/lab/lab4_sequential/single_cycle_regular_pulse/Readme.md)

7. [iir](/lab/lab4_sequential/iir/Readme.md)

8. [uart_receiver](/lab/lab4_sequential/uart_receiver/Readme.md)

9. [uart_transmitter](/lab/lab4_sequential/uart_transmitter/Readme.md)

#### <a name='InsightsandReflections-1'></a>Insights and Reflections

* In a general evaluation, the Verilog implementation consumes fewer resources compared to the one implemented using HLS. The HLS-based implementation, in contrast, tends to be less resource-efficient, often utilizing resources that are 3 to 4 times greater than those of the Verilog design.

* The Verilog design will automatically insert a BUFG to the clock signal, whereas the HLS design will not. This could potentially account for the disparities observed in utilization and timing reports.

* When implementing a design with a Finite State Machine (FSM), Vivado will automatically optimize the Verilog code into a one-hot design. However, the HLS Intellectual Property (IP) will not be transformed into a one-hot design. This could potentially lead to the scenario where the HLS design utilizes fewer flip-flops (FFs) than the Verilog design. It's worth noting that the one-hot design approach is more effective when dealing with FSMs.