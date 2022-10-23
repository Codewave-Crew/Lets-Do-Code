def fib(n, basCase):
    '''
    Given an n [int] and base case [dict] 
    contraint: n >= 1
    @return the nth fibonacci number
    '''
    if n in basCase.keys():
        return basCase[n]
    else:
        basCase[n] = fib(n - 1, baseCase) + fib(n - 2, baseCase)
        return basCase[n]
        
baseCase = {
    1 : 1,
    2 : 1
}

print(fib(6, baseCase))