extern int fn_82ABE0E8();
extern int fn_82AD2020();


__int64 fn_82AD3450(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(iVar1 + 0x70);
  if ((*(unsigned int *)(iVar4 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ad3488:
    do {
      iVar4 = *(int *)(iVar4 + 0x50);
      if (iVar4 != 0) {
        if ((*(unsigned int *)(iVar4 + 0x30) & 0x400000) != 0) goto LAB_82ad3488;
      }
    } while ((*(unsigned int *)(iVar4 + 0x30) >> 0x16 & 1) != 0);
    *(int *)(iVar1 + 0x70) = iVar4;
  }
  uVar2 = fn_82AD2020(param_1,*(unsigned int *)(iVar1 + 0x70));
  if ((uVar2 & 0xffffffff) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = fn_82ABE0E8(uVar2,param_1);
    lVar3 = (lVar3 + -1) - (lVar3 + -2 + (unsigned __int64)(lVar3 + -1 == 0));
  }
  return lVar3;
}

