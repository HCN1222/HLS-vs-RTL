# Binary to BCD (by division)

Using Board Basys3 with 20ns clock period.

**When the clock period is set to be below 20ns, the design will transition into a sequential circuit configuration due to the associated latency.**

## Design

This design is to convert the binary number to BCD number by division.

* The binary_in is the input binary number.
* The bcd is the output BCD number.

The vivado design is based on the following diagram:

**Note that the modulus operation is implemented by subtraction, multiplication and division to keep the design combinational.**

![Alt text](image.png)

## Result comparison

The comparison of the design implemented by HLS and the design implemented by verilog is shown below.The utilization report indicates that the design implemented by verilog is more concise and efficient than the design implemented by HLS.

|Waveform  |        |
|--------|--------|
|HLS     |![Alt text](image-2.png)|
|verilog |![Alt text](image-1.png)|

The result shows that both design convert binary into BCD.

|Utilization||
|--|--|
|HLS|![Alt text](image-5.png)|
|verilog|![Alt text](image-3.png)|

The primary distinction between the two designs lies in the usage of resources. The HLS-implemented design employs 3 DSPs, whereas the Verilog-implemented design avoids the use of any DSPs. Despite the HLS design's lower LUT consumption, it's important to note that DSPs are more resource-intensive than LUTs.