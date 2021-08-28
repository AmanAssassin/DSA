class Solution {
public:
    int minTimeToType(string word) {
        
        int pointed = 1;
        int a = 0;
        for(int i = 0; i < word.length(); i++){
            int wordn = word[i] - 'a' + 1;
            int getti;
            if(wordn > pointed)
                getti = min(abs(wordn - pointed), abs(26 - wordn + pointed));
            else getti = min(abs(pointed - wordn), abs(26 + wordn - pointed));
            pointed = wordn;
            a = a + getti + 1;
        }
        return a;
        
    }
};