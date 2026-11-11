typedef void (*Func_824FB3C8)(void);
typedef struct { Func_824FB3C8 f[11]; } Table_824FB3C8;
extern void fn_82591810(Table_824FB3C8 *self);
extern void fn_824FB3B0(void);
extern void fn_824FB450(void);
extern void fn_824FB4B0(void);
extern void fn_824FB4F8(void);
extern void fn_824FB8C0(void);
extern Table_824FB3C8 lbl_8329E444;
extern unsigned char lbl_8329E470;

Table_824FB3C8 *fn_824FB3C8(void)
{
  if (!lbl_8329E470) {
    fn_82591810(&lbl_8329E444);
    lbl_8329E444.f[0] = fn_824FB3B0;
    lbl_8329E444.f[1] = fn_824FB450;
    lbl_8329E444.f[2] = fn_824FB4B0;
    lbl_8329E444.f[3] = fn_824FB4F8;
    lbl_8329E444.f[5] = fn_824FB8C0;
    lbl_8329E470 = 1;
  }
  return &lbl_8329E444;
}
