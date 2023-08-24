# Binary to BCD (by double dabble)

Using Board Basys3 with 20ns clock period.

**When the clock period is set to be below 20ns, the design will transition into a sequential circuit configuration due to the associated latency.**

## Design

This design is to convert the binary number to BCD number by double dabble algorithm.

* The binary_in is the input binary number.
* The bcd is the output BCD number.

The vivado design is based on the double dabble algorithm. The algorithm is shown below:

|   bcd_out    | binary_in |
|----------|----------|
|00000000 | xxxx xxxx|

1. Initialize 'bcd_out' to 0.
2. Left-shift the combined value of 'bcd_out' and 'binary_in' by 1 bit.
3. If the least significant digit of 'bcd_out' is 5 or greater, add 3 to the BCD number.
4. Repeat steps 2 to 3 until the binary number becomes 0.

**In this design(8-bit BCD), we perform 7 times step 2 and step 3 and one more time step 2.**

## Result comparison

The comparison of the design implemented by HLS and the design implemented by verilog is shown below. In this design, the utilization of the structure implemented by HLS and viado is identical.

| Waveform  |        |
|--------|--------|
|HLS     |![Alt text](image-1.png)|
|verilog |![Alt text](image.png)|

The result shows that both design are correct. (The input testcase of HLS  consist of one value 00101111 in binary and the output is 47 in BCD.)

|Utilization||
|--|--|
|HLS|![Alt text](image-2.png)|
|verilog|![Alt text](image-3.png)|

The results demonstrate that the utilization of both designs is precisely identical.
