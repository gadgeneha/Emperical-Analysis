#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#ifndef __COMMON_H__
#define __COMMON_H__

/* This function reads the input file and converts it into vector */

vector<int> readFileToVector(const string &filename)
{
    ifstream source;
    source.open(filename);
    vector<int> lines;
    string line;
    while (getline(source, line))
    {
        // Convert string read from dataset to an integer
        stringstream e(line);
        int number;
        e >> number;
        lines.push_back(number);
    }
    return lines;
}

/* This function reads the vector and writes it into an output file */
void writeFileToVector(const vector<int> v)
{
    ofstream output_file("./output.txt");
    for (const auto &e : v)
        output_file << e << "\n";
}

/* this function prints the vector */

void displayVector(const vector<int> v)
{
    cout << endl;
    for (int i = 0; i < v.size(); ++i)
        cout << v.at(i) << endl;
}

/* this function is to check if input is properly sorted */
bool check(const vector<int> v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        if (v.at(i) > v.at(i + 1))
            return false;
        else
        {
            return true;
            continue;
        }
    }
}

#endif