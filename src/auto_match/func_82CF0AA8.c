extern int fn_82CFBBF0();


unsigned __int64 fn_82CF0AA8(int param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  int iVar4;
  
  if ((*param_3 < *(int *)(param_1 + 0x34)) &&
     (iVar2 = fn_82CFBBF0(*(unsigned int *)(*(int *)(*param_3 * 4 + *(int *)(param_1 + 0x30)) + 0x4c)
                          ), iVar2 == 0)) {
LAB_82cf0b40:
    uVar1 = 1;
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      iVar4 = 0;
      do {
        iVar3 = fn_82CFBBF0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x30) + iVar4) + 0x4c),
                             param_2);
        if (iVar3 == 0) {
          *param_3 = iVar2;
          goto LAB_82cf0b40;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar2 < *(int *)(param_1 + 0x34));
    }
    uVar1 = 0;
  }
  return uVar1;
}

