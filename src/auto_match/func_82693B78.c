
#include <string.h>
extern void *lbl_831E7E64;
extern unsigned fn_82693A98(void *);
extern void *fn_8267B890(void *, unsigned, int);
extern void fn_8267BE38(void *);
extern void fn_826BD6B0(char *, const char *, unsigned);
extern int fn_82F6ADA8(const char *, const char *);
extern int _stricmp_l(const char *, const char *);

int fn_82693B78(char ***self, const char *text, unsigned length, unsigned char ignoreCase)
{
    char a[512], b[512];
    char *left, *right;
    unsigned n;
    int result;
    if (length == -1)
        length = strlen(text);
    n = fn_82693A98(self);
    if (n >= 250)
        left = fn_8267B890(lbl_831E7E64, (n + 1) * 2, 0);
    else
        left = a;
    if (length >= 250)
        right = fn_8267B890(lbl_831E7E64, (length + 1) * 2, 0);
    else
        right = b;
    fn_826BD6B0(left, **self, n);
    fn_826BD6B0(right, text, length);
    if (ignoreCase)
        result = _stricmp_l(left, right);
    else
        result = fn_82F6ADA8(left, right);
    if (left != a)
        fn_8267BE38(left);
    if (right != b)
        fn_8267BE38(right);
    return result;
}
