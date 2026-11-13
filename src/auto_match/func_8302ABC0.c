extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_8302ABC0(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x28);
    fn_82FA5190(lbl_831BC768, *(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
  }
  return;
}

