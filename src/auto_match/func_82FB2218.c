extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_82FB2218(int param_1)

{
  if (*(unsigned int *)(param_1 + 0xb8) != 0) {
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xb8);
    fn_82FA5190(lbl_831BC768, *(unsigned int *)(param_1 + 0xb8));
    *(unsigned int *)(param_1 + 0xb8) = 0;
    *(unsigned int *)(param_1 + 0xbc) = 0;
    *(unsigned int *)(param_1 + 0xc0) = 0;
  }
  return;
}

