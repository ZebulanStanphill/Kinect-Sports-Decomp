extern int fn_82A1E658();
extern int fn_82E66318();
extern int fn_82E663D0();


void fn_82E66868(int param_1)

{
  if (*(int *)(param_1 + 0x238) != 0) {
    if (*(unsigned int *)(param_1 + 0x224) != 0) {
      fn_82E66318(param_1 + 0x228);
      fn_82A1E658(*(unsigned int *)(param_1 + 0x224));
      *(unsigned int *)(param_1 + 0x224) = 0;
      fn_82E663D0(param_1 + 0x228);
    }
    *(unsigned int *)(param_1 + 0x238) = 0;
  }
  return;
}

