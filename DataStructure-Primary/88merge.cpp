//
// Created by xhn on 2022/6/22.
//
#include "quote.h"
#include<algorithm>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        for (const auto &item: nums2){
            nums1[++i]=item;
        }
        std::sort(nums1.begin(), nums1.end());
    }
};