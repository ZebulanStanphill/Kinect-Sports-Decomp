extern int fn_82631400();
extern unsigned int uStack00000024;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;


unsigned __int64 fn_82ABD710(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,int (**param_4)())

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned short uVar9;
  int iVar8;
  int iVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned int uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  unsigned __int64 uVar18;
  int iVar19;
  unsigned int uStack00000024;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int *apuStack_b0 [44];
  
  uStack00000024 = param_3;
  fn_82631400(param_1,apuStack_b0);
  if ((((apuStack_b0[0] == (unsigned int *)0x0) || (apuStack_b0[0][4] == 0)) ||
      (iVar10 = apuStack_b0[0][4] + (int)apuStack_b0[0], iVar10 == 0)) ||
     (iVar14 = iVar10 + 4, iVar14 == 0)) {
    uVar6 = 1;
  }
  else {
    uVar2 = *apuStack_b0[0];
    uVar3 = *(unsigned int *)(iVar10 + 0x10);
    uVar13 = 0;
    piVar17 = (int *)(*(int *)(iVar10 + 0x14) + iVar14);
    if (uVar3 != 0) {
      uVar5 = param_3 & 1;
      do {
        iVar10 = *piVar17;
        sVar1 = *(short *)(piVar17 + 1);
        uVar9 = *(unsigned short *)((int)piVar17 + 6);
        uVar11 = (unsigned __int64)*(unsigned short *)(piVar17 + 2);
        if (((uVar2 & 1) == 0) && ((param_3 & 0x10) != 0)) {
          if (sVar1 == 0) {
            uVar9 = uVar9 ^ 0x80;
          }
          if (sVar1 == 1) {
            uVar9 = uVar9 ^ 0x10;
          }
        }
        if (uVar5 == 0) {
          uVar6 = (*param_4)(param_2,iVar10 + iVar14,uVar11,sVar1,uVar9,0);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
        }
        else if (uVar5 == 1) {
          iVar4 = piVar17[4];
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uVar18 = 0;
          uStack_b4 = 0;
          iVar15 = (-(unsigned int)(sVar1 != 0) & 3) + 1;
          if (uVar11 != 0) {
            iVar16 = 0;
            do {
              if (iVar4 == 0) {
                puVar7 = (unsigned int *)0x0;
              }
              else {
                iVar12 = 0;
                if (iVar15 != 0) {
                  puVar7 = &uStack_c4;
                  iVar19 = iVar15;
                  do {
                    iVar8 = iVar16 + iVar12;
                    iVar12 = iVar12 + 1;
                    puVar7 = puVar7 + 1;
                    *puVar7 = *(unsigned int *)(iVar8 * 4 + iVar4 + iVar14);
                    iVar19 = iVar19 + -1;
                  } while (iVar19 != 0);
                }
                puVar7 = &uStack_c0;
              }
              uVar6 = (*param_4)(param_2,iVar10 + iVar14,uVar18,sVar1,uVar9,puVar7);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
              uVar18 = uVar18 + 1;
              iVar16 = iVar16 + iVar15;
              param_3 = uStack00000024;
            } while ((uVar18 & 0xffffffff) < uVar11);
          }
        }
        uVar13 = uVar13 + 1;
        piVar17 = piVar17 + 5;
      } while (uVar13 < uVar3);
    }
    uVar6 = 0;
  }
  return uVar6;
}

