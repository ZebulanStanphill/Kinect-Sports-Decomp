typedef void (*Func_82860120)(void);
typedef struct {
    Func_82860120 f[8];
    int a;
    int b;
} Table_82860120;
extern Table_82860120 lbl_83211630;
extern void fn_8285C220(void);
extern void fn_8285C228(void);
extern void fn_8285C2E8(void);
extern void fn_8285A840(void);
extern void fn_8285AB58(void);
extern void fn_8285A848(void);
extern void fn_8285C5A0(void);
extern void fn_8285E748(void);
void fn_82860120(void)
{
    lbl_83211630.f[0] = fn_8285C220;
    lbl_83211630.f[1] = fn_8285C228;
    lbl_83211630.f[2] = fn_8285C2E8;
    lbl_83211630.f[3] = fn_8285A840;
    lbl_83211630.f[4] = fn_8285AB58;
    lbl_83211630.f[5] = fn_8285A848;
    lbl_83211630.f[6] = fn_8285C5A0;
    lbl_83211630.f[7] = fn_8285E748;
    lbl_83211630.a = 0;
    lbl_83211630.b = 0;
}
