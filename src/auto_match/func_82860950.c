extern void *fn_8305C3F0(void *p);
extern int fn_82860750(char *self, int a, void *b);
extern int fn_82860880(char *self, int a, void *b);

int fn_82860950(char *self, int a, void *b)
{
    if (fn_8305C3F0(self + 0x6c)) {
        return fn_82860880(self, a, b);
    }
    return fn_82860750(self, a, b);
}
