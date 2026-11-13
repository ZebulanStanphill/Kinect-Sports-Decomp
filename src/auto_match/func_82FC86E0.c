extern int fn_82F691F0();
extern int fn_82FBCE48();
extern int fn_82FBECC0();
extern int fn_82FC14B0();
extern int fn_82FC4B08();
extern int fn_82FC8FD0();
extern int fn_82FC9070();
extern int fn_82FC99C0();
extern int fn_82FC9A10();
extern int fn_82FC9D50();
extern int fn_82FC9F38();
extern int fn_82FC9F88();
extern int fn_82FCA2D8();
extern int fn_82FCA468();
extern int fn_82FCCBF0();
extern int fn_82FD01E8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82079F68;
extern unsigned int lbl_82138D2C;
extern unsigned int lbl_8216CB28;
extern unsigned int lbl_8216DDB8;
extern unsigned int lbl_8216DDBC;
extern unsigned int lbl_8216DDD0;
extern unsigned int lbl_8216DE48;
extern unsigned int lbl_8216DE4C;
extern unsigned int lbl_8216DE50;
extern unsigned int lbl_8216DE54;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_5c;


/* WARNING: Removing unreachable block (ram,0x82fc8e8c) */
/* WARNING: Removing unreachable block (ram,0x82fc8df8) */
/* WARNING: Removing unreachable block (ram,0x82fc8ed0) */

unsigned __int64
fn_82FC86E0(int param_1,int *param_2,int *param_3,unsigned int param_4,unsigned int *param_5)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  float fVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  char cVar12;
  int iVar10;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar11;
  unsigned int uVar13;
  int (**pcVar14)();
  unsigned int uVar15;
  int iVar16;
  unsigned int *puVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  int *piVar21;
  __int64 lVar20;
  double dVar22;
  double dVar23;
  double dVar24;
  unsigned int uStack_5c;
  
  uVar11 = (unsigned int)param_5[1] >> 0xe;
  if (((uVar11 != 4) && (uVar11 != 3)) && (uVar11 != 0x3f)) {
    return 0x4e;
  }
  *(unsigned int *)(param_1 + 4) = param_4;
  uVar13 = 0;
  for (uVar15 = (unsigned int)param_5[1] >> 0xe; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
    uVar13 = uVar13 + 1;
  }
  *(unsigned int *)(param_1 + 0x100) = uVar13 & 0xff;
  *(unsigned int *)(param_1 + 0xfc) = *param_5;
  cVar12 = (**(int (***)())(*param_3 + 4))(param_3);
  uVar15 = *(unsigned int *)(param_1 + 0x100);
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 0x28);
  uVar18 = 2 - (unsigned __int64)((unsigned __int64)uVar15 < 2);
  if (cVar12 != '\0') {
    if (uVar11 == 3) {
      *(int (***)())(param_1 + 0x68) = fn_82FCA468;
      uVar8 = uVar18 + *(unsigned int *)(param_1 + 0x100) + 1;
    }
    else {
      if ((uVar11 == 4) || (uVar11 != 0x3f)) {
LAB_82fc8808:
        *(unsigned int *)(param_1 + 0x68) = 0;
        return 0x4e;
      }
      if (cVar1 == '\0') {
        uVar8 = (unsigned __int64)uVar15 - 1;
        *(int *)(param_1 + 0x100) = (int)uVar8;
        *(int (***)())(param_1 + 0x68) = fn_82FCCBF0;
        uVar8 = uVar18 + (uVar8 & 0xffffffff) + 1;
      }
      else {
        *(int (***)())(param_1 + 0x68) = fn_82FD01E8;
        uVar8 = uVar18 + *(unsigned int *)(param_1 + 0x100) + 1;
      }
    }
    goto LAB_82fc88b8;
  }
  if (uVar11 == 3) {
    pcVar14 = fn_82FBECC0;
LAB_82fc8894:
    *(int (***)())(param_1 + 0x68) = pcVar14;
  }
  else {
    if (uVar11 == 4) {
      pcVar14 = fn_82FBCE48;
      goto LAB_82fc8894;
    }
    if (uVar11 != 0x3f) goto LAB_82fc8808;
    if (cVar1 != '\0') {
      pcVar14 = fn_82FC4B08;
      goto LAB_82fc8894;
    }
    *(unsigned int *)(param_1 + 0x100) = uVar15 - 1;
    *(int (***)())(param_1 + 0x68) = fn_82FC14B0;
  }
  uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x100) & 0x7fffffff) << 1;
  uVar19 = *(unsigned int *)(param_1 + 0x100) + uVar18 + 1;
  if (uVar8 <= (uVar19 & 0xffffffff)) {
    uVar8 = uVar19;
  }
