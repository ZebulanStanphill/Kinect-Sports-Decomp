typedef struct { int a; int b; } Ent_826242F0;
extern Ent_826242F0 lbl_8218DB08[];
extern void fn_82A1EFC0(int *, int, int);

void fn_826242F0(int *p, int idx, int v)
{
    int t = lbl_8218DB08[idx].b - 0xc;
    if (t != 0)
        fn_82A1EFC0(p + 3, 0, t);
    p[0] = idx;
    p[1] = v;
    p[2] = 1;
}
