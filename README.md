## Empirical-Analysis

A C++ based empirical analysis of linear time sorting algorithms : Bucket, Radix and Counting Sort.
Parameters considered :
Radix : Base, 
Bucket: Distribution, 
Counting : Range. 

Aimed at analysing and visualising  propeeties of sorting algorithms. 

## Sorting Algorithms
It analyzes properties of pre-inputted sorting algorithms such as

The state of the sequence:
Sorted, 
Reverse Sorted, 
Unsorted. 
The maximum peak of the sequence i.e. The maximum possible element
The size of the sequence i.e. The no of elements

## Implementation Details
This program can be compiled using the command: g++ -O3 -g main.cpp –o sorting.exe
Run the program by command : 
```
./sorting.exe <algorithm name> <input dataset name> <parameter value if applicable>
```
E.g., 
```
./sorting.exe counting input6.txt
./sorting.exe radix input6.txt 100 
./sorting.exe bucket input6.txt 10
```

Where 100 is base for radix sort and 10 is the number of buckets.

For more details, please refer ProjectReport.pdf
