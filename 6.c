 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    int len = strlen(s);
    
    if (numRows == 1 || numRows >= len)
        return s;

    // Allocate memory for result
    char* result = (char*)malloc((len + 1) * sizeof(char));
    
    int cycle = 2 * numRows - 2;
    int index = 0;

    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < len; j += cycle) {
            
            // Vertical element
            result[index++] = s[j];

            // Diagonal element (avoid first & last row)
            int diagonal = j + cycle - 2 * i;
            if (i != 0 && i != numRows - 1 && diagonal < len) {
                result[index++] = s[diagonal];
            }
        }
    }

    result[index] = '\0';
    return result;
}