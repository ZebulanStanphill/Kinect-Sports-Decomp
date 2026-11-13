typedef void (*Func_82501348)(void);
typedef struct { Func_82501348 f[13]; } Table_82501348;
extern void fn_82592340(Table_82501348 *self);
extern void fn_82501330(void);
extern void fn_82501AE0(void);
extern void fn_82501CC8(void);
extern void fn_825021E0(void);
extern void fn_82502040(void);
extern Table_82501348 lbl_8329E698;
extern unsigned char lbl_8329E6CC;

Table_82501348 *fn_82501348(void)
{
  if (!lbl_8329E6CC) {
    fn_82592340(&lbl_8329E698);
    lbl_8329E698.f[0] = fn_82501330;
    lbl_8329E698.f[1] = fn_82501AE0;
    lbl_8329E698.f[2] = fn_82501CC8;
    lbl_8329E698.f[3] = fn_825021E0;
    lbl_8329E698.f[5] = fn_82502040;
    lbl_8329E6CC = 1;
  }
  return &lbl_8329E698;
}
