dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

def nextmove(board, r, c, a, b):
    stack = []
    stack.append([r, c])

    while stack:
        x, y = stack.pop()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0<= nx < a and 0<= ny < b:
                if board[nx][ny] == '-':
                    stack.append([nx, ny])


    return

r, c = map(int, input().split())
rr, cc = map(int, input().split())
a, b = map(int, input().split())
board = []
for i in range(a):
    board.append(list(map(str, input().strip())))
nextmove(board, r, c, a, b)