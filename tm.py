

o = 'o'
x = 'x'
e = '_'

t = 0

b = [[e for _ in range(3)] for _ in range(3)]

def pb():
    for i in b:
        for j in i:
            print(j, end='')

        print()
    print()

def _chk(x, y, z):

    if b[x//3][x%3] != '_':
        if b[x//3][x%3] == b[y//3][y%3] == b[z//3][z%3]:
            return b[x//3][x%3]

def chk():
    tmp = 0
    for i in b:
        for j in i:
            if j == e:
                tmp = 1
                break

    if tmp:
        if   _chk(0, 1, 2) is not None: return _chk(0, 1, 2)
        elif _chk(3, 4, 5) is not None: return _chk(3, 4, 5)
        elif _chk(6, 7, 8) is not None: return _chk(6, 7, 8)

        elif _chk(0, 3, 6) is not None: return _chk(0, 3, 6)
        elif _chk(1, 4, 7) is not None: return _chk(1, 4, 7)
        elif _chk(2, 5, 8) is not None: return _chk(2, 5, 8)

        elif _chk(0, 4, 8) is not None: return _chk(0, 4, 8)
        elif _chk(2, 4, 6) is not None: return _chk(2, 4, 6)

    else:
        return "No one"


print("row followed with column (ex: 12 => first row, second column) \n")

while 1:
    pb()
    tmp = input(f"{o if t else x}'s turn: ")

    while not (tmp.isdecimal() and len(tmp) == 2 and tmp[0] in '123' and tmp[1] in '123' and b[int(tmp[0])-1][int(tmp[1])-1] == e):
        if not (tmp.isdecimal() and len(tmp) == 2 and tmp[0] in '123' and tmp[1] in '123'): print("Wrong input")
        else                                                                              : print("Occupied")
        tmp = input(f"{o if t else x}'s turn: ")
    b[int(tmp[0])-1][int(tmp[1])-1] = o if t else x

    t = ~t

    if chk() is not None:
        pb()
        print(f"{chk()} wins")
        break
