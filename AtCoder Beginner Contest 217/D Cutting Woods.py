l, q = map(int, input().split())
l_list = [l]

for _ in range(q):
    c, x = map(int, input().split())
    if c == 1:
        l_list.append(x)
        l_list.sort()
    else:
        for i, l_len in enumerate(l_list):
            if x < l_len:
                if i == 0:
                    print(l_len)
                else:
                    print(l_len - l_list[i-1])
                break
