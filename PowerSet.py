set = []
i=0
print("Press '1' For end Of Input\n")
print("Give The elements Of Set:")
while True:
    set.append(input())
    if set[i]=='1':
        break
    i = i+1
n = i
print("The Number Of Subset is "+str(pow(2,n)))
psz = int(pow(2,n))
for i in range(0,psz):
    x=i
    print('{',end = ' ')
    for j in range(0,n):

        if x % 2 == 1:
            print(set[j],end = ' ')
        x = int(x/2)
    print('}',end = '  ')
    
