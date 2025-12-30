# Create a generator to generate Fibonacci numbers.
def fib(n):
    a=0
    b=1
    for i in range(n):
        yield a
        a,b=b,a+b
n=int(input())
for i in fib(n):
    print(i)
