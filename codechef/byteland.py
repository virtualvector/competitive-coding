from itertools import combinations


test = int(raw_input())
for _ in range(test):
    n,m = [int(i) for i in raw_input().split()]
    ll=list()
    for i in range(n):
        ll.append(int(raw_input()))

    sumval=list()
    for i in range(1,n+1):
        for i in set(combinations(ll,i)):
            sumval.append(sum(i))
            if m in sumval: break


    if(m in sumval):print "Yes"
    else: print "No"

