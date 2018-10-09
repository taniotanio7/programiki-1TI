a = int(input('Podaj liczbę a: '))
b = int(input('Podaj liczbę b: '))


def nwd(a, b):
    if b > a:
        return nwd(b, a)

    if a % b == 0:
        return b

    return nwd(b, a % b)


print(nwd(a, b))
