#Write a decorator to calculate execution time.
import time
def deco(f):
    def inner():
        s=time.time()
        f()
        e=time.time()
        print(e-s)
    return inner
@deco
def work():
    for i in range(1000000):
        pass
work()
