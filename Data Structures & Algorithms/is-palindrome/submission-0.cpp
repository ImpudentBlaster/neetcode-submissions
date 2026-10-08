class Solution {
public:
    bool isPalindrome(string s) {
      int leftPtr = 0;
      int rightPtr = s.length() - 1;

      while(leftPtr < rightPtr){
        char leftCh = s[leftPtr];
        char rightCh = s[rightPtr];

         if (!isalnum(leftCh))
        {
            leftPtr++;
            continue;
        }

        if (!isalnum(rightCh))
        {
            rightPtr--;
            continue;
        }

        if (tolower(leftCh) != tolower(rightCh))
        {
            cout << "not palindrome";
            return false;
        }

        leftPtr++;
        rightPtr--;
      }

      return true;
    }
};