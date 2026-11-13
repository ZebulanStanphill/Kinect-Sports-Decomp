unsigned __int64 fn_82DFA278(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  lVar9 = 0;
  iVar2 = *(int *)(param_3 * 4 + *(int *)((int)param_1 + 0x10));
  uVar8 = (unsigned __int64)*(unsigned int *)(iVar2 + 0xc);
  if (0 < (int)*(unsigned int *)(iVar2 + 0xc)) {
    do {
      uVar1 = *(unsigned int *)(iVar2 + 0xc);
      uVar7 = (unsigned __int64)*(unsigned int *)(iVar2 + 8) + lVar9;
      trapWord(6,(unsigned __int64)uVar1,0);
      uVar6 = ((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1;
      iVar4 = (int)((uVar7 - (__int64)((int)uVar7 / (int)uVar1) * (__int64)(int)uVar1 & 0xffffffff
                    ) << 5) + *(int *)(iVar2 + 0x10);
      lVar9 = lVar9 + 1;
      trapWord(5,(unsigned __int64)uVar1 & ~uVar6,0xffff);
      puVar3 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar5 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
      *puVar5 = *puVar3;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      puVar3 = (unsigned int *)(iVar4 + 0x10U & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar5 = (unsigned int *)(param_4 + 0x10U & 0xfffffff0);
      *puVar5 = *puVar3;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      param_4 = param_4 + 0x20;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    return uVar6;
  }
  return param_1;
}

