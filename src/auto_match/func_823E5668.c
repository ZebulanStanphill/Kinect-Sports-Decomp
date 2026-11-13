extern unsigned int *auStack_100;
extern unsigned int *auStack_d0;
extern int fn_822ABA88();
extern int fn_822ACC48();
extern int fn_823E5C00();
extern unsigned int uStack_104;


void fn_823E5668(int *param_1,__int64 param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned int *puVar9;
  __int64 lVar8;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uStack_104;
  unsigned int auStack_100 [12];
  unsigned char auStack_d0 [208];
  
  piVar6 = (int *)param_2;
  piVar1 = *(int **)(*piVar6 * 4 + *param_1);
  iVar4 = *(int *)(piVar1[4] * 4 + *piVar1);
  uVar10 = (unsigned __int64)*(unsigned int *)(iVar4 + 8);
  if (*(char *)(piVar6 + 8) == '\0') {
    uVar5 = 0xffffffff821b6380;
  }
  else {
    uVar5 = 0xffffffff821b63a8;
  }
  uVar2 = fn_822ACC48(*(unsigned int *)(iVar4 + 0x48),uVar5,uVar10,auStack_d0);
  if (uVar2 != 0) {
    puVar9 = &uStack_104;
    uVar11 = uVar2;
    uVar7 = uVar2 & 0xffffffff;
    while (uVar7 != 0) {
      puVar9 = puVar9 + 1;
      *puVar9 = 1;
      uVar11 = uVar11 - 1;
      uVar7 = uVar11;
    }
  }
  if (uVar10 != 0) {
    lVar8 = param_2 + 0x50;
    for (uVar11 = uVar10; uVar11 != 0; uVar11 = uVar11 - 1) {
      lVar8 = lVar8 + 4;
      *(unsigned int *)lVar8 = 0xffffffff;
    }
  }
  uVar7 = 0;
  param_2 = param_2 + 0x54;
  piVar6[0x15] = 0;
  uVar11 = (unsigned __int64)(unsigned int)piVar6[9];
  auStack_100[0] = 0;
  fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar11);
  uVar3 = fn_823E5C00(uVar2,auStack_d0,auStack_100);
  *(unsigned int *)((int)((uVar11 + 0x15 & 0xffffffff) << 2) + (int)piVar6) = uVar3;
  uVar11 = (unsigned __int64)(unsigned int)piVar6[0xb];
  uVar3 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
  auStack_100[piVar6[piVar6[9] + 0x15]] = (int)uVar7;
  fn_822ABA88(uVar3,uVar11);
  uVar3 = fn_823E5C00(uVar2,auStack_d0,auStack_100);
  *(unsigned int *)((int)((uVar11 + 0x15 & 0xffffffff) << 2) + (int)piVar6) = uVar3;
  auStack_100[piVar6[piVar6[0xb] + 0x15]] = (int)uVar7;
  uVar11 = uVar7;
  if (uVar10 != 0) {
    do {
      if (*(int *)param_2 == -1) {
        fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar7);
        iVar4 = fn_823E5C00(uVar2,auStack_d0,auStack_100);
        *(int *)param_2 = iVar4;
        auStack_100[iVar4] = (int)uVar11;
      }
      uVar7 = uVar7 + 1;
      param_2 = param_2 + 4;
    } while ((uVar7 & 0xffffffff) < uVar10);
  }
  return;
}

