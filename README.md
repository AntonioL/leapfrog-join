# leapfrog-join

This is an implementation of the unary Leapfrog Join proposed in [1] [2].
Leapfrog Join is an algorithm for join queries in database systems.

Recently I had a task which required efficient sorted set intersection and I immediately thought of the Leapfrog Join algorithm.
Here is an implementation of the Leapfrog Join algorithm designed to work with any STL container exhibiting RandomAccessIterators.

It is to be clarified that when I talk about sets in general I talk about sorted collection where each elements appears once.

In general it works with every container exposing value_type and iterator type definitions inside, and most important the iterator must be a random access iterator (as pointed before).

## Reference
[1] Todd L Veldhuizen. Leapfrog triejoin: a worst-case optimal join algorithm. arXiv preprint arXiv:1210.0481, 2012.

[2] Multipredicate Join Algorithms for Accelerating Relational Graph Processing on GPUs https://pdfs.semanticscholar.org/0cbe/1321572bf56a4c44eef91ca10b452bb2915d.pdf (this paper has a compelling example of why binary search is not enough and needs to be paired with an exponential search procedure.
