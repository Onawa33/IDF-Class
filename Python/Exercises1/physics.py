v0 = int(input("Input starting velocity in meters/second: "))
v1 = int(input("Input ending velocity in meters/second: "))
timespan = int(input("Input timespan in seconds: "))
acceleration = (v1 - v0) / timespan
print("Average Acceleration is: ", acceleration)
