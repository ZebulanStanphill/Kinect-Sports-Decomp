extern void fn_8300EF60(void *p, int a);
extern char *lbl_832642F0;

void fn_82FE79D0(int param_1)
{
  if (lbl_832642F0 != 0) {
    fn_8300EF60(lbl_832642F0 + 0x4a4, param_1);
  }
}
