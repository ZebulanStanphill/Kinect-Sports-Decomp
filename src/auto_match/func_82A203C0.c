#include <string.h>
extern int tolower(int c);
extern int fn_82A20370(const char **cursor, unsigned int *remaining, char delimiter);

int fn_82A203C0(const char *pattern, unsigned int patternLength, const char *text, unsigned int textLength)
{
    const char *end;
    char c;
    char t;

    if (patternLength == 0) {
        patternLength = strlen(pattern);
    }
    end = pattern + patternLength;
    while (pattern < end) {
        c = *pattern++;
        if (c == '*') {
            if (pattern == end) {
                return 1;
            }
            if (*pattern++ != '.') {
                return 0;
            }
            if (fn_82A20370(&text, &textLength, '.') == 0) {
                return 0;
            }
        } else {
            if (textLength == 0) {
                return 0;
            }
            t = *text++;
            textLength--;
            if (c != '?' && tolower(t) != tolower(c)) {
                return 0;
            }
        }
    }
    return textLength == 0;
}
