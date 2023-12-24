# chapter 1

this chapter talks about big O notation and how to calculate it.
and the binary search algorithm.

## big O notation
there are 7 main types of big O notation:

1. O(1) - constant time
2. O(log(n)) - logarithmic time
3. O(n) - linear time
4. O(n log(n)) - linearithmic time
5. O(n^2) - quadratic time
6. O(n!) - factorial time
7. O(n^n) - exponential time

## EXERCISES

**1.1** - log(128) = 7
**1.2** - log(256) = 8

**1.3** given a name in a phone book, which is sorted alphabetically, finding the phone number with the binary search algorithm is O(log(n)).

**1.4** phone numbers aren't sorted in a phone book, so we have to search one by one which is O(n).

**1.5** reading the phone numbers in a phone book is O(n) because we have to look one by one.

**1.6** reading the phone numbers of just the A's in a phone book still will be looking one by one in every name so the time complexity is O(n). 

# The traveling salesperson

this is a famous problem in computer science. it's about a salesperson who wants to visit a number of cities and return to the city he started from. the problem is to find the shortest possible route that visits every city exactly once and returns to the origin city.

this problem has a time complexity of O(n!) which is factorial time. 
for example, if we have 4 cities, the time complexity will be 4! = 4 * 3 * 2 * 1 = 24.
if we take 64 cities, the time complexity will be 64! = 126886932185884164103433389335161480802865516174545192198801894375214704230400000000000000

that is alot!!

