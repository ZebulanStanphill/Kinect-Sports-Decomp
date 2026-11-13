#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))


void fn_82A27010(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned short *puVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned short uVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  
  iVar4 = (int)param_2;
  bVar1 = *(unsigned char *)(iVar4 + 4);
  iVar5 = (int)param_1;
  uVar9 = (unsigned __int64)*(unsigned short *)(iVar4 + 2);
  bVar2 = *(unsigned char *)(iVar4 + 5);
  iVar4 = *(int *)((bVar1 + 0x18) * 4 + iVar5);
  *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + (int)param_3;
  do {
    uVar10 = (unsigned short)uVar9;
    puVar6 = (unsigned short *)param_2;
    if ((param_3 & 0xffffffff) == 0) {
      if ((bVar2 & 0x10) != 0) {
        return;
      }
      puVar6[1] = uVar10;
      return;
    }
    if ((param_3 & 0xffffffff) < 0xf001) {
      uVar9 = param_3 & 0xffff;
      *(unsigned char *)((int)puVar6 + 5) = bVar2;
    }
    else {
      uVar9 = 0xfffffffffffff000;
      if ((param_3 & 0xffffffff) == 0xf001) {
        uVar9 = 0xffffffffffffeff0;
      }
      *(unsigned char *)((int)puVar6 + 5) = 0;
    }
    uVar7 = uVar9 & 0xffff;
    puVar6[1] = uVar10;
    *(unsigned char *)(puVar6 + 2) = bVar1;
    *puVar6 = (short)uVar9;
    *(unsigned char *)((int)puVar6 + 5) = *(unsigned char *)((int)puVar6 + 5) & 0xf8;
    if (uVar7 < 0x80) {
      uVar11 = (uVar7 + 0x30) * 8 + param_1;
      puVar12 = (unsigned int *)uVar11;
      if ((unsigned __int64)*puVar12 == (uVar11 & 0xffffffff)) {
        iVar8 = ((int)(uVar7 >> 5) + 0x58) * 4;
        *(unsigned int *)(iVar8 + iVar5) = 1 << ((unsigned int)uVar7 & 0x1f) | *(unsigned int *)(iVar8 + iVar5);
      }
    }
    else {
      for (puVar12 = *(unsigned int **)(iVar5 + 0x180);
          ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar12) && (*(unsigned short *)(puVar12 + -2) < uVar7)
          ); puVar12 = (unsigned int *)*puVar12) {
      }
    }
    puVar3 = (unsigned int *)puVar12[1];
    *(unsigned int **)(puVar6 + 4) = puVar12;
    param_3 = param_3 - uVar7;
    *(unsigned int **)(puVar6 + 6) = puVar3;
    param_2 = (uVar9 & 0xffff) * 0x10 + param_2;
    *puVar3 = (unsigned int)(puVar6 + 4);
    puVar12[1] = (unsigned int)(puVar6 + 4);
  } while ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar4 + 0x2c));
  return;
}

