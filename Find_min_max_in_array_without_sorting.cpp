#include <iostream>


using namespace std;

int main()
{
    int mins=64555;

int nums[] ={12,10,7,5,4,1,8,7};
 for(int i=0;i<8;i++)
 {
     for(int j=i;j<8;j++)
     {

            if(mins>nums[j]){
                mins=nums[j];
                break;

            }

     }
 }
 cout<<"MINIMUM : "<<mins<<endl;
 int maxs = 0;
 for(int i=0;i<8;i++)
 {
     for(int j=i;j<8;j++)
     {

            if(maxs<nums[j]){
                maxs=nums[j];
                break;

            }

     }
 }
 cout<<"MAXIMUM: "<<maxs;

}
