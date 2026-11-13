extern int fn_82BF7468();


unsigned __int64 fn_82BF7590(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    uVar3 = *param_2 >> 4;
    trapWord(6,(unsigned __int64)uVar1,0);
    piVar4 = (int *)((uVar3 - (uVar3 / uVar1) * uVar1) * 4 + *(int *)(param_1 + 8));
    for (iVar2 = *piVar4; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
      if ((*(unsigned int *)(iVar2 + 0x14) == uVar3) && (*(unsigned int *)(iVar2 + 8) == *param_2)) {
        *piVar4 = *(int *)(iVar2 + 0x10);
        fn_82BF7468();
        return 1;
      }
      piVar4 = (int *)(iVar2 + 0x10);
    }
  }
  return 0;
}

