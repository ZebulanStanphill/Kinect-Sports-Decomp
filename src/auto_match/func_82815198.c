extern int fn_8265CA20();
extern int fn_828150C8();
extern int fn_82815130();


void fn_82815198(int param_1)

{
  fn_82815130(param_1 + 0x20);
  if (*(unsigned int *)(param_1 + 0x10) != 0) {
    fn_8265CA20(*(unsigned int *)(param_1 + 0x10));
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  fn_828150C8(param_1);
  return;
}