LAB_82fc88b8:
  uVar19 = 0;
  if ((uVar8 & 0xffffffff) != 0) {
    piVar21 = (int *)(param_1 + 0x30);
    do {
      iVar10 = (**(int (***)())(*param_2 + 4))(param_2,0x80);
      *piVar21 = iVar10;
      if (iVar10 == 0) {
        return 0x34;
      }
      uVar19 = uVar19 + 1;
      piVar21 = piVar21 + 1;
    } while ((uVar19 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(*(int *)(param_1 + 4) + 0x18);
  if ((uVar18 & 0xffffffff) == 1) {
    iVar10 = (**(int (***)())(*param_2 + 4))(param_2,0x118);
    if (iVar10 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = fn_82FC99C0();
    }
    *(int *)(param_1 + 8) = (int)uVar8;
    if ((uVar8 & 0xffffffff) == 0) {
      return 0x34;
    }
    uVar9 = fn_82FC9A10(uVar8,param_2,*(unsigned int *)(param_1 + 0xfc),0x20);
    if ((int)uVar9 != 1) {
      return uVar9;
    }
    fn_82FC9D50((double)*(float *)(param_1 + 0x60),*(unsigned int *)(param_1 + 8));
  }
  else {
    iVar10 = (**(int (***)())(*param_2 + 4))(param_2,0x218);
    if (iVar10 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = fn_82FC9F38();
    }
    *(int *)(param_1 + 0xc) = (int)uVar8;
    if ((uVar8 & 0xffffffff) == 0) {
      return 0x34;
    }
    uVar9 = fn_82FC9F88(uVar8,param_2,*(unsigned int *)(param_1 + 0xfc),0x20);
    if ((int)uVar9 != 1) {
      return uVar9;
    }
    fn_82FCA2D8((double)*(float *)(param_1 + 0x60),*(unsigned int *)(param_1 + 0xc));
  }
  *(int *)(param_1 + 0x104) = (int)((uVar18 & 0xffffffff) << 1);
  iVar10 = (**(int (***)())(*param_2 + 4))(param_2,(uVar18 & 0x7ffffff) << 5);
  *(int *)(param_1 + 0x10) = iVar10;
  if (iVar10 != 0) {
    uVar11 = 0;
    dVar24 = (double)lbl_821AAD20;
    *(unsigned int *)(param_1 + 100) = *(unsigned int *)(*(int *)(param_1 + 4) + 0x1c);
    if (*(int *)(param_1 + 0x104) != 0) {
      iVar10 = 0;
      do {
        iVar16 = iVar10 + *(int *)(param_1 + 0x10);
        if (iVar16 != 0) {
          *(float *)(iVar16 + 8) = (float)dVar24;
          *(float *)(iVar16 + 0xc) = (float)dVar24;
          *(float *)(iVar16 + 4) = (float)dVar24;
        }
        *(unsigned int *)(iVar10 + *(int *)(param_1 + 0x10)) = *(unsigned int *)(param_1 + 0xfc);
        fn_82FC8FD0((double)*(float *)(param_1 + 100),iVar10 + *(int *)(param_1 + 0x10));
        uVar11 = uVar11 + 1;
        iVar10 = iVar10 + 0x10;
      } while (uVar11 < *(unsigned int *)(param_1 + 0x104));
    }
    fVar4 = lbl_8216CB28;
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0xfc);
    *(float *)(param_1 + 0x18) = (float)dVar24;
    *(float *)(param_1 + 0x1c) = (float)dVar24;
    *(float *)(param_1 + 0x20) = lbl_82002AE0 - fVar4 / (float)*(unsigned int *)(param_1 + 0xfc);
    iVar10 = (**(int (***)())(*param_2 + 4))(param_2,(unsigned __int64)*(unsigned int *)(param_1 + 0x100) * 0x3c);
    *(int *)(param_1 + 0x2c) = iVar10;
    if (iVar10 != 0) {
      uVar11 = 0;
      if (*(int *)(param_1 + 0x100) != 0) {
        iVar10 = 0;
        do {
          puVar17 = (unsigned int *)(iVar10 + *(int *)(param_1 + 0x2c));
          if (puVar17 != (unsigned int *)0x0) {
            puVar17[6] = 0;
            puVar17[7] = 0;
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[2] = 0;
            puVar17[3] = 0;
            puVar17[4] = 0;
          }
          uVar11 = uVar11 + 1;
          iVar10 = iVar10 + 0x3c;
        } while (uVar11 < *(unsigned int *)(param_1 + 0x100));
      }
      uVar11 = 0;
      if (*(int *)(param_1 + 0x100) != 0) {
        lVar20 = 0;
        do {
          uVar9 = fn_82FC9070(lVar20 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2c),param_2,
                                    *(unsigned int *)(param_1 + 0xfc));
          if ((int)uVar9 != 1) {
            return uVar9;
          }
          uVar11 = uVar11 + 1;
          lVar20 = lVar20 + 0x3c;
        } while (uVar11 < *(unsigned int *)(param_1 + 0x100));
      }
      iVar10 = (**(int (***)())(*param_2 + 4))(param_2,*(int *)(param_1 + 0x100) << 4);
      *(int *)(param_1 + 0x28) = iVar10;
      if (iVar10 != 0) {
        uVar11 = 0;
        uStack_5c = (unsigned int)(__int64)
                          (*(float *)(*(int *)(param_1 + 4) + 0x10) *
                          (float)*(unsigned int *)(param_1 + 0xfc));
        if (*(int *)(param_1 + 0x100) != 0) {
          iVar10 = 0;
          do {
            iVar16 = iVar10 + *(int *)(param_1 + 0x28);
            if (iVar16 != 0) {
              *(unsigned int *)(iVar16 + 4) = 0;
              *(unsigned int *)(iVar16 + 8) = 0;
              *(unsigned int *)(iVar16 + 0xc) = 0;
            }
            uVar11 = uVar11 + 1;
            iVar10 = iVar10 + 0x10;
          } while (uVar11 < *(unsigned int *)(param_1 + 0x100));
        }
        if (*(int *)(param_1 + 0x100) == 0) {
          iVar10 = (**(int (***)())(*param_2 + 4))(param_2,*(int *)(param_1 + 0x100) << 4);
          *(int *)(param_1 + 0x24) = iVar10;
          if (iVar10 != 0) {
            uVar11 = 0;
            uStack_5c = (unsigned int)(__int64)
                              (*(float *)(*(int *)(param_1 + 4) + 0x14) *
                              (float)*(unsigned int *)(param_1 + 0xfc));
            if (*(int *)(param_1 + 0x100) != 0) {
              iVar10 = 0;
              do {
                iVar16 = iVar10 + *(int *)(param_1 + 0x24);
                if (iVar16 != 0) {
                  *(unsigned int *)(iVar16 + 4) = 0;
                  *(unsigned int *)(iVar16 + 8) = 0;
                  *(unsigned int *)(iVar16 + 0xc) = 0;
                }
                uVar11 = uVar11 + 1;
                iVar10 = iVar10 + 0x10;
              } while (uVar11 < *(unsigned int *)(param_1 + 0x100));
            }
            if (*(int *)(param_1 + 0x100) == 0) {
              *(unsigned int *)(param_1 + 0x108) = 0;
              *(unsigned char *)(param_1 + 0x110) = 0;
              dVar22 = (double)lbl_8216DE54;
              *(unsigned int *)(param_1 + 0x10c) = lbl_8216DDB8;
              uVar7 = lbl_8216DE50;
              uVar5 = lbl_8216DDBC;
              uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x24);
              *(unsigned int *)(param_1 + 0x7c) = 0;
              *(unsigned int *)(param_1 + 0x6c) = uVar5;
              *(unsigned int *)(param_1 + 0x78) = uVar2;
              *(unsigned int *)(param_1 + 0x74) = uVar2;
              *(int *)(param_1 + 0x80) = (int)(__int64)(ABS(dVar24) * dVar22);
              *(unsigned int *)(param_1 + 0x70) = uVar7;
              dVar23 = (double)lbl_82079F68;
              uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
              *(unsigned int *)(param_1 + 0x84) = lbl_82186E74;
              *(unsigned int *)(param_1 + 0x94) = 0;
              *(unsigned int *)(param_1 + 0x90) = uVar2;
              *(unsigned int *)(param_1 + 0x8c) = uVar2;
              *(int *)(param_1 + 0x98) = (int)(__int64)(ABS(dVar24) * dVar23);
              *(unsigned int *)(param_1 + 0x88) = lbl_82138D2C;
              uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 0xc);
              *(unsigned int *)(param_1 + 0xac) = 0;
              *(unsigned int *)(param_1 + 0x9c) = uVar5;
              *(unsigned int *)(param_1 + 0xa8) = uVar2;
              *(unsigned int *)(param_1 + 0xa4) = uVar2;
              *(int *)(param_1 + 0xb0) = (int)(__int64)(ABS(dVar24) * dVar22);
              *(unsigned int *)(param_1 + 0xa0) = uVar7;
              uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
              *(unsigned int *)(param_1 + 0xc4) = 0;
              *(unsigned int *)(param_1 + 0xb4) = uVar5;
              *(unsigned int *)(param_1 + 0xc0) = uVar2;
              *(unsigned int *)(param_1 + 0xbc) = uVar2;
              *(int *)(param_1 + 200) = (int)(__int64)(ABS(dVar24) * dVar22);
              *(unsigned int *)(param_1 + 0xb8) = uVar7;
              uVar6 = lbl_8216DDD0;
              dVar23 = (double)lbl_8216DE4C;
              uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x1c);
              *(unsigned int *)(param_1 + 0xf4) = 0;
              *(unsigned int *)(param_1 + 0xe4) = uVar6;
              *(unsigned int *)(param_1 + 0xf0) = uVar2;
              *(unsigned int *)(param_1 + 0xec) = uVar2;
              *(int *)(param_1 + 0xf8) = (int)(__int64)(ABS(dVar24) * dVar23);
              *(unsigned int *)(param_1 + 0xe8) = lbl_8216DE48;
              if ((uVar18 & 0xffffffff) == 2) {
                uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x20);
                *(unsigned int *)(param_1 + 0xdc) = 0;
                *(unsigned int *)(param_1 + 0xcc) = uVar5;
                *(unsigned int *)(param_1 + 0xd8) = uVar2;
                *(unsigned int *)(param_1 + 0xd4) = uVar2;
                *(int *)(param_1 + 0xe0) = (int)(__int64)(ABS(dVar24) * dVar22);
                *(unsigned int *)(param_1 + 0xd0) = uVar7;
              }
              return 1;
            }
            puVar3 = *(unsigned int **)(param_1 + 0x24);
            if (uStack_5c < 2) {
              uStack_5c = 1;
            }
            *puVar3 = uStack_5c;
            uVar18 = (**(int (***)())(*param_2 + 4))(param_2,uStack_5c << 2);
            uVar11 = (unsigned int)uVar18;
            puVar3[1] = uVar11;
            if ((uVar18 & 0xffffffff) != 0) {
              puVar3[2] = uVar11;
              puVar3[3] = uVar11 + *puVar3 * 4;
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(uVar18,0);
            }
          }
        }
        else {
          puVar3 = *(unsigned int **)(param_1 + 0x28);
          if (uStack_5c < 2) {
            uStack_5c = 1;
          }
          *puVar3 = uStack_5c;
          uVar18 = (**(int (***)())(*param_2 + 4))(param_2,uStack_5c << 2);
          uVar11 = (unsigned int)uVar18;
          puVar3[1] = uVar11;
          if ((uVar18 & 0xffffffff) != 0) {
            puVar3[2] = uVar11;
            puVar3[3] = uVar11 + *puVar3 * 4;
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(uVar18,0);
          }
        }
      }
    }
  }
  return 0x34;
}

