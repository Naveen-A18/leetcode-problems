int lengthOfLongestSubstring(char* s) {
    int freq[256] = {0};
    int left = 0, right = 0;
    int maxLen = 0;

    while (s[right] != '\0') {
        freq[s[right]]++;

        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }
        int currentLen = right - left + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;

        right++;
    }

    return maxLen;
}

