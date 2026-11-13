extern int fn_822315A0();
extern int fn_8229D7E0();
extern int fn_8265CA20();


void fn_824C5630(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_822315A0();
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      if (*(int *)(iVar2 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(*(unsigned int *)(param_1 + 0x28));
  }
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  fn_8229D7E0(param_1);
  return;
}

