extern int fn_8275EB90();
extern unsigned int lbl_8201482C;


void fn_82760050(int param_1)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned short *puVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  
  pbVar2 = *(unsigned char **)(param_1 + 4);
  uVar4 = 1;
  puVar6 = (unsigned short *)0x0;
  puVar5 = (unsigned int *)0x0;
  bVar1 = *pbVar2;
  if ((bVar1 & 1) == 0) {
    uVar10 = bVar1 >> 1 & 3;
    uVar3 = -(unsigned int)((bVar1 & 8) != 0) & 2;
    iVar8 = uVar3 + 2;
    if ((bVar1 >> 1 & 3) == 0) {
      *(unsigned char **)(param_1 + 4) = pbVar2 + 1;
      return;
    }
    uVar9 = (unsigned __int64)(bVar1 >> 4);
    puVar11 = (unsigned int *)((((unsigned int)(pbVar2 + uVar10) & ~(uVar10 - 1)) +
                        *(int *)(&lbl_8201482C + uVar10 * 4) * 3 + iVar8) - 1 & ~(uVar3 + 1));
    if (iVar8 == 2) {
      if (uVar9 == 0) {
        uVar9 = (unsigned __int64)*(unsigned short *)puVar11;
        puVar11 = (unsigned int *)((int)puVar11 + 2);
      }
      uVar7 = (unsigned __int64)*(unsigned short *)(puVar11 + 1);
      puVar6 = (unsigned short *)((int)puVar11 + 6);
    }
    else {
      if (uVar9 == 0) {
        uVar9 = (unsigned __int64)*puVar11;
        puVar11 = puVar11 + 1;
      }
      uVar7 = (unsigned __int64)puVar11[2];
      puVar5 = puVar11 + 3;
    }
  }
  else {
    uVar9 = ((unsigned __int64)(bVar1 >> 1) & 3) + 1;
    uVar7 = (unsigned __int64)(bVar1 >> 3) & 0xf;
    puVar6 = (unsigned short *)(((unsigned int)(pbVar2 + 5) & 0xfffffffe) + 4);
  }
  if (puVar6 == (unsigned short *)0x0) {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (uVar4 == 0) {
        uVar7 = (unsigned __int64)*puVar5;
        puVar5 = puVar5 + 1;
        uVar4 = 1;
      }
      if ((uVar4 & uVar7) == 0) {
        puVar5 = puVar5 + 2;
      }
      else {
        puVar5 = puVar5 + 4;
      }
      uVar4 = (uVar4 & 0x7fffffff) << 1;
    }
    *(unsigned int **)(param_1 + 4) = puVar5;
  }
  else {
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (0x8000 < uVar4) {
        uVar7 = (unsigned __int64)(short)*puVar6;
        puVar6 = puVar6 + 1;
        uVar4 = 1;
      }
      if ((uVar4 & uVar7) == 0) {
        puVar6 = puVar6 + 2;
      }
      else {
        puVar6 = puVar6 + 4;
      }
      uVar4 = (uVar4 & 0x7fffffff) << 1;
    }
    *(unsigned short **)(param_1 + 4) = puVar6;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  fn_8275EB90();
  return;
}

