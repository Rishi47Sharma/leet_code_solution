class Solution {
public:
   int steps=0;
    int numberOfSteps(int num) {
        if(num==0){
            return steps;
        }
        if(num%2==0)
        {
            steps++;
            return numberOfSteps(num/2);
        }
         steps++;
            return numberOfSteps(num-1);
       
        
        
    }
};
