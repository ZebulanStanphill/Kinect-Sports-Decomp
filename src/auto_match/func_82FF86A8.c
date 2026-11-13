extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_82FF86A8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x14) != 0) {
    fn_82FA5190(lbl_831BC768, *(unsigned int *)(param_1 + 0x14));
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

