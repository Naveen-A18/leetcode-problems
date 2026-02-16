#include <limits.h>

double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) 
{
    // Ensure nums1 is smaller array
    if (m > n) 
        return findMedianSortedArrays(nums2, n, nums1, m);

    int low = 0, high = m;
