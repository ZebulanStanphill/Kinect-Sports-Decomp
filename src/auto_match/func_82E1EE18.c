extern int fn_823AA2A8(void *p);
extern void fn_82E1EC90(void *self, int a, int b);
extern void fn_82E21098(void *p);
extern int fn_82E210B0(void *p);
extern void fn_82E21908(void *p, int a, int b, int c);

typedef struct S {
    char pad[9];
    unsigned char enabled;
    char pad2[0x3e];
    void *impl;
} S;

void fn_82E1EE18(S *s, int a, int b, int c)
{
    if (s->enabled) {
        int x;
        fn_82E21098(s->impl);
        fn_82E21908(s->impl, a, b, c);
        x = fn_82E210B0(s->impl);
        fn_82E1EC90(s, fn_823AA2A8(s->impl), x);
    }
}
