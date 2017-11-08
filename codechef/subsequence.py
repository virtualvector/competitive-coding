test = int(raw_input())

def check_seq(s1,s2):
    if(len(s2)<len(s1)):
        return False
    
    counter=0;
    i=0
    j=0
    while(True):
        if(i>=len(s1) or j>=len(s2)):break
        if(s1[i]==s2[j]):
            i+=1
            j+=1
            counter+=1

        else :
            j+=1

    if(counter==len(s1)):return True
    else : return False


for _ in range(test):
    str1,str2 = raw_input().strip().split()
    if(check_seq(str1,str2) or check_seq(str2,str1)):
        print "YES"
    else : print "NO"
