# Sieve-of-Eratosthenes

## About
- The Sieve of Eratosthenes is an alternative method to find the number of prime numbers in a a given range.
- It is more efficient than conventional algorithms to find the list of prime numbers.
- The Sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than 'n' when n < 10,000,000

## Algorithm
1. Store the numbers from 2 to n in an array.
2. Let p equal to 2 the first prime number.
3. Starting from p mark all the numbers which are multiples of p like 2p, 3p, 4p .... xp, such that xp <= n.
4. Then in the next loop print all the unmarked numbers, as these are the numbers which are prime.


## Contributing
