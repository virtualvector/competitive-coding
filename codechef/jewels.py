
test = int(raw_input())
for _ in range(test):
    jewels ="".join(set( [i for i in raw_input().strip()]))
    raw_stones = raw_input().strip()

    sumval=0
    for i in jewels:
        sumval+=raw_stones.count(i)

    print sumval
        
    


