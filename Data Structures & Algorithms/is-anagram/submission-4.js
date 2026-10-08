class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        if(s.length !== t.length){
            return false;
        }

        const hash = {};

        for(const char of s){
            if(hash[char]){
              hash[char]++;
            }else {
                hash[char] = 1;
            }
        }

          for(const char of t){
            if(hash[char]){
              hash[char]--;
            }else {
                hash[char] = 1;
            }
        }

        for(const key in hash){
            if(hash[key] !== 0){
                return false;
            }
        }

        return true;

    }
}
