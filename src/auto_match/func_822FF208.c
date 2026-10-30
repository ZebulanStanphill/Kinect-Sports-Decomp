typedef struct Str_822FF208 { char b[0x20]; } Str_822FF208;
typedef struct Out_822FF208 { unsigned int *base; unsigned int *p; } Out_822FF208;
extern void fn_82230110(Str_822FF208 *s, const char *c);
extern void fn_82230300(Str_822FF208 *s, int a, int b);
extern void fn_823018E8(unsigned int *o, Str_822FF208 *s1, unsigned int a, Str_822FF208 *s2, unsigned int b);
extern unsigned int *fn_8265C9E0(unsigned int n);
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821AECCC;

Out_822FF208 *fn_822FF208(Out_822FF208 *out, unsigned int p2, unsigned int p3)
{
    unsigned int *p, *q;
    Str_822FF208 s2, s1;
    p = fn_8265C9E0(0x1f0);
    if (p != 0) { p[1] = 1; *p = (unsigned int)&lbl_821A8D8C; p[2] = 1; q = p + 4; if (q != 0) { fn_82230110(&s2, "challenge_locomotion"); fn_82230110(&s1, "challenge_locomotion"); fn_823018E8(q, &s1, p2, &s2, p3); fn_82230300(&s1, 1, 0); fn_82230300(&s2, 1, 0); *q = (unsigned int)&lbl_821AECCC; } } else { p = 0; }

    out->p = p;
    out->base = p + 4;
    return out;
}
