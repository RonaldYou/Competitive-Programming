a = int(input())
b = int(input())

c = a%b
if c == 0:
    print(0)
elif a<b:
    print(b-a)
else:
    if b-c > c:
        print(c)
    elif b-c < c:
        print(b-c)
    else:
        print(c)