extern int fn_8300EE60();
extern unsigned int lbl_832642F0;


void fn_82FF9128(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x2c) != 0) {
    fn_8300EE60((unsigned __int64)lbl_832642F0 + 0x4a4,*(int *)(param_1 + 0x2c),
                      *(unsigned int *)(param_1 + 0xc),1,*(unsigned int *)(param_1 + 0x18),
                      *(unsigned int *)(param_1 + 0x30));
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}

