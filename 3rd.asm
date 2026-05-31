LXI H, 2009 ; Point 1st no.
MOV A, M ; Load the acc.
INX H ; Adv Pointer
SUB M ; Subtract IIND NO.
INX H ; Adv Pointer
MOV M, A ; Store Result
HLT


LXI H, 2009 ; Point 1st no.
MOV A, M ; Load the acc.
INX H ; Adv Pointer
SUB M ; Subtract IIND NO.
DAA ; Adjust the decimal
INX H ; Adv Pointer
MOV M, A ; Store Result
RST 5
