'''
Sieve of Eratosthenes
Input: Integer n
Output: Intger 
'''

def sieve(n):
    not_prime = []
    for i in xrange(2, n+1):
        if i not in not_prime:
            print(i)
            for j in xrange(i*i, n+1, i):
                not_prime.append(j)

x = int(raw_input())
sieve(x)