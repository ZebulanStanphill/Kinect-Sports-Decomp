typedef void (*Func_824FBD80)(void);
typedef struct { Func_824FBD80 f[13]; } Table_824FBD80;
extern void fn_82592340(Table_824FBD80 *self);
extern void fn_824FBD68(void);
extern void fn_824FBE08(void);
extern void fn_82BA02A8(void);
extern void fn_824FBF50(void);
extern void fn_824FBEB8(void);
extern Table_824FBD80 lbl_8329E7B0;
extern unsigned char lbl_8329E7E4;

Table_824FBD80 *fn_824FBD80(void)
{
  if (!lbl_8329E7E4) {
    fn_82592340(&lbl_8329E7B0);
    lbl_8329E7B0.f[0] = fn_824FBD68;
    lbl_8329E7B0.f[1] = fn_824FBE08;
    lbl_8329E7B0.f[2] = fn_82BA02A8;
    lbl_8329E7B0.f[3] = fn_824FBF50;
    lbl_8329E7B0.f[5] = fn_824FBEB8;
    lbl_8329E7E4 = 1;
  }
  return &lbl_8329E7B0;
}
