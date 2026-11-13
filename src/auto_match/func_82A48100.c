extern int fn_82A45808();
extern int fn_82A474B0();
extern int fn_82A47590();
extern unsigned int uStack_50;


void fn_82A48100(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uStack_50;
  
  if (*(int **)(param_1 + 0x20c) == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(param_1 + 0x20c);
  }
  uVar2 = *(unsigned int *)(iVar6 + 0x10);
  uVar1 = *(unsigned int *)(iVar6 + 0xc);
  uVar7 = 0;
  *(unsigned char *)(param_1 + 0x1d2) = 1;
  uVar4 = ((unsigned __int64)uVar2 + (unsigned __int64)uVar1) - 0x80;
  if (*(int *)(param_1 + 0x1c0) != 0) {
    uVar5 = (unsigned __int64)uStack_50;
    do {
      uVar2 = fn_82A474B0(*(unsigned int *)(iVar6 + 8),*(unsigned int *)(iVar6 + 4),uVar7,
                            (uVar4 & 0xffffffff) >> 9);
      if (uVar2 != 0) {
        uVar5 = (uVar4 & 0xffffffff) >> 7 & 3;
        uStack_50 = uVar2;
      }
      *(unsigned int *)(param_1 + 0x1cc) = uStack_50;
      *(char *)(param_1 + 0x1d0) = (char)uVar5;
      uVar3 = fn_82A47590(*(unsigned int *)(iVar6 + 8),*(unsigned int *)(iVar6 + 4),uVar7);
      *(unsigned int *)(param_1 + 0x1c8) = uVar3;
      *(unsigned char *)(param_1 + 0x1d1) = 3;
      fn_82A45808(*(unsigned int *)(param_1 + 0x1d8),uVar7,(unsigned int *)(param_1 + 0x1c8));
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x1c0));
  }
  return;
}

