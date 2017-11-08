from itertools  import combinations


len_val,n = [int(i) for i in raw_input().split()]
ll=[int(i) for i in raw_input().split()]


new_list = list(combinations(ll,3))
counter=0

for i in new_list:
    if(sum(i)%n==0): counter+=1

print counter


