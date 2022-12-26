

#taking array input
n=int(input("Enter the number of element you want in array: "))
array=[]
for i in range(1,n+1):
    a=int(input("Enter the element of the array: "))
    array.append(a)
print(array)

#bubble sort algorithm

for i in range(0,len(array)):
    for j in range(0,len(array)-1):
        if array[j]>array[j+1]:
            temp = array[j]
            array[j]=array[j+1]
            array[j+1]=temp

print(array)