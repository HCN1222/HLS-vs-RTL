# One Digit BCD counter

    Using Board Basys3
    clock period = 10ns

## Design

![Alt text](image-4.png)

## Result comparison

'''The design implemented by HLS uses six times as much LUTs as the design implemented by verilog and about four times the usage of FFs to that of the verilog design.'''

|Waveform  |        |
|--------|--------|
|HLS     |![Alt text](image.png)|
|verilog |![Alt text](image-2.png)|

|Utilization|                        |
|--         |--                      |
|HLS        |![Alt text](image-1.png)|
|verilog    |![Alt text](image-3.png)|