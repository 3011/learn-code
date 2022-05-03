def f(n):
    arr = [7, 11]
    if n < 2:
        return arr[n]

    arr[0] += arr[1]

    for i in range(2,n-1):
        temp = arr[0]
        arr[0] += arr[1]
        arr[1] = temp
    return arr[0]


while(1):
    n = int(input())
    if n == 0:
        break
    if f(n) % 3 == 0:
        print("yes")
    else:
        print("no")
