/*
Problem:
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1

Solution:
Since XOR of two same numbers is 0 and XOR of a number with 0 is the number itself, we can XOR all the numbers in the array and the result will be the number that appears only once.

Time Complexity: O(n)
Space Complexity: O(1)

*/

#include <bits/stdc++.h>
using namespace std;
 
int findSingle(int ar[], int ar_size)
{
    // Do XOR of all elements and return
    int res = ar[0];
    for (int i = 1; i < ar_size; i++)
        res = res ^ ar[i];
 
    return res;
}

int main(){
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;
    int arr[N];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cout << "The single number is: " << findSingle(arr, N);
    return 0;
}