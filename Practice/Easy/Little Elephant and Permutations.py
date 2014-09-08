n = int(raw_input())
for i in range(n):
    N = int(raw_input())
    A = [int(i) for i in raw_input().split()]
    flag = True
    for k in range(N-1):
        for j in range(k+1,N):
            if(j != k+1):
                if A[k] > A[j]:
                    flag = False
                    break
                   
    if flag == True:
        print 'YES'
    else:
        print 'NO' 
