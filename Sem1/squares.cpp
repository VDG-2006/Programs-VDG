#include<iostream>
int main()
{
    int res=0,i,n;
    std::cout << "Enter the size of the array:";
    std::cin >> n;
    std::cout << "Enter the elements of the array:\n";
    int a[n];
    for(i=0;i<n;i++)
    {
        std::cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        res=res+(a[i]*a[i]);
    }
    std::cout << "The sum of squares of the elements of array is ";
    std::cout << res;
}