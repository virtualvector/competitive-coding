test = int(raw_input())

for _ in range(test):
    length = int(raw_input())
    arr=[int(i) for i in raw_input().split()]
    ss = set(arr)
    print len(ss)
