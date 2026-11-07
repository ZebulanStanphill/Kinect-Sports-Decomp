extern char *fn_82526CC0(char *s, const char *pat);
extern void fn_82526D78(char *s, char *dst, int size, char *start, unsigned int len);
extern void fn_82526DC8(char *src, char *dst, int size, const char *a, const char *b);
extern void fn_8268B8E8(void *out, char *s);
extern void fn_8268BA10(void *out, int *s);
extern char lbl_821AC4B4[];

void fn_826756B8(void *param_1, void *param_2, int *param_3)
{
    char bufA[64];
    char bufB[64];
    char *base;
    char *found;

    if (*param_3 != 1) {
        fn_8268BA10(param_2, param_3 + 1);
    } else {
        base = (char *)(((unsigned int)param_3[1] & ~3u) + 8);
        found = fn_82526CC0(base, "../");
        fn_82526D78(base, bufA, 0x40, found + 3,
                    *(unsigned int *)((unsigned int)param_3[1] & ~3u) & 0x7fffffff);
        fn_82526DC8(bufA, bufB, 0x40, "/", lbl_821AC4B4);
        fn_8268B8E8(param_2, bufB);
    }
}
