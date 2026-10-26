extern void fn_82FA5190(void *a, void *b);
extern void fn_83008310(void *p);
extern unsigned int lbl_8217C7C0;
extern void *lbl_831BC768;

void fn_8302BA30(void **param_1)
{
  *param_1 = &lbl_8217C7C0;
  if (param_1[6] != 0) {
    fn_82FA5190(lbl_831BC768, param_1[6]);
    param_1[6] = 0;
  }
  fn_83008310(param_1);
}
