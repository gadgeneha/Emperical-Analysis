#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "radixsort.cpp"
#include "bucketsort.cpp"
#include "countingsort.cpp"
#include "common.h"

using namespace std;

int main(int argc, const char *argv[])
{
    cout << "\nStarting empirical analysis of sorting algorithms ..." << endl;
    cout << "Num of arguments = " << argc - 1 << endl;
    if (argc < 3)
    {
        cout << "Incorrect number of arguments" << endl;
        cout << "Usage: ./sorting.exe counting input6.txt 10" << endl;
        cout << "Usage: ./sorting.exe radix input6.txt [base]" << endl;
        cout << "Usage: ./sorting.exe bucket input6.txt [no of buckets]" << endl;
        return 1;
    }

    // Print algorithm to simulate
    string algorithm(argv[1]);
    
    cout << "Algorithm = " << algorithm << endl;

    if (algorithm != "counting" && algorithm != "radix" && algorithm != "bucket")
    {
        cout << "Incorrect algorithm. Enter correct algorithm : radix, bucket, counting";
        return 1;
    }

    if (algorithm == "counting" && argc != 3)
    {
        cout << "Please enter 2 arguments" << endl;
        cout << "./sorting.exe counting input6.txt" << endl;
        return 1;
    }

    if (algorithm != "counting" && argc != 4)
    {
        cout << "Please enter 3 arguments." << endl;
        return 1;
    }

    // Read input data set
    string input_data(argv[2]);
    cout << "Dataset = " << input_data;
    cout << endl;

    int parameter = 0;
    if (algorithm != "counting")
    {
        string parameters(argv[3]);
        parameter = stoi(parameters);
    }

    //function call to read the input file and convert it to vector
    vector<int> input_array = readFileToVector(input_data);

    // Call sorting function based on input argument and calculate running time
    if (algorithm == "radix")
        radixsort(input_array, parameter);

    else if (algorithm == "bucket")
        bucketsort(input_array, input_array.size(), parameter);

    else if (algorithm == "counting")
        countingsort(input_array);

    return 0;
}