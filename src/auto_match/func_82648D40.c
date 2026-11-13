extern int fn_8264D6C0();
extern int fn_8265C990();


__int64 fn_82648D40(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __int64 lVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  
  iVar1 = *param_1;
  lVar4 = (unsigned __int64)(unsigned int)param_1[3] - 1;
  param_1[3] = (int)lVar4;
  if (lVar4 == 0) {
    if (param_1[1] == 9) {
      uVar8 = 0;
      if (param_1[0x26] != 0) {
        piVar9 = param_1 + 0x16;
        do {
          iVar2 = *piVar9;
          iVar5 = piVar9[-0xf] - *(int *)(iVar2 + 8);
          uVar7 = iVar5 >> 2;
          uVar6 = (iVar5 >> 6) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 0xf) != 0);
          uVar7 = uVar6 >> 3;
          *(unsigned char *)(iVar2 + uVar7) = *(unsigned char *)(iVar2 + uVar7) & ~(unsigned char)(1 << (uVar6 & 7));
          if (((*(int *)*piVar9 == 0) && (iVar2 = *piVar9, *(int *)(iVar2 + 4) == 0)) &&
             (iVar5 = iVar1 + 0x5510, iVar1 + 0x5510 != iVar2)) {
            while (iVar10 = iVar5, *(int *)(iVar10 + 0xc) != 0) {
              iVar5 = *(int *)(iVar10 + 0xc);
              if (iVar5 == iVar2) {
                lVar4 = ((unsigned __int64)(*(unsigned int *)(iVar5 + 8) >> 0x14) + 0x200 & 0x1000) +
                        ((unsigned __int64)*(unsigned int *)(iVar5 + 8) & 0x1fffffff);
                fn_8264D6C0(lVar4 + -0x40000000,lVar4 + -0x3ffff000,0);
                fn_8265C990(*(unsigned int *)(iVar5 + 8),0xffffffffb1800000);
                *(unsigned int *)(iVar10 + 0xc) = *(unsigned int *)(iVar5 + 0xc);
                fn_8265C990(iVar5,0x24800000);
                iVar5 = iVar10;
              }
            }
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar8 < (unsigned int)param_1[0x26]);
      }
    }
    else if (param_1[1] == 10) {
      if (param_1[7] != 0) {
        iVar2 = param_1[0x16];
        iVar5 = param_1[7] - *(int *)(iVar2 + 8);
        uVar8 = iVar5 >> 2;
        uVar7 = (iVar5 >> 6) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 0xf) != 0);
        uVar8 = uVar7 >> 3;
        *(unsigned char *)(iVar2 + uVar8) = *(unsigned char *)(iVar2 + uVar8) & ~(unsigned char)(1 << (uVar7 & 7));
      }
      piVar9 = (int *)param_1[0x16];
      if (((*piVar9 == 0) && (piVar9[1] == 0)) &&
         (piVar3 = (int *)(iVar1 + 0x5510), (int *)(iVar1 + 0x5510) != piVar9)) {
        while (piVar11 = piVar3, piVar11[3] != 0) {
          piVar3 = (int *)piVar11[3];
          if (piVar3 == piVar9) {
            lVar4 = ((unsigned __int64)((unsigned int)piVar3[2] >> 0x14) + 0x200 & 0x1000) +
                    ((unsigned __int64)(unsigned int)piVar3[2] & 0x1fffffff);
            fn_8264D6C0(lVar4 + -0x40000000,lVar4 + -0x3ffff000,0);
            fn_8265C990(piVar3[2],0xffffffffb1800000);
            piVar11[3] = piVar3[3];
            fn_8265C990(piVar3,0x24800000);
            piVar3 = piVar11;
          }
        }
      }
      if ((param_1[4] & 0xff000000U) == 0x2000000) {
        *(unsigned char *)(iVar1 + 0x2abf) = *(unsigned char *)(iVar1 + 0x2abf) & 0x7f;
      }
    }
    param_1[2] = 0x78787878;
    fn_8265C990(param_1,0x24800000);
    lVar4 = 0;
  }
  return lVar4;
}

