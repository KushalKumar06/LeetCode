class Solution {
public:

    bool sameFreq(int arr1[], int arr2[]){
        for(int i = 0 ; i< 26 ; i++){
            if(arr1[i] != arr2[i])
            return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0 ;i< s1.size(); i++){
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.size();

        for(int i = 0 ; i<s2.size(); i++){
            int windIdx = 0;
            int windFreq[26] = {0};
            int idx = i;

            while(windIdx < windSize && idx < s2.size()){
                windFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }

            if(sameFreq(freq, windFreq))
            return true;
        }
        return false;
    }
};