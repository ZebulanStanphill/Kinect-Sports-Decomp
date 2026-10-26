extern void fn_82FA5190(void *a, void *b);
extern void fn_83008310(void *p);
extern void fn_8300E470(void *p);
extern unsigned int lbl_8217C564;
extern void *lbl_831BC768;

void fn_8301E7D0(void **param_1)
{
  *param_1 = &lbl_8217C564;
  if (param_1[4] != 0) {
    fn_82FA5190(lbl_831BC768, param_1[4]);
  }
  fn_8300E470(param_1 + 5);
  fn_83008310(param_1);
}
