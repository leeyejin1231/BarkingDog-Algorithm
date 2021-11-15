<<<<<<< HEAD
def extraLongFactorials(n):
    if n == 1:
        return 1
    return n*extraLongFactorials(n-1)

if __name__ == '__main__':
    n = int(input().strip())

    r = extraLongFactorials(n)
=======
def extraLongFactorials(n):
    if n == 1:
        return 1
    return n*extraLongFactorials(n-1)

if __name__ == '__main__':
    n = int(input().strip())

    r = extraLongFactorials(n)
>>>>>>> 69d5dc799f78c9cdd3c7b83a26b166b19a734c5a
    print(r)