typedef void (*Func_824FD1F0)(void);
typedef struct { Func_824FD1F0 f[13]; } Table_824FD1F0;
extern void fn_82592340(Table_824FD1F0 *self);
extern void fn_824FD1D8(void);
extern void fn_824FD278(void);
extern void fn_824FD3D0(void);
extern void fn_824FD748(void);
extern void fn_824FD570(void);
extern Table_824FD1F0 lbl_8329E740;
extern unsigned char lbl_8329E774;

Table_824FD1F0 *fn_824FD1F0(void)
{
  if (!lbl_8329E774) {
    fn_82592340(&lbl_8329E740);
    lbl_8329E740.f[0] = fn_824FD1D8;
    lbl_8329E740.f[1] = fn_824FD278;
    lbl_8329E740.f[2] = fn_824FD3D0;
    lbl_8329E740.f[3] = fn_824FD748;
    lbl_8329E740.f[5] = fn_824FD570;
    lbl_8329E774 = 1;
  }
  return &lbl_8329E740;
}
