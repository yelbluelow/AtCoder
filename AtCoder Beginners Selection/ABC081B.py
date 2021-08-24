n = int(input())
n_list = list(map(int, input().split()))

count = 0
flg = True

while flg:
    for i in range(n):
        if n_list[i] % 2 == 1:
            flg = False
            print(count)
            break
        n_list[i] = n_list[i] // 2
    else:
        count += 1
