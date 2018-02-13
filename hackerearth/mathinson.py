from  itertools import combinations
num,sum_val = [int(i) for i in raw_input().strip().split()]

ll = [int(i) for i in raw_input().strip().split()]

counter = 0;

for i in list(combinations(ll,3)):
    
    if(sum(i)%sum_val == 0):
        counter+=1;

print counter
