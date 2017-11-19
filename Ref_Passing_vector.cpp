/* Author: sean
 * Read 'till you can't. Then write it 'till
 * you can. this is a language, and i will make many mistakes :)
 * It's a language and I will make many mistakes, -
 * it's natural to get flustered and want to quit C++ forever - 
 * Created on November 17, 2017, 9:03 AM
 */
#include "inclds"


//Compare_vectors, Get the return type double for vector with largest avg.
double &comp_vec(vector<double> &v1, vector<double> &v2)
{
            /*  
                This function assumes that a Vector is not empty, (for now, i'll fix it soon)
                no real error checking in the logic statments. So, know that going in
           */
    
    double v1_cnt = 0, v2_cnt = 0;      //For the addition of vector  
    double v1_tot = 0, v2_tot = 0;      //Holds the results of the avg (Totals)
    auto j = 0;                         //subscript for the smaller vector
    
    //To handle Vectors of differnt sizes.
    if (v1.size() > v2.size()) 
    {
        for (decltype(v1.size()) i = 0; i != v1.size(); ++i, ++j) 
        {
            v1_cnt += v1[i];
            v2_cnt += v2[j];
        }
    }
    else if (v2.size() > v1.size()) 
    {
        for (decltype(v2.size()) i = 0; i != v2.size(); ++i, ++j)
        {
            v1_cnt += v1[j];
            v2_cnt += v2[i];
        }
    }
    //If vectors are the same size
    else 
    {
        for (decltype(v1.size()) i = 0; i != v1.size(); ++i) 
        {
            v1_cnt += v1[i];
            v2_cnt += v2[i];
        }
    }
    //avg's both vectors.
    v1_tot = v1_cnt / v1.size();
    v2_tot = v2_cnt / v2.size();

    //return the vector that has largest avg.
    return v1_tot >= v2_tot ? v1_tot : v2_tot;
}
int main()
{
    //random list of numbers for each vector for proofing
    vector<double>list1{7.57, 45};
    vector<double>list2{45.5, 8.5};
    // this line was written this way just cause. this was unnessassary 
    //in all regards .... for what I want the program to do. 
    double &result = comp_vec(list1, list2);
    cout << result << endl;
`   return 0;    
}

