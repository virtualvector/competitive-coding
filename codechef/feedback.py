test = int(raw_input())
for _ in range(test):
    string = raw_input()
    if(string.find("010")>=0 or string.find("101")>=0):print "Good"
    else: print "Bad"
