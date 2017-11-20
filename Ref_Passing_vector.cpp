/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 17, 2017, 9:03 AM
 */
#include <std_lib_facilities.h> 

double &comp_vec(vector<double>&v1, vector<double>&v2) 
{
    if (v1.empty() || v2.empty()) 
    {
        error("no possible comparison, a vector is empty.");
    }

    double v1_cnt = 0, v2_cnt = 0; //declare v1 & v2 to hold total additions
    double v1_tot = 0, v2_tot = 0; //declare v1_t and v2_t to hold total avg's.
    double j = 0;                  // j is to hold count for separate vector.    

    if (v2.size() > v1.size());
    {
        for (decltype(v1.size()) i = 0; i != v1.size()
                && j != v2.size(); ++i, ++j) 
        {
            v2_cnt += v2[j];
            v1_cnt += v1[i];

        }
    }
    if (v1.size() > v2.size())
    {
        for (decltype(v2.size()) i = 0; i != v2.size()
                && j != v1.size(); ++i, ++j) 
        {
            v1_cnt += v1[j];
            v2_cnt += v2[i];
        }
    } 
    else
    {
        for (decltype(v1.size()) i = 0; i != v1.size()
                && j != v2.size(); ++i, ++j) 
        {
            v1_cnt += v1[i];
            v2_cnt += v2[j];
        }
    }
    //get avg's form both vectors.
    v1_tot = v1_cnt / v1.size();
    v2_tot = v2_cnt / v2.size();

    //return the vector that has largest avg.
    return v1_tot >= v2_tot ? v1_tot : v2_tot;
}

int main() {
    //random list of numbers for each vector for proofing
    vector<double>list1{100, 100, 50, 11, 10, 80, 90, 10, 200};
    vector<double>list2{1200, 1200, 20, 50.50};
    auto &result = comp_vec(list1, list2);
    
    cout << result << endl;
    return 0;

}

