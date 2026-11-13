extern int fn_82CFC058();


void fn_82CFA528(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  if ((int)uVar1 < 0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  else {
    uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - (unsigned __int64)uVar1;
    iVar5 = (int)uVar4;
    if (*(int *)(param_1 + 0x20) < iVar5) {
      *(unsigned int *)(param_1 + 0x10) = 0;
      *(unsigned int *)(param_1 + 0x14) = 0;
      *(unsigned int *)(param_1 + 0x1c) = 0xffffffff;
      *(unsigned int *)(param_1 + 0x20) = 0xffffffff;
    }
    else if (0 < (int)uVar1) {
      lVar3 = uVar4 + ((__int64)(iVar5 >> 9) + (unsigned __int64)(iVar5 < 0 && (uVar4 & 0x1ff) != 0) &
                      0x7fffff) * -0x200;
      lVar2 = 0x200 - lVar3;
      if (lVar3 == 0) {
        lVar2 = 0;
      }
      fn_82CFC058((unsigned __int64)*(unsigned int *)(param_1 + 0xc) + lVar2,
                      (unsigned __int64)*(unsigned int *)(param_1 + 0xc) + (unsigned __int64)uVar1,uVar4);
      *(int *)(param_1 + 0x1c) = (int)lVar2;
      iVar5 = ((unsigned int)(lVar3 != 0) + (iVar5 >> 9) + (unsigned int)(iVar5 < 0 && (uVar4 & 0x1ff) != 0)) *
              0x200;
      *(int *)(param_1 + 0x10) = iVar5;
      *(int *)(param_1 + 0x14) = iVar5;
    }
  }
  return;
}

