class Solution {
public:

    // Reverse characters from index l to r
    void reversepart(string &s, int l, int r) {
        while (l < r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }

    string reverseWords(string s) {

        int n = s.size();

        // Step 1: Reverse the entire string
        // Example:
        // "the sky is blue"
        // becomes
        // "eulb si yks eht"
        reversepart(s, 0, n - 1);

        int start = 0;
        int end = 0;

        // Step 2: Reverse each individual word
        while (start < n) {

            // Skip spaces to reach the beginning of a word
            while (start < n && s[start] == ' ')
                start++;

            // No more words left
            if (start >= n)
                break;

            // Find where the current word ends
            end = start;
            while (end < n && s[end] != ' ')
                end++;

            // Reverse the current word
            // Example:
            // "eulb" -> "blue"
            reversepart(s, start, end - 1);

            // Move to the next word
            start = end;
        }

        // Step 3: Remove extra spaces
        string ans = "";
        int i = 0;

        while (i < n) {

            // Skip leading or multiple spaces
            while (i < n && s[i] == ' ')
                i++;

            // Copy the current word into answer
            while (i < n && s[i] != ' ') {
                ans += s[i];
                i++;
            }

            // Skip all spaces after the word
            while (i < n && s[i] == ' ')
                i++;

            // If another word exists, add exactly one space
            if (i<n)
                ans += ' ';
        }

        return ans;
    }
};