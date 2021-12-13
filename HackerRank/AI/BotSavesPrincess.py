def displayPathtoPrincess(n,grid):
    princess = []
    mario = []
    for idx, val in enumerate(grid):
        if 'p' in val:
            princess.append(idx)
            princess.append(val.index('p'))
        if 'm' in val:
            mario.append(idx)
            mario.append(val.index('m'))

    row = princess[0] - mario[0]
    col = princess[1] - mario[1]

    return ''.join(['UP\n'*abs(row) if row < 0 else 'DOWN\n'*row,
    'LEFT\n'*abs(col) if col < 0 else 'RIGHT\n'*col])

m = int(input())
grid = [] 
for i in range(0, m): 
    grid.append(list(map(str, input().strip())))

print(displayPathtoPrincess(m,grid))
