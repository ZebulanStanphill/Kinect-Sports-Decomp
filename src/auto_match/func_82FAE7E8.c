extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_82FAE7E8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0xa0) != 0) {
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa0);
    fn_82FA5190(lbl_831BC768, *(unsigned int *)(param_1 + 0xa0));
    *(unsigned int *)(param_1 + 0xa0) = 0;
    *(unsigned int *)(param_1 + 0xa4) = 0;
    *(unsigned int *)(param_1 + 0xa8) = 0;
  }
  return;
}

