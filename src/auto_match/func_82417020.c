extern int fn_824A7FF8();
extern int fn_8265CA20();
extern unsigned int lbl_821B9BC8;


void fn_82417020(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3f8);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3fc);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
      *(unsigned char ***)(iVar2 + 4) = &lbl_821B9BC8;
    }
    fn_8265CA20(*(unsigned int *)(param_1 + 0x3f8));
  }
  *(unsigned int *)(param_1 + 0x3f8) = 0;
  *(unsigned int *)(param_1 + 0x3fc) = 0;
  *(unsigned int *)(param_1 + 0x400) = 0;
  fn_824A7FF8(param_1 + 0x110);
  fn_824A7FF8(param_1 + 0xa0);
  if (*(int *)(param_1 + 0x88) != 0) {
    fn_8265CA20();
  }
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x8c) = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_8265CA20();
  }
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    for (; iVar2 != *(int *)(param_1 + 0xc); iVar2 = iVar2 + 0x1ac) {
    }
    fn_8265CA20();
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}

