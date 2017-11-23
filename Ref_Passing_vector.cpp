/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 17, 2017, 9:03 AM
 */
#include <inclds>
#include<exception>
//[i like this equation for a stream of numbers]
//  i / (32 + 7) + 2 + (i * i) / 3 << endl;

void return_some_numbers()
{
    /* 
     * change a few numbers and stuff to get some "random" numbers 
     * to use as testing numbers for the function -
     * "comp_vec(const &vec, const vec&);" 
     * using this to just place into calculator (in linux of course to easily check numbers;
    */
    /*
    for (int i = 0; i != 12; ++i) {
        //cout << i + 0.1 / (32 + 7) + 2.3 + (i * i) / 3.5 << ", ";
        //cout << i + 0.1 / (32 + 7) + 2.3 + (i * i) / 3.5 << " + ";
        //cout << i * i / (32.8 + 7.1) + 2 + (i * i) / 0.2 << ", ";
        cout << i * i / (32.8 + 7.1) + 2 + (i * i) / 0.2 << " + ";
    }
     */
}
//Get two vectors that have > 2 numbers in each vector.
double &comp_vec(const vector<double> &v1, const vector<double> &v2) 
{
    if (v1.empty() || v2.empty() || v1.size() < 2 || v2.size() < 2)
    {
        throw std::runtime_error("EMPTY VECTOR(s) (Both Vectors need"
                " some numerical value), or not correct amount "
                "of numbers to calculate average with. ");
    }
    
    auto j = 0;                     //J is to hold count for separate vector.    
    auto i = 0;                     //same for I as for J :) otherwise division is off
    double v1_cnt = 0, v2_cnt = 0;  //declare v1 & v2 to hold total additions   
    
    //make sure i and j transverse the vector.
    for (i = 0; i != v1.size() && j != v2.size(); ++j, ++i) 
    {
        v1_cnt += v1[i]; // I
        v2_cnt += v2[j]; // J
    }
    //declare v1_t and v2_t to hold total avg's.
    double v1_tot = 0, v2_tot = 0; 
    v1_tot = v1_cnt / i; // I
    v2_tot = v2_cnt / j; // J

    // somewhere between here, and 6 lines of code (up or down) I feel a bug...
    //get avg's form both vectors, return the largest avg...
    return v1_tot > v2_tot ? v1_tot : v2_tot;    
}
int main() 
{
    //random list of numbers for each vector for proofing
    vector< double >list2{2, 7.02506, 22.1003, 47.2256, 82.401, 127.627, 182.902,
        248.228, 323.604, 409.03, 504.506, 910.033, 32.22, 44.11};
    vector< double >list1{2.30256, 3.58828, 5.44542, 7.87399, 10.874, 14.4454,
        18.5883, 23.3026, 28.5883, 34.4454, 40.874, 47.874, 44.5};
    
    double result = comp_vec(list1, list2);
    cout << "Largest avg. between vector1 & vector2: " << result << endl;
    
    return 0;
}
