def next_move(posx, posy, dirty):
    if dirty[0] > posy:
        print("DOWN")
    elif dirty[0] < posy:
        print("UP")
    elif dirty[1] > posx:
        print("RIGHT")
    elif dirty[1]< posx:
        print("LEFT")
    else: print("CLEAN")


def dirty_position(posr, posc, board):
    dirty = [0, 0]
    dirtyr = []
    dirtyc = []
    min = 100
    for i in range(len(board)):
        for j in range(len(board[i])):
            if board[i][j] == 'd':
                dirtyr.append(i)
                dirtyc.append(j)
    for i in range(len(dirtyr)):
        sum = abs(dirtyr[i]-posr)+abs(dirtyc[i]-posc)
        if min > sum:
            min = sum
            dirty[0] = dirtyr[i]
            dirty[1] = dirtyc[i]

    next_move(posc, posr, dirty)

if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    dim = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(dim[0])]
    dirty_position(pos[0], pos[1], board)