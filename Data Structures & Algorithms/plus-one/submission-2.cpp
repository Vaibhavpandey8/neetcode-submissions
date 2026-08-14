class Solution { 
public: 
    vector<int> plusOne(vector<int>& digits) { 
        vector<int> res; 
        int dsize = digits.size() - 1; 
        
        if(digits[dsize] < 9){ 
            digits[dsize]++; 
            for(int i = 0; i < dsize + 1; i++){ 
                res.push_back(digits[i]); 
            } 
        }
        else {
            for(int i = dsize; i >= 0; i--){ 
                if(digits[i] < 9){ 
                    digits[i]++; 
                    break; 
                }
                digits[i] = 0;
            }

            // Agar first digit bhi 9 tha
            if(digits[0] == 0){
                res.push_back(1);
            }

            for(int i = 0; i < dsize + 1; i++){ 
                res.push_back(digits[i]); 
            }
        }

        return res; 
    } 
};