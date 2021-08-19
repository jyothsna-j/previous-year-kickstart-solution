T = int(input())
for m in range(T):
    N=int(input())
    names = []
    for i in range(N):
        n = input()
        names.append(n)
    count = []
    for i in range(len(names)):
        count.append(0)
        alpha = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
        for j in names[i]:
            if j in alpha:
                count[i] = count[i]+1
                alpha=alpha.replace(j, "")
    final_val = []
    for i in range(len(count)):
        if count[i] == max(count):
            final_val.append(names[i])
    final_val = sorted(final_val)
    print(f"Case #{m+1}: {final_val[0]}")
