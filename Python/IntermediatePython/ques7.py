# Read a text file and count the number of lines.
f=open("data.txt","r")
print(len(f.readlines()))
f.close()
