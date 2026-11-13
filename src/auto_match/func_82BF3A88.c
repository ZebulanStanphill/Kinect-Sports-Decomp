typedef struct Guard_82BF3A88 {
    int w[4];
} Guard_82BF3A88;

extern void fn_82BFA8D8(Guard_82BF3A88 *);
extern void fn_82BFABC8(Guard_82BF3A88 *);
extern unsigned fn_82BF3608(char *, unsigned, unsigned);

int fn_82BF3A88(char *s, unsigned a, unsigned b)
{
    Guard_82BF3A88 g;

    fn_82BFA8D8(&g);
    if (s == 0 || *s == 0 || a == 0 || b == 0) {
        fn_82BFABC8(&g);
        return 0;
    }
    if (fn_82BF3608(s, a, b) == 0) {
        fn_82BFABC8(&g);
        return 0;
    }
    fn_82BFABC8(&g);
    return 1;
}
