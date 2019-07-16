#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <chrono>

#include "common.h"


using namespace std;
using namespace std ::chrono;

void countingsort(vector<int> &array, int base, int digit)
{
    vector<int> freq(base, 0);

    for (auto v : array)
        ++freq[static_cast<int>(v / pow(base, digit)) % base];

    int total = 0; 
    for (int i = 0; i < base; ++i)
    {
        int oldCount = freq[i];
        freq[i] = total;
        total = total + oldCount;
    }

    vector<int> output(array.size());

    for (int i = 0; i < static_cast<int>(array.size()); ++i)
    {
        output[freq[static_cast<int>(array[i] / pow(base, digit)) % base]] = array[i];
        ++freq[static_cast<int>(array[i] / pow(base, digit)) % base];
    }

    array = move(output);
}
int radixsort(vector<int> arr, int base)
{

    auto start = high_resolution_clock::now();

    //calculate range dynamically
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min;

    const int digits = static_cast<int>(ceil(log10(range) / log10(base)));
    for (int i = 0; i < digits; ++i)
        countingsort(arr, base, i);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time taken by Radixsort: " << duration.count() << " milliseconds" << endl;

    //check if array is sorted
    if (check(arr) == true)
        cout << "\nArray sorted succesfully. Check output file";
    else
    {
        cout << "Array not sorted. Exiting program";
        exit(1);
    }

    //write sorted array to file
    writeFileToVector(arr);
    
    return 0;
}