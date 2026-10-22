typedef struct Str {
    int a;
    void *ptr;
} Str;

extern void fn_822315A0(void *p);
extern void fn_82365BD8(void *dst, Str *src);
extern Str *fn_82522588(Str *dst, void *src);
extern void fn_827D9630(void *dst, void *src);
extern void fn_827DEA30(void *p);
extern unsigned int lbl_821CB8C0;

unsigned int *fn_82610A68(char *param_1, void *param_2, int param_3, unsigned int *param_4)
{
    Str *s;
    Str tmp40[2];
    unsigned char tmp30[24];

    fn_827D9630(tmp30, param_2);
    if (param_4 != 0) {
        s = fn_82522588(tmp40, param_1 + 4);
        fn_827DEA30(param_4);
        *param_4 = (unsigned int)&lbl_821CB8C0;
        fn_82365BD8(param_4 + 3, s);
        fn_827D9630(param_4 + 6, tmp30);
        if (s->ptr != 0) {
            fn_822315A0(s->ptr);
        }
        return param_4;
    }
    return 0;
}
