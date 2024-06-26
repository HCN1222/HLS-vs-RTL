# HLS-vs-RTL

## Overview

This repository contains the experiments about the comparison between High-Level Synthesis (HLS) and Register Transfer Level (RTL) design methodologies. The experiments are conducted using Xilinx Vitis HLS and Vivado tools. The primary objective is to compare the resource utilization and timing reports of the designs implemented using the two methodologies.

## Contributors

* Project Advisor: Prof. Jiin Lai
* Author: Cheng-Ning Huang

## Labs

* Environment: Ubuntu 20.04+ on Oracle VM VirtualBox 6.1.42

* Applications: Xilinx Vitis 2022.1 (Vitis_hls / Vivado), GTKWave v3.3.103

<!-- * FPGA boards: Xilinx PYNQ-Z2 / ZYSOC KV260 / BASYS3 -->

### Lab 01 PYNQ-Z2 & KV260

#### Descriptions

The objective of the lab is to facilitate familiarity with remotely monitoring PYNQ-Z2 and KV260 results using the Jupyter Notebook.

### Combinational

#### Descriptions

The lab revolves around implementing combinational logic in Verilog based on the provided HLS code. The primary aim is to compare the utilization reports of the resulting designs.

#### Results

1. [parity_generator](/combinational/parity_generator/Readme.md)

2. [integer_division_modulus](/combinational/integer_division_modulus/Readme.md)

3. [leading_one](/combinational/leading_one/Readme.md)

4. [binary2bcd_div](/combinational/binary2bcd_div/Readme.md)

5. [binary2bcd_double_dabble](/combinational/binary2bcd_double_dabble/Readme.md)

#### Insights and Reflections

* In a general assessment, the design implemented in Verilog is slightly more efficient than the one implemented by HLS. This could be attributed to the fact that the Verilog design is simpler in terms of combinational logic.

* In vitis_HLS, sometimes the error message "top function not found in testbench" might rise from the over-length of the path of the project, which might be solved by shortening the path. Please take note that the name of the file will affect the path length a lot, since Vitis HLS will automatically generate a folder with the same name as the file name and also the .tcl under the file.

### Sequential

#### Descriptions

The lab is to focus on implementing sequential logic in Verilog by utilizing the provided HLS code. The primary goal is to subsequently compare the utilization and timing reports of the two resulting designs.

#### Results

1. [serial2parallel](/sequential/serial2parallel/Readme.md)

2. [parallel2serial](/sequential/parallel2serial/Readme.md)

3. [combinational_lock](/sequential/combinational_lock/Readme.md)

4. [vending_machine](/sequential/vending_machine/Readme.md)

5. [bcd_counter](/sequential/bcd_counter/Readme.md)

6. [single_cycle_regular_pulse](/sequential/single_cycle_regular_pulse/Readme.md)

7. [iir](/sequential/iir/Readme.md)

8. [uart_receiver](/sequential/uart_receiver/Readme.md)

9. [uart_transmitter](/sequential/uart_transmitter/Readme.md)

#### Insights and Reflections

* In a general evaluation, the Verilog implementation consumes fewer resources compared to the one implemented using HLS. The HLS-based implementation, in contrast, tends to be less resource-efficient, often utilizing resources that are 3 to 4 times greater than those of the Verilog design.

* The Verilog design will automatically insert a BUFG to the clock signal, whereas the HLS design will not. Please take note that the inclusion of a BUFG will not impact setup slack and hold slack, as it introduces delays in both the source clock path and the destination clock path.

* When implementing a design with a Finite State Machine (FSM), Vivado will automatically optimize the Verilog code into a one-hot design. However, the HLS Intellectual Property (IP) will not be transformed into a one-hot design. This could potentially lead to the scenario where the HLS design utilizes fewer flip-flops (FFs) than the Verilog design. It's worth noting that the one-hot design approach is more effective when dealing with FSMs.
