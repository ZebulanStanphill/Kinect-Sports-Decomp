extern void fn_82BE56C0(void *);
extern void *lbl_8322B228;

int fn_82BE8FB8(void)
{
  if (lbl_8322B228 != 0) {
    fn_82BE56C0(lbl_8322B228);
    lbl_8322B228 = 0;
  }
  return 1;
}
