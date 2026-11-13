typedef void (*Func_828601A0)(void);
typedef struct {
    Func_828601A0 f[8];
    int a;
    int b;
} Table_828601A0;
extern Table_828601A0 lbl_83211630[2];
extern void fn_8285F138(void);
extern void fn_8285FFE0(void);
extern void fn_8285F140(void);
extern void fn_82859E38(void);
extern void fn_8285A100(void);
extern void fn_82859E40(void);
extern void fn_828600A0(void);
extern void fn_8285FDF0(void);
void fn_828601A0(void)
{
    lbl_83211630[1].f[0] = fn_8285F138;
    lbl_83211630[1].f[1] = fn_8285FFE0;
    lbl_83211630[1].f[2] = fn_8285F140;
    lbl_83211630[1].f[3] = fn_82859E38;
    lbl_83211630[1].f[4] = fn_8285A100;
    lbl_83211630[1].f[5] = fn_82859E40;
    lbl_83211630[1].f[6] = fn_828600A0;
    lbl_83211630[1].f[7] = fn_8285FDF0;
    lbl_83211630[1].a = 0;
    lbl_83211630[1].b = 0;
}
