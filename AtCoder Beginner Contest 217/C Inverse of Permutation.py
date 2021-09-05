n = int(input())
p_list = list(map(int, input().split()))

q_list = list(range(n))
for i, p in enumerate(p_list):
    q_list[p-1] = i+1

q_list = map(str, q_list)
print(' '.join(q_list))