t = int(input())    
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    if n == 2:
        print(arr[0] * arr[1])
    else:
        print(max(arr[0] * arr[1], arr[n -1] * arr[n-2]))