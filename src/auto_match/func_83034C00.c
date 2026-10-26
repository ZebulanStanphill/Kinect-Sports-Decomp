extern void fn_82FA5190(int a, void *b);
extern void fn_82FF8410(void *p);
extern int lbl_831BC768;

void fn_83034C00(int param_1)
{
  if (*(void **)(param_1 + 4) != 0) {
    fn_82FF8410(*(void **)(param_1 + 4));
    fn_82FA5190(lbl_831BC768, *(void **)(param_1 + 4));
    *(void **)(param_1 + 4) = 0;
  }
}
