# LAB6
import math

# Question 1
while True:
    # get input from user
    n = int(input("Enter a value for n : "))
    x = int(input("Enter a positive value of x : "))

    result = sum(list(map(lambda i: (n ** i) / math.factorial(i), range(x + 1))))
    print("The result is : ", result)

print("******************************************************************")


# Question 2


def calculate_sum(n):
    global result
    if n != 0:
        result += (-1) ** (n + 1) / n
        calculate_sum(n - 1)


while True:
    k = int(input("Enter a value of n :"))
    if k < 1:
        print("Invalid input, n must be greater or equal to 1")
    else:
        calculate_sum(k)
        print("The result is : ", result)
