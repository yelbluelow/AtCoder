q = int(input())
list = []

for _ in range(q):
    inp = input()
    if inp[0] =="1":
        num, x = map(int, inp.split())
        list.append(x)

    elif inp[0] =="2":
        num = int(inp)
        print(list[0])
        list.pop(0)

    else:
        list.sort()
