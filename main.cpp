/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 17, 2017, 9:03 AM
 */
#include"ref-nbr-vec"

double comp_vec(const vector<double> v1, const vector<double> v2) 
{
    if (v1.empty() || v2.empty() || v1.size() < 2 || v2.size() < 2)
    {
        throw std::runtime_error("EMPTY VECTOR(s) (Both Vectors need"
                " some numerical value), or not correct amount "
                "of numbers to calculate average with. ");
    }
    
    auto j = 0;                    //J is to hold count for separate vector.    
    auto i = 0;                    //same for I as for J :) otherwise division is off
    double v1_cnt = 0, v2_cnt = 0; //declare v1 & v2 to hold total additions   

    for (i = 0; i != v1.size() && j != v2.size(); ++j, ++i) 
    {
        v1_cnt +=  v1[i];
        v2_cnt += v2[j];
    }
    double v1_tot = 0, v2_tot = 0; //declare v1_t and v2_t to hold total avg's.
                                   //get avg's form both vectors.
    v1_tot = v1_cnt / i;    //I
    v2_tot = v2_cnt / j;    //J

                                    //return the vector that has largest avg.
    // somewhere between here, and 6 lines of code (up or down) I feel a bug...
    return v1_tot > v2_tot ? v1_tot : v2_tot;
}

int main() 
{
    //random list of numbers for each vector for proofing
    vector< double >list2{32.22, 44.11, 32.5};
    vector< double >list1{2.30256, 44.5, 9.5, 98.8};
    double result = comp_vec(list1, list2);
 
    cout << "Largest avg. between vector1 & vector2: " << result << endl;
    cout << endl;
    return 0;
}
