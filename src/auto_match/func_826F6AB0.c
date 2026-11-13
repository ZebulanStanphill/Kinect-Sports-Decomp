extern int fn_826F6968();


__int64 fn_826F6AB0(__int64 param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int iVar10;
  unsigned int uVar6;
  
  iVar1 = *(int *)((int)param_1 + 0x7d4);
  uVar5 = 0;
  uVar6 = 0;
  if (iVar1 == 0) {
    uVar7 = 0;
    uVar8 = 1;
    lVar9 = param_1 + 0x7dc;
    do {
      if ((*(unsigned int *)((int)param_1 + 0x7f8) & uVar8) != 0) {
        puVar4 = (unsigned int *)fn_826F6968(param_1);
        *puVar4 = (int)uVar5;
        *(char *)(puVar4 + 4) = (char)uVar7;
        puVar4[1] = ((unsigned int *)lVar9)[-1];
        uVar6 = *(unsigned int *)lVar9;
        *(unsigned char *)((int)puVar4 + 0xf) = 0x40;
        puVar4[2] = uVar6;
        *(short *)(puVar4 + 3) = (short)uVar5;
        *(unsigned int *)((int)param_1 + 0x7f8) = *(unsigned int *)((int)param_1 + 0x7f8) & ~(unsigned int)uVar8;
      }
      uVar6 = (unsigned int)uVar5;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
      uVar8 = (uVar8 & 0x7fffffff) << 1;
    } while ((uVar7 & 0xffffffff) < 4);
    iVar1 = *(int *)((int)param_1 + 0x7d4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar3 = (int)param_1;
  uVar2 = *(unsigned int *)(iVar3 + 2000);
  iVar10 = uVar2 + 1;
  *(int *)(iVar3 + 0x7d4) = iVar1 + -1;
  *(int *)(iVar3 + 2000) = iVar10;
  if (iVar10 == 100) {
    *(unsigned int *)(iVar3 + 2000) = uVar6;
  }
  return (unsigned __int64)uVar2 * 0x14 + param_1;
}

