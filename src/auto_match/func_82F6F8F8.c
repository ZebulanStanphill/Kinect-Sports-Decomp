extern void fn_82F719E0(void);
extern int KeTlsFree(unsigned int index);
extern int lbl_831BB900;

void fn_82F6F8F8(void)
{
  if (lbl_831BB900 != -1) {
    KeTlsFree(lbl_831BB900);
    lbl_831BB900 = -1;
  }
  fn_82F719E0();
}
