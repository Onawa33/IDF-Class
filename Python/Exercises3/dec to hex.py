def dec_to_hex(dec):
    dec = hex(dec)

    print(dec)

def main():
    dec = int(input("Input a decimal to be converted to hexadecimal: "))
    dec_to_hex(dec)

main()
