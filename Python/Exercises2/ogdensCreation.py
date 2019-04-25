def cock(num):
	print(" () ")
	for i in range(num):
		cock_midsection()

def cock_midsection():
	print(" || ")
	
def balls():
	print("()()")
	
def cock_n_balls(num):
	cock(num)
	balls()
	
def main():
	num = int(input("ENTER YOUR LENGTH: "))
	cock_n_balls(num)
	
main()
