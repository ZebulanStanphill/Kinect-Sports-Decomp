extern int fn_82CFBBF0();


int fn_82CEB428(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar2 = fn_82CFBBF0(*(unsigned int *)(iVar1 + iVar4),param_2);
      if (iVar2 == 0) {
        return iVar1 + iVar4;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

