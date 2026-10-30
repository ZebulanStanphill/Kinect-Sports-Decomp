extern unsigned int strlen(const char *s);

int fn_8257A580(char *s)
{
    unsigned int len, start, end, n, k, l0;
    len = strlen(s); if (len == 0) return 0; start = 0; end = len - 1;
for (; start < len; start++) { if (s[start] != ' ' && s[start] != '\t') break; }

    while (end != 0 && (s[end] == ' ' || s[end] == '\t'))
        end--;
    if (start > end) {
        s[0] = '\0';
        return 0;
    }
    n = end - start + 1;
    if (start != 0) {
        unsigned int i = 0;
        for (k = n; k != 0; k--) {
            s[i] = s[i + start];
            i++;
        }
    }
    s[n] = '\0';
    return n;
}
