def nextMove(n,r,c,grid):
    princess = []
    for idx, val in enumerate(grid):
        if 'p' in val:
            princess.append(idx)
            princess.append(val.index('p'))
    
    if princess[0] > r:
        res = "DOWN"
    elif princess[0] < r:
        res = "UP"
    elif princess[1] > c:
        res = "RIGHT"
    elif princess[1] < c:
        res = "LEFT"
    
    return res

n = int(input())
r,c = map(int, input().split())  #로봇위치
grid = []
for i in range(n):
    grid.append(list(map(str, input().strip())))

print(nextMove(n,r,c,grid))