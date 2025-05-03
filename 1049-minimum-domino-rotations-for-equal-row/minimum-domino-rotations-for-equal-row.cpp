class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int topdom[7]={0},botdom[7]={0},sum[7]={0};
        int len=tops.size();
        int flag=0, top=-1, bottom=-1;
        for(int i=0;i<len;i++){
            topdom[tops[i]]++;
            botdom[bottoms[i]]++;
            if(tops[i]!=bottoms[i]){
                sum[tops[i]]++;
                sum[bottoms[i]]++;
            }
            else{
                sum[tops[i]]++;
            }
            if(sum[tops[i]]==len && sum[bottoms[i]]==len){
                flag=3;
                top=tops[i];
                bottom=bottoms[i];
            }
            else if(sum[tops[i]]==len){
                flag=1;
                top=tops[i];
            }
            else if(sum[bottoms[i]]==len){
                flag=2;
                bottom=bottoms[i];
            }
            //cout<<sum[2];
        }
        if(flag==3){
            return len-max(max(topdom[top],botdom[top]), max(topdom[bottom],botdom[bottom]));
        }
        else if(flag==1){
            return len-max(topdom[top],botdom[top]);
        }
        else if(flag==2){
            return len-max(topdom[bottom],botdom[bottom]);
        }
        // for(int i=0;i<7;i++){
        //     cout<<topdom[i]<<","<<botdom[i]<<","<<sum[i]<<";"<<endl;
        // }
        return -1;
    }
};