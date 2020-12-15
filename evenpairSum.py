for i in range(int(input())):
    a,b=map(int,input().split(' '))
    arr1=[i for i in range(1,a+1)]
    arr2=[i for i in range(1,b+1)]
    evenarr1=[]
    oddarr1=[]
    evenarr2=[]
    oddarr2=[]
    for i in arr1:
        if(i%2==0):
            evenarr1.append(i)
        else:
            oddarr1.append(i)
    for i in arr2:
        if(i%2==0):
            evenarr2.append(i)
        else:
            oddarr2.append(i)
    total_pairs=len(evenarr1)*len(evenarr2)+len(oddarr1)*len(oddarr2)
    print(total_pairs)              
