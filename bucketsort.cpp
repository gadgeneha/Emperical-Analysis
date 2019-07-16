#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <bits/stdc++.h>
#include <iterator>
#include <chrono>

#include "common.h"

using namespace std;
using namespace std ::chrono;

void bucketsort(vector<int> arr, int size, int bucket)
{
    int max, divider, i, j, k;

    auto start = high_resolution_clock::now();
    //create a vector of 10 buckets
    vector<int> B[bucket];

    //find divider which is used to put the elements in bucket
    max = *max_element(arr.begin(), arr.end());
    divider = ceil(float(max + 1) / bucket);

    //insert element into correct bucket denoted by j
    for (i = 0; i < size; i++)
    {
        j = floor(arr[i] / divider);
        B[j].push_back(arr[i]);
    }

    //sort elements in the buckets
    for (i = 0; i < bucket; i++)
    {
        sort(B[i].begin(), B[i].end());
    }

    //append back the elements from the buckets
    k = 0;
    for (i = 0; i < bucket; i++)
    {
        for (j = 0; j < B[i].size(); j++)
        {
            arr[k++] = B[i][j];
        }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by BucketSort: " << duration.count() << " milliseconds" << endl;

//check if array is sorted
    if (check(arr) == true)
        cout << "Array sorted succesfully. Check output file";
    else
    {
        cout << "Array not sorted. Exiting program";
        exit(1);
    }

    //write sorted array to file
    writeFileToVector(arr);
}