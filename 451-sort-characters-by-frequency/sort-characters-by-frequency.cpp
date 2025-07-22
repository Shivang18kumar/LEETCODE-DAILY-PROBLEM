class Solution {
public:
    typedef pair<char, int> P;

    string frequencySort(string s) {
        // Step 1: Count frequency using array
        int freq[128] = {0}; // Supports all ASCII chars
        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Store non-zero frequencies in a vector of pairs
        vector<P> vec;
        for (int i = 0; i < 128; ++i) {
            if (freq[i] > 0) {
                vec.push_back({(char)i, freq[i]});
            }
        }

        // Step 3: Sort by frequency in descending order
        sort(vec.begin(), vec.end(), [](P &a, P &b) {
            return a.second > b.second;
        });

        // Step 4: Build the result string
        string result = "";
        for (auto &p : vec) {
            result += string(p.second, p.first);
        }

        return result;
    }
};
