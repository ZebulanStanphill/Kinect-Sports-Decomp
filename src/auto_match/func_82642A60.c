void fn_82642A60(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar9;
  __int64 lVar8;
  unsigned __int64 uVar10;
  
  if ((((*(unsigned char *)(param_1 + 8) & 7) != 7) && ((*(unsigned int *)(param_1 + 0x14) & 0x40000) == 0)) &&
     ((param_2 == 0 || ((*(unsigned int *)(param_2 + 0x14) & 0x20000) == 0)))) {
    uVar3 = (unsigned __int64)(*(unsigned int *)(param_1 + 0x14) >> 5) & 0x1f;
    uVar6 = 0;
    uVar1 = *(unsigned int *)(param_2 + 0x14) >> 5;
    uVar7 = (unsigned __int64)uVar1 & 0x1f;
    puVar4 = (unsigned int *)(param_2 + 0x20);
    puVar9 = (unsigned int *)((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
    uVar2 = 0;
    uVar10 = uVar7;
    puVar5 = puVar9;
    if ((uVar1 & 0x1f) != 0) {
      do {
        for (; ((uVar6 & 0xffffffff) < uVar3 && ((unsigned int)(unsigned char)*puVar9 < (*puVar4 & 0xff)));
            puVar9 = puVar9 + 1) {
          uVar6 = uVar6 + 1;
        }
        puVar9 = puVar9 + 1;
        *puVar5 = *puVar4 & 0xffff;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
        uVar10 = uVar10 - 1;
        uVar2 = uVar7;
      } while (uVar10 != 0);
    }
    if (uVar2 < uVar3) {
      puVar5 = puVar5 + -1;
      for (lVar8 = uVar3 - uVar2; lVar8 != 0; lVar8 = lVar8 + -1) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0;
      }
    }
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x14) =
         *(unsigned int *)(param_2 + 0x14) & 0x7ffff | *(unsigned int *)(param_1 + 0x14) & 0xfff80000;
  }
  return;
}

