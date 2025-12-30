# Use regular expressions to validate an email address.
import re
email=input()
print(bool(re.match(r'^[\w\.-]+@[\w\.-]+\.\w+$',email)))
