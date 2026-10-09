class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {
        const createKey = (str) => {
            const freq = [];

            for (let i = 0; i < 26; i++) {
                freq[i] = 0;
            }

            const alphabets = "abcdefghijklmnopqrstuvwxyz";

            for (let i = 0; i < str.length; i++) {
                const char = str[i];

                for (let j = 0; j < alphabets.length; j++) {
                    if (alphabets[j] === char) {
                        freq[j]++;
                        break;
                    }
                }
            }
            let key = "";
            for (let i = 0; i < 26; i++) {
                key += freq[i];

                if (i < 25) {
                    key += "#";
                }
            }

            return key;
        };

        const obj = {};
        for(const str of strs) {
            const key = createKey(str);

                if (obj[key]) {
      obj[key] = [...obj[key], str];
    } else {
      obj[key] = [str];
    }
        }

        return Object.keys(obj).map((key) => obj[key]);
    }
}
