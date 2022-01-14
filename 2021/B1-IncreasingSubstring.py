T = int(input())
for m in range(T):
    N = int(input())
    s = input()
    ans = list()
    for i in reversed(range(1, N)):
        count = 1
        for j in reversed(range(i+1)):
            if ord(s[j])>ord(s[j-1]) and j!=0:
                count = count + 1
            else:
                break
        ans.append(str(count))
    ans.append("1")
    ans = ans[::-1]
    ans = ' '.join(ans)
    print(f"Case #{m+1}: {ans}")
