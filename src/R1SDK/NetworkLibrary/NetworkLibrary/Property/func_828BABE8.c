typedef struct Scope_828BABE8 { int w[6]; } Scope_828BABE8;
typedef struct Prop_828BABE8 Prop_828BABE8;
extern void fn_8251C390(Scope_828BABE8 *s, const char *file, int line);
extern void *fn_8265C9E0(unsigned size);
extern Prop_828BABE8 *fn_828BAA10(void *mem, int a);
extern void fn_828BAB20(void *dst, Prop_828BABE8 *p);
extern void fn_829E53B0(Scope_828BABE8 *s);

void *fn_828BABE8(void *param_1, int param_2)
{
    Scope_828BABE8 s;
    void *mem;
    Prop_828BABE8 *p;

    fn_8251C390(&s, ".\\Property.cpp", 0x6e);
    mem = fn_8265C9E0(0x20);
    if (mem != 0)
        p = fn_828BAA10(mem, param_2);
    else
        p = 0;
    fn_828BAB20(param_1, p);
    fn_829E53B0(&s);
    return param_1;
}
