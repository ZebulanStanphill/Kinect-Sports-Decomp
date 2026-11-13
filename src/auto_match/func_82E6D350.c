extern int fn_82E68FB0();


__int64 fn_82E6D350(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  int *piVar11;
  int iVar12;
  unsigned int *puVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  
  iVar2 = *(int *)(param_2 + 0xb8);
  iVar3 = *(int *)(param_2 + 0xc4);
  iVar4 = *(int *)(param_2 + 200);
  lVar14 = 0;
  iVar5 = *(int *)(param_2 + 0xcc);
  iVar12 = 0;
  iVar8 = param_1[0x423b];
  if ((*(int *)(*param_1 + 0x3c) < 3) && (0 < *(int *)(iVar2 + -4))) {
    puVar13 = (unsigned int *)(iVar2 + 4);
    piVar11 = param_1 + 0x41fc;
    do {
      uVar6 = *puVar13;
      uVar7 = puVar13[-1];
      uVar10 = uVar6 & 0x7fffffff;
      if (uVar6 == 0) {
        if (*piVar11 != 0) {
          fn_82E68FB0(iVar8,*(unsigned int *)(iVar3 + 0xc),*(unsigned int *)(iVar3 + 0x10));
        }
        lVar14 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x10) + lVar14;
      }
      else {
        if (iVar5 < (int)uVar10) {
LAB_82e6d46c:
          if (*piVar11 != 0) {
            fn_82E68FB0(iVar8,*(unsigned int *)(iVar3 + 4),*(unsigned int *)(iVar3 + 8));
            fn_82E68FB0(iVar8,uVar10,*(unsigned int *)(*param_1 + 0x34));
            fn_82E68FB0(iVar8,(unsigned __int64)uVar7,*(unsigned int *)(*param_1 + 0xf8));
            fn_82E68FB0(iVar8,uVar6 >> 0x1f,1);
          }
          uVar15 = (unsigned __int64)*(unsigned int *)(*param_1 + 0xf8) + (unsigned __int64)*(unsigned int *)(*param_1 + 0x34) +
                   (unsigned __int64)*(unsigned int *)(iVar3 + 8);
        }
        else {
          sVar1 = *(short *)((uVar10 + 1) * 2 + iVar4);
          if ((int)*(short *)((uVar10 + 2) * 2 + iVar4) - (int)sVar1 <= (int)uVar7)
          goto LAB_82e6d46c;
          uVar15 = (__int64)sVar1 + (unsigned __int64)uVar7;
          if (*piVar11 != 0) {
            iVar9 = (int)((uVar15 & 0xffffffff) << 3) + iVar3;
            fn_82E68FB0(iVar8,*(unsigned int *)(iVar9 + 4),*(unsigned int *)(iVar9 + 8));
            fn_82E68FB0(iVar8,uVar6 >> 0x1f,1);
          }
          uVar15 = (unsigned __int64)*(unsigned int *)((int)((uVar15 + 1 & 0xffffffff) << 3) + iVar3);
        }
        lVar14 = uVar15 + lVar14 + 1;
      }
      iVar12 = iVar12 + 2;
      puVar13 = puVar13 + 2;
    } while (iVar12 < *(int *)(iVar2 + -4));
  }
  return lVar14;
}

