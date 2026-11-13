extern int fn_8267BE38();
extern int fn_82696348();
extern int fn_826C1328();
extern int fn_82711F20();


void fn_826A2C40(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
  if (uVar1 != 0) {
    iVar2 = 0;
    do {
      if (*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x34)) != 0) {
        fn_82696348(*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x34)));
      }
      fn_8267BE38(*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x34)));
      uVar1 = uVar1 - 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 != 0);
  }
  fn_8267BE38(*(unsigned int *)(param_1 + 0x34));
  fn_82711F20(param_1 + 0x40,0);
  fn_826C1328(param_1);
  return;
}

