extern int fn_82FFF908();
extern int fn_82FFF990();


unsigned __int64 fn_82FAF788(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  uVar1 = 1;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    if (iVar3 != *(int *)(iVar2 + 8)) {
      do {
        uVar1 = fn_82FFF908(*(unsigned int *)(iVar3 + 4));
        if ((int)uVar1 != 1) {
          for (iVar2 = *(int *)(iVar2 + 4); iVar2 != iVar3; iVar2 = iVar2 + 0x14) {
            fn_82FFF990(*(unsigned int *)(iVar2 + 4));
          }
          return uVar1;
        }
        iVar3 = iVar3 + 0x14;
      } while (iVar3 != *(int *)(iVar2 + 8));
    }
  }
  return uVar1;
}

