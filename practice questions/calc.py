# python program to add, subtract, multiply or divide two numbers using switch

num_1 = float(input("Enter first number - \n"))
num_2 = float(input("Enter second number - \n"))

print("Enter which operation would you like to perform?")
print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

choice = int(input("Enter your choice - \n"))

if choice == 1:
    print("Addition of two numbers is - ", num_1 + num_2)
elif choice == 2:
    print("Subtraction of two numbers is - ", num_1 - num_2)
elif choice == 3:
    print("Multiplication of two numbers is - ", num_1 * num_2)
elif choice == 4:
    print("Division of two numbers is - ", num_1 / num_2)
else:
    print("Invalid input")

