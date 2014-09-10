for _ in range(int(raw_input())):
    N,b,c = [int(i) for i in raw_input().split()]
    B = bin(b)[2:].count('1')
    C = bin(c)[2:].count('1')
 
    if B+C < N:
        s = '1'*(B+C)+'0'*(N - (B+C))
    else:
        s = '1'*(2*N - (B + C))+'0'*((B+C) - N)
    print int(s,2) 
