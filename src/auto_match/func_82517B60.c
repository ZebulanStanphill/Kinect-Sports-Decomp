typedef struct {
    int *os;
    unsigned char ok;
} Sentry;

extern void fn_8223FD30(Sentry *s, int *os);
extern void fn_8223FE60(Sentry *s);
extern int fn_8223FFB8(void *buf, int c);
extern void fn_82240070(char *ios, int state, int reraise);

int *fn_82517B60(int *param_1, int param_2)
{
    int state;
    char *ios;
    int st;
    Sentry s;

    state = 0;
    fn_8223FD30(&s, param_1);
    if (!s.ok || fn_8223FFB8(*(void **)((char *)param_1 + *(int *)(*param_1 + 4) + 0x38), param_2) == -1) {
        state = 4;
    }
    ios = (char *)param_1 + *(int *)(*param_1 + 4);
    if (state != 0) {
        st = *(int *)(ios + 0xc) | state;
        fn_82240070(ios, *(void **)(ios + 0x38) == 0 ? st | 4 : st, 0);
    }
    fn_8223FE60(&s);
    return param_1;
}
