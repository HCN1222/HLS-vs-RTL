# One Digit BCD counter

    Using Board Basys3
    clock period = 10ns

## Design

![Alt text](image-5.png)

## Result comparison

'''The design implemented by HLS uses twice as much LUTs as the design implemented by verilog and triple the usage of FFs to that of the verilog design.'''

|Waveform  |        |
|--------|--------|
|HLS     |![Alt text](image-4.png)|
|HLS(pipelined) |![Alt text](image-3.png)|
|verilog | ![Alt text](image-2.png)|

|Timing|        |
|--------|--------|
|HLS (pipelined)    |![Alt text](image-6.png)|
|verilog |![Alt text](image-7.png)|

|Utilization|                        |
|--         |--                      |
|HLS (pipelined)| ![Alt text](image-1.png)|
|verilog    |![Alt text](image.png)|