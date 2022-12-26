
n=int(input("Enter the number of element you want in array: "))
array=[]
for i in range(1,n+1):
    a=int(input("Enter the element of the array: "))
    array.append(a)
print(array)

#Insertion sort algorithm
for i in range(0,len(array)):
    temp=array[i]
    for j in range(i-1,0,-1):
        if temp<array[j]:
            array[j+1]=array[j]
        else:
            break
        array[j+1]=temp

print(array)
