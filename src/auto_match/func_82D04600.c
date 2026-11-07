typedef struct Str_82D04600 {
    char *data;
    int length;
} Str_82D04600;

extern int fn_82CFBE40(const char *s);

int fn_82D04600(Str_82D04600 *str, const char *suffix)
{
    int n = fn_82CFBE40(suffix);
    int start;
    int i;
    if (n > str->length - 1)
        return 0;
    start = str->length - n - 1;
    for (i = 0; i < n; i++) {
        char a = str->data[start + i];
        int b;
        int la = (a >= 0x41 && a <= 0x5a) ? a + 0x20 : a;
        b = suffix[i];
        if (b >= 0x41 && b <= 0x5a)
            b += 0x20;
        if ((char)la != (char)b)
            return 0;
    }
    return 1;
}
