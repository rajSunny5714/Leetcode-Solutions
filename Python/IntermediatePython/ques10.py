# Handle file exceptions using try-except.
try:
    f=open("abc.txt","r")
    print(f.read())
except:
    print("File Error")
