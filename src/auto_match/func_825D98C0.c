typedef void (*Func_825D98C0)(void);
typedef struct { Func_825D98C0 f[12]; } Table_825D98C0;
extern Table_825D98C0 lbl_83299014;
extern unsigned char lbl_83299044;
extern void fn_825D98A8(void);
extern void fn_82D7EA10(void);
extern void fn_82BA02A8(void);

Table_825D98C0 *fn_825D98C0(void)
{
  Table_825D98C0 *t = &lbl_83299014;
  if (lbl_83299044 == 0) {
    t->f[3] = fn_82BA02A8;
    t->f[0] = fn_825D98A8;
    t->f[1] = fn_82D7EA10;
    t->f[2] = fn_82BA02A8;
    t->f[6] = fn_82BA02A8;
    t->f[5] = fn_82BA02A8;
    t->f[7] = fn_82BA02A8;
    t->f[8] = fn_82BA02A8;
    t->f[9] = fn_82BA02A8;
    t->f[10] = fn_82BA02A8;
    t->f[11] = fn_82BA02A8;
    lbl_83299044 = 1;
  }
  return t;
}
