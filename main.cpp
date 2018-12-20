#include<iostream>
#include<vector>
#include<algorithm>


int main()
{
    std::vector<int> v{5,8,1,6,9,11,28,0,1,11};

    // Print unsorted
    for(auto & n : v)
    {
        std::cout << n << ", ";
    }
    // Sort using STL sort
    //std::sort(v.begin(),v.end());
    // Sort part of vector
    //std::partial_sort(v.begin(), v.begin() + 4, v.end());
    
    std::stable_sort(v.begin(), v.end());
    // Print newline
    std::cout << "\n";
    // Print sorted
    for(auto & n : v)
    {
        std::cout << n << ", ";
    }

    getchar();
}