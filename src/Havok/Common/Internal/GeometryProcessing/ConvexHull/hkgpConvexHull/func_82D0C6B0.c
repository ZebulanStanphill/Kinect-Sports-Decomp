typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D0C6B0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  int in_r0;
  int iVar9;
  __int64 lVar10;
  int iVar11;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(unsigned int *)(iVar1 + 0x28);
  if (param_2 == 0) {
    iVar9 = fn_82CE5410();
    uVar3 = param_3[1];
    lVar10 = (unsigned __int64)uVar3 + (unsigned __int64)uVar2;
    iVar11 = (int)lVar10;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar11) {
      lVar8 = ((unsigned __int64)(unsigned int)param_3[2] & 0x3fffffff) << 1;
      if (iVar11 < (int)lVar8) {
        lVar10 = lVar8;
      }
      fn_82CE6310(*(unsigned int *)(iVar9 + 0x10),param_3,lVar10,0x10);
    }
    param_3[1] = param_3[1] + uVar2;
    puVar4 = *(unsigned int **)(iVar1 + 0x24);
    iVar1 = uVar3 * 0x10 + *param_3;
    for (; puVar4 != (unsigned int *)0x0; puVar4 = (unsigned int *)*puVar4) {
      puVar6 = (unsigned int *)((unsigned int)(puVar4 + 4) & 0xfffffff0);
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      puVar7 = (unsigned int *)(in_r0 + iVar1 & 0xfffffff0);
      *puVar7 = *puVar6;
      puVar7[1] = uVar12;
      puVar7[2] = uVar13;
      puVar7[3] = uVar14;
      iVar1 = iVar1 + 0x10;
    }
  }
  else {
    iVar9 = fn_82CE5410();
    uVar3 = param_3[1];
    lVar10 = (unsigned __int64)uVar3 + (unsigned __int64)uVar2;
    iVar11 = (int)lVar10;
    if ((int)(param_3[2] & 0x3fffffffU) < iVar11) {
      lVar8 = ((unsigned __int64)(unsigned int)param_3[2] & 0x3fffffff) << 1;
      if (iVar11 < (int)lVar8) {
        lVar10 = lVar8;
      }
      fn_82CE6310(*(unsigned int *)(iVar9 + 0x10),param_3,lVar10,0x10);
    }
    param_3[1] = param_3[1] + uVar2;
    piVar5 = *(int **)(iVar1 + 0x24);
    if (piVar5 != (int *)0x0) {
      iVar9 = uVar3 * 0x10 + *param_3;
      do {
        puVar4 = (unsigned int *)(in_r0 + iVar1 + 0x110 & 0xfffffff0);
        uVar12 = puVar4[1];
        uVar13 = puVar4[2];
        uVar14 = puVar4[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
        puVar6 = (unsigned int *)(in_r0 + iVar9 & 0xfffffff0);
        *puVar6 = *puVar4;
        puVar6[1] = uVar12;
        puVar6[2] = uVar13;
        puVar6[3] = uVar14;
        piVar5 = (int *)*piVar5;
        iVar9 = iVar9 + 0x10;
      } while (piVar5 != (int *)0x0);
    }
  }
  return;
}

