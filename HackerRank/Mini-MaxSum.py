def miniMaxSum(arr):
    # Write your code here
    arr_ = arr[:]
    msum = 0
    Msum = 0
    for i in range(0, 4):
        msum += min(arr_)
        Msum += max(arr)
        arr_.remove(min(arr_))
        arr.remove(max(arr))
    print(msum, Msum)
    
if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))
    miniMaxSum(arr)
