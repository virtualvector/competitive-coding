from collections import defaultdict

f,s,l = [int(i) for i in raw_input().strip().split()]
my_dict = defaultdict(int)

for _ in range(f+s+l):
    val = int(raw_input())
    my_dict[val]+=1 


tup = [(x,y) for x,y in my_dict.items() if y>=2]
print len(tup)
for i in sorted(tup):
   # if(i[1]>=2): print i[0]
   print i[0]
