n=int(input("Enter the number of element you want in array: "))
array=[]
for i in range(1,n+1):
    a=int(input("Enter the element of the array: "))
    array.append(a)
print(array)

key=int(input("Enter the element you want to find in the array: "))

start=0
end=len(array)-1

while(start<=end):
    mid = int((start + end) / 2)
    if array[mid]==key:
        print("Number is found")
        break
    elif array[mid]<key:
        start=mid+1
    else:
        end=mid-1

if start>end:
    print("Element is not found")