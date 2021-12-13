def nextMove(player,board):
    y = 0
    for i in board:
        x = 0
        for j in i:
            if j == 1:
                print(y, x)
                return
            x+=1
        y+=1
player = input()

board = []
for i in range(8):
    board.append(list(map(int, input().strip())))
nextMove(player,board)