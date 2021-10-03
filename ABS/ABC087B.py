a = int(input())
b = int(input())
c = int(input())
x_origin = int(input())

count = 0

for a_i in range(a, -1, -1):
    x = x_origin
    if x - a_i * 500 == 0:
        count += 1
    elif x - a_i * 500 > 0:
        for b_i in range(b, -1, -1):
            x = x_origin - a_i * 500
            if x - b_i * 100 == 0:
                count += 1
            elif x - b_i * 100 > 0:
                for c_i in range(c, -1, -1):
                    x = x_origin - a_i * 500 - b_i * 100
                    if x - c_i * 50 == 0:
                        count += 1

print(count)
