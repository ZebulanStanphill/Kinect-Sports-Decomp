typedef void (*Func_825D9A40)(void);
typedef struct { Func_825D9A40 f[13]; } Table_825D9A40;
extern void fn_82592340(Table_825D9A40 *self);
extern void fn_825D9A28(void);
extern void fn_82D7EA10(void);
extern void fn_82BA02A8(void);
extern void fn_825D9AE0(void);
extern void fn_825D9AD0(void);
extern void fn_825D9AD8(void);
extern Table_825D9A40 lbl_8329E930;
extern unsigned char lbl_8329E964;

Table_825D9A40 *fn_825D9A40(void)
{
  if (!lbl_8329E964) {
    fn_82592340(&lbl_8329E930);
    lbl_8329E930.f[0] = fn_825D9A28;
    lbl_8329E930.f[1] = fn_82D7EA10;
    lbl_8329E930.f[2] = fn_82BA02A8;
    lbl_8329E930.f[3] = fn_825D9AE0;
    lbl_8329E930.f[5] = fn_825D9AD0;
    lbl_8329E930.f[6] = fn_825D9AD8;
    lbl_8329E964 = 1;
  }
  return &lbl_8329E930;
}
