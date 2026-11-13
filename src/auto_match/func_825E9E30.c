typedef unsigned char bool;
extern int fn_8265C9E0();
extern int fn_82A1F198();
extern int fn_82BFE128();
extern int fn_82BFE230();
extern unsigned int lbl_8218E094;
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_825E9E30(__int64 param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar6;
  __int64 lVar5;
  __int64 lVar7;
  unsigned int *puVar8;
  int iVar9;
  int *piVar10;
  char in_RESERVE;
  unsigned char bVar11;
  
  iVar4 = (int)param_1;
  *(unsigned int *)(iVar4 + 0x20) = 0;
  *(unsigned int *)(iVar4 + 0x24) = 0;
  lVar7 = param_1 + -4;
  piVar10 = (int *)&lbl_8218E094;
  do {
    piVar6 = (int *)fn_8265C9E0(0x18);
    bVar11 = (piVar6 == (int *)0x0) << 1;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      iVar9 = piVar10[1];
      iVar1 = *piVar10;
      iVar2 = piVar10[-1];
      piVar6[3] = iVar1 * iVar9;
      piVar6[1] = iVar1;
      *piVar6 = iVar2;
      piVar6[2] = iVar9;
      piVar6[4] = 0;
      piVar6[5] = 0;
      fn_82BFE230(0,piVar6 + 5);
      fn_82BFE230(0,piVar6 + 4);
      lVar5 = fn_82A1F198(piVar6[3],0xffffffffffffffff,0x80,0x404);
      fn_82BFE128(piVar6[5],lVar5);
      iVar9 = 0;
      if (0 < piVar6[2]) {
        do {
          fn_82BFE128(piVar6[4],lVar5);
          iVar9 = iVar9 + 1;
          lVar5 = (unsigned __int64)(unsigned int)piVar6[1] + lVar5;
        } while (iVar9 < piVar6[2]);
      }
    }
    lVar7 = lVar7 + 4;
    *(unsigned int *)lVar7 = piVar6;
    iVar9 = piVar10[1];
    iVar1 = *piVar10;
    do {
      puVar8 = (unsigned int *)(param_1 + 0x24);
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed
                          ((__int64)iVar9 * (__int64)iVar1 + (unsigned __int64)*puVar8,0,param_1 + 0x24);
        *puVar8 = uVar3;
        bVar11 = 2;
      }
    } while (!(bool)(bVar11 >> 1 & 1));
    piVar10 = piVar10 + 3;
  } while ((int)piVar10 < -0x7de71f3c);
  *(unsigned int *)(iVar4 + 0x10) = 0;
  *(unsigned int *)(iVar4 + 0x14) = 0;
  *(unsigned int *)(iVar4 + 0x18) = 0;
  *(unsigned int *)(iVar4 + 0x1c) = 0;
  sync(0);
  return param_1;
}

