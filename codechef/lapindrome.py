from collections import defaultdict
test = int(raw_input())

for _ in range(test):
    string = raw_input().strip()
    string1=str()
    string2=str()
    dd1 = defaultdict()
    dd2 = defaultdict()
    if(len(string)%2==0):
        string1 = string[:len(string)/2]
        string2 = string[len(string)/2:]

        for i in string1:
            dd1[i]=string1.count(i)

        for i in string2:
            dd2[i]= string2.count(i)


        val=True
        try:
            for i in dd1.keys():
                if(dd1[i]!=dd2[i]):
                    val=False
                    break
            if(val): print "YES"
            else: print "NO"
        except:
            print "NO"
            continue

        
    else:
        string1 = string[:len(string)/2]
        string2 = string[len(string)/2+1:]

        for i in string1:
            dd1[i]=string1.count(i)

        for i in string2:
            dd2[i]= string2.count(i)

        val=True
        try:

            for i in dd1.keys():
                if(dd1[i]!=dd2[i]):
                    val=False
                    break
        except:
            print "NO"
            continue
        if(val):print "YES"
        
        else : print "NO"
