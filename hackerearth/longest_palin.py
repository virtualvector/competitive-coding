def check_palin(s,i,j):
    ss = s[i:j+1]
#    print ss
    if(ss==ss[::-1]):
        return len(ss)
    else: return -1

s=raw_input()
maxval=0
for i in range(0,len(s)):
    j=len(s)-1
    while(j!=i):
        if(s[i]==s[j]):
            x=check_palin(s,i,j)
            if((x)>maxval):maxval=x
        j-=1

if(maxval==0): print 1
else: print maxval
