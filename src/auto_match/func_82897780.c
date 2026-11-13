extern int fn_8289C308();


void fn_82897780(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int iVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar4 = 0;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 8);
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if ((uVar4 < *(unsigned int *)(*(int *)(param_1 + 0x10) + 8)) &&
         (iVar2 = *(int *)(*(int *)(param_1 + 8) + iVar3), iVar2 != 0)) {
        fn_8289C308(iVar2,param_2);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < uVar1);
  }
  return;
}

