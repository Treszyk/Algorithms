def dec_to_sys(dec, sys):
    sys_num = ''
    while dec:
        char_num = dec%sys
        char_num += 87 if char_num>=10 else 48
        sys_num = chr(char_num) + sys_num
        dec//=sys
    return sys_num

def sys_to_dec(number, sys):
    dec = 0
    pow = 0
    for char in reversed(number):
        if char<'a':
            dec += (ord(char) - ord('0')) * sys**pow
        else:
            dec += (ord(char) - ord('a') + 10) * sys**pow
        pow+=1
    return dec

dec = 1001
sys = 2
print(dec_to_sys(dec, sys))    
sys_num = "1111101001"
print(sys_to_dec(sys_num, sys))