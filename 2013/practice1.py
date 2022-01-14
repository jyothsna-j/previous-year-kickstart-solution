T = int(input())
for m in range(T):
    N = int(input())
    names = []
    count = 0
    for i in range(N):
        x = input()
        names.append(x)
    for i in range(N-1):
        if names[i]>names[i+1]:
            temp = names[i]
            names[i] = names[i+1]
            names[i+1] = temp
            count = count + 1
    print(f"Case #{m+1}: {count}")
