from time import clock

L = 200

def Medelung(L):
    M = 0
    for i in range(L + 1):
        for j in range(L + 1):
            for k in range(L + 1):
                if i == 0 or j == 0 or k == 0:
                    if i == 0 and j == 0 or i == 0 and k == 0 or j == 0 and k == 0:
                        if (i, j, k) == (0, 0, 0):
                            continue
                        else:
                            w = 0.25
                    else:
                        w = 0.5
                else:
                    w = 1
                if (i + j + k) % 2 == 0:
                    M += w / ((i**2 + j**2 + k**2)**(.5))
                else:
                    M -= w / ((i**2 + j**2 + k**2)**(.5))
    return 8 * M

print(Medelung(L))

