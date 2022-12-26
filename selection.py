n=int(input("Enter the number of element you want in array: "))
array=[]
for i in range(1,n+1):
    a=int(input("Enter the element of the array: "))
    array.append(a)
print(array)

#Selection sort algorithm
for i in range(len(array)-1,0,-1):
    max=array[0]
    pos=0
    for j in range(1,i+1):
        if (array[j]>max):
            max=array[j]
            pos=j
    array[pos]=array[i]
    array[i]=max

print(array)


