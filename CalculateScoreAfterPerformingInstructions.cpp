class Solution {
public:
    long long calculateScore(vector<string>& ins, vector<int>& v) {
        long long score=0;
        int n=v.size();
        int m=ins.size();
        for(int i=0;i<m and i>=0;){
            if(ins[i]=="add"){
                score+=v[i];
                ins[i]="done";
                i++;
            }
            else if(ins[i]=="jump"){
                ins[i]="done";
                i+=v[i];
            }
            else if(ins[i]=="done") break;
        }
        return score;
    }
};