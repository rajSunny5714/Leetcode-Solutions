# Read a CSV file using Python.
import csv
with open("yourDataPath.csv","r") as f:
    r=csv.reader(f)
    for i in r:
        print(i)
