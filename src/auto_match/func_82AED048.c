typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABE2E0();
extern int fn_82AC86B0();
extern int fn_82AC8B10();
extern int fn_82AD1978();
extern int fn_82AD1B28();
extern int fn_82AE9600();
extern int fn_82AE9F88();
extern int fn_82AEA6F8();
extern int fn_82AEB3A8();
extern int fn_82AEB528();
extern int fn_82AEB5D0();
extern int fn_82AEB900();
extern int fn_82AEB9A8();
extern int fn_82AEBA50();
extern int fn_82AEBAF8();
extern int fn_82B8AC10();


int fn_82AED048(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  __int64 lVar9;
  __int64 lVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  
LAB_82aed060:
  iVar16 = 0;
  piVar12 = (int *)0x0;
  iVar15 = 0;
  piVar13 = (int *)0x0;
  iVar14 = 0;
  piVar11 = (int *)0x0;
  piVar17 = param_1;
  for (iVar6 = *param_1; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x20)) {
    cVar7 = fn_82AC8B10(param_3,iVar6);
    if (cVar7 != '\0') {
      uVar4 = *(unsigned int *)(iVar6 + 8);
      if (param_2 == 0) {
        uVar3 = uVar4 >> 7 & 0x7f;
        if (((uVar3 != 0x60) || ((uVar4 & 0x380000) == 0)) ||
           (cVar7 = fn_82AE9F88(param_1,iVar6), cVar7 != '\0')) {
          iVar1 = param_3[10];
          if (((iVar1 == 0) || (iVar5 = fn_82AC86B0(iVar6), iVar5 == 0)) || (iVar5 == iVar1))
          goto LAB_82aed190;
          if (iVar14 == 0) {
            iVar14 = iVar6;
            piVar11 = piVar17;
          }
        }
        if (iVar16 == 0) {
          iVar16 = iVar6;
          piVar12 = piVar17;
        }
        if (iVar15 == 0) {
          if ((uVar3 < 0x5b) || (bVar8 = true, 0x5e < uVar3)) {
            bVar8 = false;
          }
          if ((bVar8) || (bVar8 = false, uVar3 == 0x7b)) {
            bVar8 = true;
          }
          if (bVar8) {
            iVar15 = iVar6;
            piVar13 = piVar17;
          }
        }
      }
      else {
        uVar4 = uVar4 >> 7 & 0x7f;
        if ((uVar4 == 0) || (bVar8 = true, 0x52 < uVar4)) {
          bVar8 = false;
        }
        if (bVar8) {
          if ((uVar4 == 0) || (lVar9 = 1, 0x1f < uVar4)) {
            lVar9 = 0;
          }
          uVar4 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
          if ((uVar4 == 0) || (lVar10 = 1, 0x1f < uVar4)) {
            lVar10 = 0;
          }
          if ((lVar9 != lVar10) &&
             (cVar7 = fn_82AE9600(param_1[0xe],iVar6,param_2), cVar7 != '\0')) {
            if (param_3 == param_1 + 1) {
LAB_82aed190:
              *piVar17 = *(int *)(iVar6 + 0x20);
              return iVar6;
            }
            uVar4 = *(unsigned int *)(iVar6 + 8) >> 7 & 0x7f;
            if ((uVar4 == 0) || ((0xb < uVar4 && ((uVar4 < 0x19 || (0x1c < uVar4)))))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (((!bVar8) || ((*(unsigned int *)(iVar6 + 8) >> 0x19 & 1) != 0)) ||
               (uVar4 = fn_82AEA6F8(iVar6), 2 < uVar4)) goto LAB_82aed190;
          }
        }
      }
    }
    piVar17 = (int *)(iVar6 + 0x20);
  }
  if (param_2 == 0) {
    if (iVar16 == 0) {
      uVar4 = 0;
      do {
        if (8 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1[0xe],0x12c0);
        }
        piVar17 = (int *)param_3[uVar4 + 1];
        if (piVar17 != (int *)0x0) {
          iVar6 = param_1[0xe];
          if (uVar4 == 0) {
            uVar3 = (unsigned int)piVar17[2] >> 7 & 0x7f;
            if (uVar3 == 0x1e) {
              iVar6 = fn_82AEB3A8(iVar6,piVar17[7],0,piVar17[0xb],piVar17[0xc]);
            }
            else if (uVar3 == 0x37) {
              iVar6 = fn_82AEB528(iVar6,piVar17[7],0,piVar17[0xb]);
            }
            else {
              if (uVar3 != 0x38) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(iVar6,0x12c0);
              }
              iVar6 = fn_82AEB5D0(iVar6,piVar17[7],0,piVar17[0xb]);
            }
          }
          else if (uVar4 == 1) {
            iVar6 = fn_82AEB900(iVar6,piVar17[7],0,piVar17[0xb]);
          }
          else if (uVar4 < 3) {
            iVar6 = fn_82AEB9A8(iVar6,piVar17[7],0,piVar17[0xb]);
          }
          else {
            if (uVar4 != 3) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(iVar6,0x12c0);
            }
            iVar6 = fn_82AEBA50(iVar6,piVar17[7],0,piVar17[0xb]);
          }
          for (puVar2 = (unsigned int *)*piVar17; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[1]) {
            if ((*puVar2 & 0xe000000) == 0) {
              fn_82AD1978(iVar6,puVar2);
            }
          }
          bVar8 = false;
          piVar11 = piVar17 + 1;
          while (iVar14 = *piVar11, iVar14 != 0) {
            if ((*(int *)(iVar14 + 0x10) != 0) &&
               ((*(unsigned char *)(*(int *)(iVar14 + 0x10) + 0x10) & 1) == 0)) {
              piVar12 = (int *)(*(int *)(iVar14 + 0xc) + 4);
              for (iVar16 = *piVar12; iVar16 != iVar14; iVar16 = *(int *)(iVar16 + 8)) {
                piVar12 = (int *)(iVar16 + 8);
              }
              bVar8 = true;
              *piVar12 = *(int *)(iVar14 + 8);
              *(unsigned int *)(iVar14 + 8) = *(unsigned int *)(iVar6 + 4);
              *(int *)(iVar6 + 4) = iVar14;
              *(int *)(iVar14 + 0xc) = iVar6;
            }
            if (*piVar11 == iVar14) {
              piVar11 = (int *)(iVar14 + 8);
            }
          }
          if (bVar8) goto LAB_82aed408;
        }
        uVar4 = uVar4 + 1;
      } while( true );
    }
    if ((iVar15 == 0) || (iVar6 = fn_82AC86B0(iVar16), iVar6 == 1)) {
      if (iVar14 == 0) {
        *piVar12 = *(int *)(iVar16 + 0x20);
      }
      else {
        *piVar11 = *(int *)(iVar14 + 0x20);
        iVar16 = iVar14;
      }
    }
    else {
      *piVar13 = *(int *)(iVar15 + 0x20);
      iVar16 = iVar15;
    }
  }
  else {
    iVar16 = 0;
  }
  return iVar16;
LAB_82aed408:
  cVar7 = fn_82ABE2E0(iVar6);
  if (cVar7 == '\0') {
    *(unsigned int *)(iVar6 + 0x14) = *(unsigned int *)(iVar6 + 0x14) & 0xfc001fff | piVar17[5] & 0x3ffe000U;
    *(unsigned int *)(iVar6 + 0x10) =
         ((unsigned int)piVar17[4] >> 0x15 & 7) << 0x15 | *(unsigned int *)(iVar6 + 0x10) & 0xff1fffff;
    fn_82AD1B28(iVar6);
    *(unsigned int *)(iVar6 + 8) = *(unsigned int *)(iVar6 + 8) | 0x1000000;
  }
  else {
    fn_82B8AC10(param_1[0xe],iVar6,0,0);
  }
  fn_82AEBAF8(param_1,piVar17);
  goto LAB_82aed060;
}

