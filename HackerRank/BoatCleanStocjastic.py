def nextMove(posr, posc, board):
    dirty = []
    for idx, val in enumerate(board):
        if 'd' in val:
            dirty.append(idx)
            dirty.append(val.index('d'))

    if dirty[0] > posr:
        res = "DOWN"
    elif dirty[0] < posr:
        res = "UP"
    elif dirty[1] > posc:
        res = "RIGHT"
    elif dirty[1] < posc:
        res = "LEFT"
    else: res = "CLEAN"
    
    return res

pos = [int(i) for i in input().strip().split()]
board = [[j for j in input().strip()] for i in range(5)]
print(nextMove(pos[0], pos[1], board))