extern int fn_82965280();
extern int fn_829B3AC0();
extern int fn_829B3C30();


unsigned __int64 fn_829B43E0(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar2 = fn_829B3AC0(param_1,param_1 + 0x50,param_1 + 0x4c);
  uVar4 = 0;
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x38) != 0) {
    iVar2 = 0;
    do {
      *(unsigned int *)(*(int *)(param_1 + 0x30) + iVar2) = uVar4;
      uVar4 = uVar4 + 1;
      *(unsigned int *)(iVar2 + *(int *)(param_1 + 0x40)) =
           *(unsigned int *)(iVar2 + *(int *)(param_1 + 0x3c));
      iVar2 = iVar2 + 4;
      uVar3 = *(unsigned int *)(param_1 + 0x38);
    } while (uVar4 < uVar3);
  }
  fn_82965280(0xffffffff829b3990,*(unsigned int *)(param_1 + 0x30),uVar3,param_1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar2 = 0;
    do {
      uVar1 = fn_829B3C30(param_1,*(unsigned int *)(*(int *)(param_1 + 0x30) + iVar2));
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((int)uVar1 == 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 0x38));
  }
  return 1;
}

