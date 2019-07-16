## Empirical-Analysis of Linear Time Sorting Algorithms

This project is empirical analysis of linear time sorting algorithms : Bucket, Radix and Counting Sort Algorithm.
Various parameters are considered while comparing each algorithm individually. 
Base for radix sort, distribution for bucket, and range for counting sort are varied and their individual performance is studied by 
changing the above parameters.

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
