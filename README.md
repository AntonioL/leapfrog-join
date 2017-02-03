# leapfrog-join

This is an implementation of the unary Leapfrog Join proposed in [1].
Leapfrog Join is an algorithm for join queries in database systems.

Recently I had a task which required efficient sorted set intersection and I immediately thought of the Leapfrog Join algorithm.
Here is an implementation of the Leapfrog Join algorithm designed to work with any STL container exhibiting RandomAccessIterators.

In general it works with every container exposing value_type and iterator type definitions inside.

## Reference
[1] Todd L Veldhuizen. Leapfrog triejoin: a worst-case optimal join algorithm. arXiv preprint arXiv:1210.0481, 2012.
