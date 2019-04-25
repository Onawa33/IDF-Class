def draw_downV():
    print("   /\\")
    print("  /  \\")
    print(" /    \\")
def draw_upV():
    print(" \\    /")
    print("  \\  /")
    print("   \\/")
def draw_box():
    print("+------+")
    print("|      |")
    print("|      |")
    print("+------+")
def merica():
    print("|UNITED|")
    print("|STATES|")
def main():
    print("Here is a diamond: ")
    draw_downV()
    draw_upV()

    print("Here is an X: ")
    draw_upV()
    draw_downV()

    print("Here is a rocket ship: ")
    draw_downV()
    draw_box()
    merica()
    draw_box()
    draw_downV()

main()

