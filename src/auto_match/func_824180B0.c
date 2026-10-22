extern int fn_822C18B8();
extern int fn_82417FC0();
extern int fn_825354B8();
extern int fn_82536288();

typedef struct Triple { int a; int b; int c; int pad; } Triple;

void fn_824180B0(int *param_1, int *param_2, int param_3, int param_4)
{
    int s50;
    Triple t;

    t.a = 0;
    t.b = 0;
    t.c = 0;
    fn_82417FC0(param_1, &t);
    s50 = *param_2;
    s50 = fn_825354B8(&s50, param_3, 0, **(int **)(*param_1 + 0x2b58), param_4, &t);
    fn_82536288(&s50);
    fn_822C18B8(&t);
}
