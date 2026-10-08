class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        const obj1 = {};
        const obj2 = {};

         if (s.length !== t.length) {
    return false;
  }

    for (let i = 0; i < s.length; i++) {
    obj1[s[i]] ? obj1[s[i]]++ : (obj1[s[i]] = 1);
    obj2[t[i]] ? obj2[t[i]]++ : (obj2[t[i]] = 1);
  }

  for (const val of Object.keys(obj1)) {
    if (obj1[val] !== obj2[val]) {
      return false;
    }
  }

  return true;

    }
}
