/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   211113Algorithm.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areggie <areggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:23:25 by areggie           #+#    #+#             */
/*   Updated: 2021/11/13 15:32:20 by areggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://en.cppreference.com/w/cpp/algorithm

In the C++ Standard Library, algorithms are components that perform algorithmic operations on containers and other sequences.[1]

The C++ standard provides some standard algorithms collected in the <algorithm> standard header.[2] A handful of algorithms are also in the <numeric> header. All algorithms are in the std namespace.


Contents
1	Categories of algorithms
2	Examples
3	References
4	External links
Categories of algorithms
The algorithms in the C++ Standard Library can be organized into the following categories.

Non-modifying sequence operations (e.g. find_if, count, search)
Modifying sequence operations (e.g. replace, remove, reverse)
Sorting (e.g. sort, stable_sort, partial_sort)
Binary search (e.g. lower_bound, upper_bound)
Heap (e.g. make_heap, push_heap)
Min/max (e.g. min, max)



Good video about the 105 algorithms:
https://www.youtube.com/watch?v=bFSnXNIsK4A

std::make_heap(begin(numbers), end(numbers)); - makes a heap out of random numbers
numbers.push_back(8.88); adds the number as the last element
std::push_heap(begin(numbers), end(numbers)); adds added element into heap(sorts the heap)
std:pop_heap(begin(numbers), end(numbers)); swaps first and last, makes heap out of everything but not last
numbers.pop_back(); deletes last element
sort -sorts
partial_sort- sorts until some place
nth_element - sorts one element as if everything would have been sorted, left is smaller but not sorted, right is bigger but not sorted
sort_heap - over and over again pop_heap
inplace_merge - two sorted halves into one sorted thing
partition - making two groups(blue, white), booleans
partition_point - where the blue group ends
rotate - takes last element into first place
shuffle - arranges list in random order
next_permutation - reverses sort if is sorted normally, can be used for generating all possible arrangements
prev_permutation - reverses sort to normal if sorted like reversed
reverse - reverses the element collection
Coming up: runes(things you can use for other algorithms)
stable_* (stable_sort, stable_partition) - maybe in the process some of the elements got swapped around, stable keeps them in the same order
is_* (returns true or false) (is_sorted, is_partitioned, is_heap)
is*_until returns an iterator, first postions where that predicate doesn't hold anymore (is_sorted_until, is_partitioned_until, is_heap_until)
count - how many times a value occurs in the collection
accumulate - makes the sum of the collection calling operator plus or any custom funciton you'd pass it
reduce is practically the same as accumulate
transform_reduce takes a fuction and applies it to the collection before occurring accordingly reduce
partial_sum - returns a collection. first one element stays the same, second one is first plus second, third is the first plus second plus third
inclusive_scan is the same thing as partial_sum except it can be run in power parallel
exclusive_scan is the same thing as inclusive scan except it doesn't include the current element (second= first, third=first+second, fourth=first+second+third)
transform versions of these scans take a function apply it to the collection and then perform the includeing stash
inner_product - makes the inner product of the collection which is multiplication of the counterparts elements and then summing that whole thing
adjacent_difference - makes the difference between every two neighbors in the collection
sample - takes a number say n and it produces n element of that collection selected randomly
all_of - takes a collection and returns if all the elements satisfy that predicate, if its empty it's going to be true
any_of returns if at least one satisfies that predicate, if it's empty false
none_of if none satisfies it, if it's empty true
equal - checks whether they have the same contents
is_permanent - checks whether they have the same elements but not necceseraly in the same order
lexicographical_compare - checks which one is longer from the alphabet perspective
mismatch - first postion when differ
Searching a value:
not sorted:
find - find a value
adjacent_find - where two adjacent value occur
sorted:
equal_range - equal elements
lower_bound, upper_bound - start and end of the equal range
binary_search - checks whether it exists, but doesn't give  where
search - finds sub range in range
find_end = finds where sub-range appears in range for the last time
find_first_of -  find the first occurence of the sub_range
max_elements, min_element (of range) minmax_elements returns a pair of iterators
set_difference - returns the elements in the first one set but not the second one
set_intersection - returns elements that are both in a andb
set_union - returns element that are in set a or in set b
set_symmetric_difference - returns the elements that are in a but not in b and that are in b but not in a
std::includes checks whether all elements in b are in a 
std::merge - takes two sorted collections and puts them together into one big sorted collection
std::copy(first, last, out) - takes a collection and a output iterator of a second collection, copies every element of the first colleciton
uhh, got tired just find everything here: http://www.cplusplus.com/reference/algorithm/




Here's almost all code that was in the talk
// Heaps
    //std::make_heap(begin(numbers), end(numbers))
    //to insert antthing in a heap
    //std::push_heap(begin(numbers), end(numbers))
    //for removing
    //std::pop_heap(begin(numbers), end(numbers))
    //sorting
    //std::pop_heap
    //numbers.pop_back()

    // Sorting
    //sort
    //partial sort
    //nth_element
    //sort_heap
    //inplace_merge (incremental stages of a merge sort)

    //partitioning
    //partitions into halves
    //partition point

    //permetuatuons
    //rotate
    //shuffle
    //next_permutation
    //prev_permutation
    //reverse

    //secretRunes
    //stable_sort
    //stable_partition
    //is_sorted
    //is_partitioned
    //is_heap
    //is_*_until

    //Numeric
    //count
    //accumulate or reduce
    //inner_product
    //adjacent_difference
    //partial_sum(inclusive and exclusive)
    //adjacent difference
    //sample

    //quering on a range
    //all_of
    //any_of
    //none_of

    //quering on two ranges
    //equal is_permutation
    //lexicographic_compare
    //mismatch first position they messup the range
    
    //searching
    //->for sorted
    //binary search
    //equal_range
    //lower_bound
    //upper_bound
    //->not sorted
    //find
    //adjacent_find 

    //searching for a range
    //search
    //find_end
    //find_first_of
    
    //max_element
    //min_element
    //maxmin element

    //Algos_on_sets
    //set_difference
    //set_intersection
    //set_union
    //set_symmetric_difference
    //includes
    //merge

    //Movers
    //copy
    //move
    //copy_backwards
    //move_backwards

    //Value_modifiers
    //fill
    //generate
    //iota (increments)
    //replace

    //Structure_Changes
    //remove + erase
    //unique (removes adjacent)
    //remove_copy
    //unique_copy
    //reverse_copy
    //rotate_copy
    //rotate_copy
    //replace_copy
    //partition_copy
    //partial_sort_copy
    //find_if
    //find_if_not
    //count_if
    //remove_if
    //remove_copy_if
    //replace_if
    //replace_copy_if
    //copy_if

    //lonely_islands
    //transform ( can also take 2 parameters)
    //for_each 

    //Raw_memory
    //uninitialized _fill
    //              _copy
    //              _move
    //destroy
    // *_n takes size instead of end
    //back_inserted

*/