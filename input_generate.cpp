#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, const char *argv[])
{

    //generate file with 100 random numbers
    ofstream input_file2("./input2.txt");
    for (int i = 0; i < 100; i++)
        {
           input_file2 << rand()%100 << "\n";
        }

    //generate file with 1000 random numbers
    ofstream input_file3("./input3.txt");
    for (int i = 0; i < 1000; i++)
        {
           input_file3 << rand()%1000 << "\n";
        }

    //generate file with 10000 random numbers
    ofstream input_file4("./input4.txt");
    for (int i = 0; i < 10000; i++)
        {
           input_file4 << rand()%10000 << "\n";
        }
    
    
    //generate file with 100K random numbers
    ofstream input_file5("./input5.txt");
    for (int i = 0; i < 100000; i++)
        {
           input_file5 << rand()%100000 << "\n";
        }

    //generate file with 1M random numbers
    ofstream input_file6("./input6.txt");
    for (int i = 0; i < 1000000; i++)
        {
           input_file6 << rand()%1000000 << "\n";
        }
    
    //generate file with 10M random numbers
    ofstream input_file7("./input7.txt");
    for (int i = 0; i < 10000000; i++)
        {
           input_file7 << rand()%10000000 << "\n";
        }
    
    //generate file with 20M random numbers
    ofstream input_file8("./input8.txt");
    for (int i = 0; i < 20000000; i++)
        {
           input_file8 << rand()%20000000 << "\n";
        }

    //generate file with 10M numbers of range 0-1K
    ofstream input_file9("./input9.txt");
    for (int i = 0; i < 10000000; i++)
        {
           input_file9 << rand()%1000 << "\n";
        }
    

    //generate file with 10M numbers of range 0-10K
    ofstream input_file10("./input10.txt");
    for (int i = 0; i < 10000000; i++)
        {
           input_file10 << rand()%10000 << "\n";
        }
    
    //generate file with 10M constatn numbers
    ofstream input_file11("./input11.txt");
    for (int i = 0; i < 10000000; i++)
        {
           input_file11 << 101 << "\n";
        }
 
    //generate file with 10M descending numbers
    ofstream input_file12("./input12.txt");
    for (int i = 0; i < 10000000; i++)
        {
           input_file12 << 10000000 - i << "\n";
        }
 
    return 0;
}