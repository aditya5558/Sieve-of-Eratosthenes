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
* To contribute you can read up the CONTRIBUTING.md document, to understand how to contribute to the repository.

* The current repository is maintained by [Aditya Anantharaman](https://github.com/aditya5558/). There are currently 4 implementation that are done.
	* [C](Sieve/Sieve.c)
	* [C++](Sieve/Sieve.cpp)
	* [Java](Sieve/Sieve.java)
	* [Python](Sieve/Sieve.py)

## How to run code?

### C
* Compile the code using the GCC compiler. Then execute the binary file.
```
cd Sieve/
gcc Sieve.c -o sieve
./sieve
```

### C++
* Compile the code using the G++ compiler. Then execute the binary file.
```
cd Sieve/
g++ Sieve.cpp -o sieve
./sieve
```

### Java
* Compile the code using the Java interpreter. Then execute the binary file.
```
cd Sieve/
javac Sieve.java 
java Sieve
```

### Python
* Run the Python program using the Python Program.
```
cd Sieve/
python Sieve.py
```