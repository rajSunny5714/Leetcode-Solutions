# Write a decorator to print a message before a function executes.
def deco(f):
    def inner():
        print("Before Function")
        f()
    return inner
@deco
def show():
    print("Hello")
show()
