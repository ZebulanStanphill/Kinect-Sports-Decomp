extern void fn_82FA5190(void *a, void *b);
extern void *lbl_831BC768;

void fn_8300E470(char *param_1)
{
  if (*(void **)(param_1 + 4) == 0) return;
  fn_82FA5190(lbl_831BC768, *(void **)(param_1 + 4));
}
