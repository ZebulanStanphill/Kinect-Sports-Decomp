typedef void (*Func_825E4848)(void);
typedef struct { Func_825E4848 f[11]; } Table_825E4848;
extern void fn_82591810(Table_825E4848 *self);
extern void fn_825E4830(void);
extern void fn_82D7EA10(void);
extern void fn_82BA02A8(void);
extern void fn_825E48D0(void);
extern void fn_824FB8C0(void);
extern Table_825E4848 lbl_83298FE4;
extern unsigned char lbl_83299010;

Table_825E4848 *fn_825E4848(void)
{
  if (!lbl_83299010) {
    fn_82591810(&lbl_83298FE4);
    lbl_83298FE4.f[0] = fn_825E4830;
    lbl_83298FE4.f[1] = fn_82D7EA10;
    lbl_83298FE4.f[2] = fn_82BA02A8;
    lbl_83298FE4.f[3] = fn_825E48D0;
    lbl_83298FE4.f[5] = fn_824FB8C0;
    lbl_83299010 = 1;
  }
  return &lbl_83298FE4;
}
