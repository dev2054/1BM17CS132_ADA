#include<iostream>
using namespace std; 
  
         
int floorSqroot(int x)  
{     
   
    if (x == 0 || x == 1)  
       return x; 
  
    int beg = 1, end = x, ans;    
    while (beg <= end)  
    {         
        int mid = (beg+ end) / 2; 
  
       
        if (mid*mid == x) 
            return mid; 
   
        
        if (mid*mid < x)  
        { 
            beg = mid + 1; 
            ans = mid; 
        }  
        else 
            end = mid-1;         
    } 
    return ans; 
} 
   

int main()  
{      
    int x;
	cout<<"enter the value of x";
	cin>>x;
    cout << floorSqroot(x) << endl; 
    return 0;    
} 