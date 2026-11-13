extern int fn_82A45808();
extern int fn_82A474B0();
extern int fn_82A47590();


void fn_82A47FC0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (*(int **)(param_1 + 0x20c) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(param_1 + 0x20c);
  }
  *(unsigned int *)(param_1 + 0x1c8) = 0;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  uVar4 = 0;
  *(unsigned int *)(param_1 + 0x1d0) = 0;
  if (*(int *)(iVar6 + 0x1c) != 0) {
    uVar1 = *(unsigned int *)(iVar6 + 0x14) >> 7 & 3;
    uVar4 = (unsigned __int64)(*(unsigned int *)(iVar6 + 0x14) >> 9);
    *(char *)(param_1 + 0x1d1) = (char)uVar1;
    if ((uVar1 == 0) && (uVar4 != 0)) {
      uVar4 = uVar4 - 1;
      *(unsigned char *)(param_1 + 0x1d1) = 4;
    }
    if (*(int *)(iVar6 + 0x18) == 0) {
      *(unsigned char *)(param_1 + 0x1d0) = 3;
    }
    else {
      *(unsigned char *)(param_1 + 0x1d0) =
           (unsigned char)((*(int *)(iVar6 + 0x18) + *(int *)(iVar6 + 0x14)) - 0x80U >> 7) & 3;
    }
    iVar3 = *(int *)(iVar6 + 0x1c);
    if (iVar3 == 0xff) {
      iVar3 = 0xfe;
    }
    *(char *)(param_1 + 0x1d2) = (char)iVar3;
  }
  if (*(int *)(param_1 + 0x1c0) != 0) {
    do {
      if (*(int *)(iVar6 + 0x1c) != 0) {
        uVar2 = fn_82A474B0(*(unsigned int *)(iVar6 + 8),*(unsigned int *)(iVar6 + 4),uVar5,uVar4);
        *(unsigned int *)(param_1 + 0x1c8) = uVar2;
        if (*(int *)(iVar6 + 0x18) == 0) {
          uVar2 = fn_82A47590(*(unsigned int *)(iVar6 + 8),*(unsigned int *)(iVar6 + 4),uVar5);
        }
        else {
          uVar2 = fn_82A474B0();
        }
        *(unsigned int *)(param_1 + 0x1cc) = uVar2;
      }
      fn_82A45808(*(unsigned int *)(param_1 + 0x1d8),uVar5,(unsigned int *)(param_1 + 0x1c8));
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c0));
  }
  return;
}

