import sys
s=raw_input()
counter=""
for ch in s:
    if(ch=='A'):counter+='U'
    elif(ch=='C'):counter+='G'
    elif(ch=='G'): counter+='C'
    elif(ch=='T'):counter+='A'
    else:
        print "Invalid Input"
        sys.exit(0)

print counter


