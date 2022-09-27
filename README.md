## Binary Conversor
This is a C application that can compute a binary value from a base ten number
just insert the number you want to convert, and press ENTER, simple as that, than you'll get the binary value from the number you entered.
### How to check if the value is correct?
So, to convert an decimal number to binary, you start by get the number and dividing by two, it ll remain either 0 or 1, save the remains you get and then read them backwards, example:

    17/2 = 8 and remain 1  /\ end here
    8/2 = 4 and remain 0   |
    4/2 = 2 and remain 0   |
    2/2 = 1 and remain 0   |
    1/2 = 0 and remain 1   | start from here
    
    so its 10001 
If you don't want to calculate by hand you can use others calculators, i recommend this one [Binary Calculator (Decimal to Binary)](https://www.rapidtables.com/convert/number/decimal-to-binary.html) beacuse this one shows the process behind.
