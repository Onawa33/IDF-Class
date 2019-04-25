import random

def Rand(start, end, num):
    theList = []

    for i in range(num):
        theList.append(random.randint(start, end))

    return theList

num = 7
start = 0
end = 9
print(Rand(start, end, num))

