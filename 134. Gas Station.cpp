class Solution {
public:
    bool isPoss(vector<int>& gas){
        int sum = 0;
        for(int i=0; i<gas.size(); i++){
            sum+=gas[i];
        }
        if(sum<0){
            return false;
        }
        return true;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        vector<int> abc;
        int greter=INT_MIN;
        int pos = 0;
        for(int i=0; i<gas.size(); i++){
            abc.push_back(gas[i]-cost[i]);
            if(greter<gas[i]-cost[i]){
                greter = gas[i]-cost[i];
               
            }
        }
        for(int i=0; i<gas.size(); i++){
            cout<<abc[i]<<" ";
        }

        //when the work is not possible
        if(!isPoss(abc)){
            return -1;
        }
        if(abc.size()==1 )return 0;

        //when the work is posible
        int size = abc.size();
        for(int i=0; i<abc.size(); i++){
            if(abc[i]<=0)continue;

            int sm=0;
            int j=i; int count = abc.size() + 1;
            while(--count){
                j = j%size;
                sm+=abc[j];
                if(sm<0){
                    i=j;
                    break;
                }
                j++;
            }
            if(count==0) return i;

        }
        return -1;
    }
};
