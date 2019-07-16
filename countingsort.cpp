#include <iostream>
#include <vector>
#include <map>
#include <chrono>

#include "common.h"

using namespace std;
using namespace std ::chrono;


void countingsort(vector<int> &arr)
{
    auto start = high_resolution_clock::now();
    /* create an empty map to store frequency of array elements */
    std::map<int, int> freq;

    /* store distinct values in the input array as key and 
	 their respective counts as values  */
    for (int i = 0; i < arr.size(); i++)
    {
        freq[arr.at(i)]++;
    }

    /* traverse the map and overwrite the input array with sorted elements
	(map will iterate based on the sorted order of keys) */
    int i = 0;
    for (auto it : freq)
    {
        while (it.second--)
        {
            arr[i++] = it.first;
        }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by Countingsort: " << duration.count() << " milliseconds" << endl;

    //check if array is sorted
    if (check(arr) == true)
        cout << "Array sorted succesfully. Check output file";
    else
    {
        cout << "Array not sorted. Exiting program";
        exit(1);
    }

     /* write sorted array to file */
    writeFileToVector(arr);

}