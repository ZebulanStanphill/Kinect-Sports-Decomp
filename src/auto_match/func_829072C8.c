typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82904070();
extern int fn_82904370();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82005F78;
extern unsigned int uStack_90;
extern unsigned int uStack_94;


unsigned int fn_829072C8(int param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,int *param_5,
                  unsigned __int64 param_6)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  double dVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  int *piVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  __int64 lVar21;
  double dVar22;
  double dVar23;
  unsigned int uStack_94;
  unsigned __int64 uStack_90;
  
  lVar18 = 0;
  bVar2 = true;
  bVar3 = true;
  uVar20 = 0;
  lVar12 = param_4;
  dVar22 = lbl_82005710;
  dVar14 = lbl_82005758;
  bVar5 = true;
  bVar6 = true;
  if ((param_6 & 0xffffffff) != 0) {
    do {
      bVar3 = bVar6;
      bVar2 = bVar5;
      iVar7 = fn_82904070(param_1,*(unsigned int *)lVar12,&uStack_90);
      if (iVar7 < 0) break;
      if (uStack_90 != dVar22) {
        bVar2 = false;
      }
      if (uStack_90 != dVar14) {
        bVar3 = false;
      }
      uVar20 = uVar20 + 1;
      lVar12 = lVar12 + 4;
      bVar5 = bVar2;
      bVar6 = bVar3;
    } while ((uVar20 & 0xffffffff) < (param_6 & 0xffffffff));
  }
  if (((uVar20 & 0xffffffff) == (param_6 & 0xffffffff)) && ((bVar2 || (bVar3)))) {
    lVar18 = fn_8265C940((param_6 & 0x3fffffff) << 2,0x24810000);
    if (lVar18 != 0) {
      if ((param_6 & 0xffffffff) != 0) {
        lVar12 = lVar18 + -4;
        uVar20 = param_6;
        do {
          if (bVar2) {
            uVar16 = *(unsigned int *)(param_1 + 0x24);
          }
          else {
            uVar16 = *(unsigned int *)(param_1 + 0x20);
          }
          lVar12 = lVar12 + 4;
          *(unsigned int *)lVar12 = uVar16;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        if ((param_6 & 0xffffffff) != 0) {
          lVar12 = param_3 + -4;
          uVar20 = param_6;
          uVar13 = param_6 & 0xffffffff;
          while (uVar13 != 0) {
            lVar12 = lVar12 + 4;
            *(unsigned int *)lVar12 = 0xffffffff;
            uVar20 = uVar20 - 1;
            uVar13 = uVar20;
          }
        }
      }
      uVar9 = 0;
      uVar20 = param_6 & 0xffffffff000fffff | 0x10000000;
      lVar12 = lVar18;
LAB_829076e8:
      uVar8 = fn_82904370(param_1,param_2,uVar20,param_3,lVar12,0,uVar9);
      if ((int)uVar8 < 0) goto LAB_82907844;
      goto LAB_82907704;
    }
  }
  else {
    uVar13 = 1;
    if (1 < (param_6 & 0xffffffff)) {
      piVar17 = param_5;
      do {
        piVar17 = piVar17 + 1;
        if (*param_5 != *piVar17) break;
        uVar13 = uVar13 + 1;
      } while ((uVar13 & 0xffffffff) < (param_6 & 0xffffffff));
    }
    dVar14 = uStack_90;
    if (((uVar20 & 0xffffffff) == (param_6 & 0xffffffff)) &&
       (iVar7 = fn_82904070(param_1,*param_5,&uStack_90), dVar14 = uStack_90, -1 < iVar7)) {
      uVar1 = (unsigned int)uStack_90;
      dVar14 = (double)(__int64)(int)uVar1;
      if (lbl_82005F78 <= ABS(uStack_90 - (double)(__int64)dVar14)) {
        if (lbl_82005F78 <= ABS(ABS(uStack_90) - lbl_82005730)) goto LAB_8290770c;
        if ((param_6 & 0xffffffff) != 0) {
          lVar12 = param_3 + -4;
          uVar20 = param_6;
          uVar13 = param_6 & 0xffffffff;
          while (uVar13 != 0) {
            lVar12 = lVar12 + 4;
            *(unsigned int *)lVar12 = 0xffffffff;
            uVar20 = uVar20 - 1;
            uVar13 = uVar20;
          }
        }
        dVar23 = uStack_90;
        uStack_90 = dVar14;
        uVar8 = fn_82904370(param_1,param_2,param_6 & 0xfffff | 0x10700000,param_3,param_4,0,4);
        if ((int)uVar8 < 0) goto LAB_82907844;
        if (dVar22 <= dVar23) {
          uVar9 = 4;
LAB_829076e4:
          uVar20 = param_6 & 0xfffff | 0x10300000;
          lVar12 = param_3;
          goto LAB_829076e8;
        }
      }
      else {
        uVar10 = 0;
        uVar13 = ((unsigned __int64)uVar1 ^ (__int64)((int)uVar1 >> 0x1f)) -
                 (__int64)((int)uVar1 >> 0x1f);
        uVar19 = 0;
        uVar20 = uVar13;
        if (uVar13 == 0) {
LAB_829074bc:
          uVar15 = 0;
        }
        else {
          do {
            uVar15 = uVar19;
            uVar19 = uVar20 & 1;
            uVar20 = (uVar20 & 0xffffffff) >> 1;
            uVar10 = uVar19 + uVar10;
            uVar19 = uVar15 + 1;
          } while (uVar20 != 0);
          if ((uVar15 + 1 & 0xffffffff) == 0) goto LAB_829074bc;
        }
        lVar12 = uVar10 - 1;
        if ((uVar10 & 0xffffffff) == 0) {
          lVar12 = 0;
        }
        uVar15 = lVar12 + uVar15;
        if ((int)uVar1 < 0) {
          uVar15 = uVar15 + param_6;
        }
        if (((*(unsigned int *)(*(int *)(param_1 + 8) + 0x6c) & 0x1000000) == 0) ||
           (uVar20 = param_6, (*(unsigned int *)(param_1 + 0x14) & 0x20) == 0)) {
          iVar7 = *(int *)(*(int *)(param_1 + 8) + 100);
          if (iVar7 == 0) {
            iVar7 = 1;
          }
          uVar20 = ((__int64)iVar7 * (__int64)(int)param_6 & 0x7fffffffU) << 1;
        }
        if ((uVar20 + 1 & 0xffffffff) < (uVar15 & 0xffffffff)) goto LAB_8290770c;
        uStack_90 = dVar14;
        lVar18 = fn_8265C940((param_6 & 0x3fffffff) << 2,0x24810000);
        if (lVar18 == 0) goto LAB_82907720;
        if ((param_6 & 0xffffffff) != 0) {
          lVar12 = lVar18 + -4;
          uVar20 = param_6;
          do {
            lVar12 = lVar12 + 4;
            *(unsigned int *)lVar12 = *(unsigned int *)(param_1 + 0x20);
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        if ((param_6 & 0xffffffff) != 0) {
          lVar12 = param_3 + -4;
          uVar20 = param_6;
          uVar19 = param_6 & 0xffffffff;
          while (uVar19 != 0) {
            lVar12 = lVar12 + 4;
            *(unsigned int *)lVar12 = 0xffffffff;
            uVar20 = uVar20 - 1;
            uVar19 = uVar20;
          }
        }
        uVar20 = param_6 & 0xfffff;
        uVar19 = uVar20 | 0x10000000;
        uVar8 = fn_82904370(param_1,param_2,uVar19,param_3,lVar18,0,0);
        if ((int)uVar8 < 0) goto LAB_82907844;
        if ((uVar13 & 0xffffffff) != 0) {
          if ((param_6 & 0xffffffff) != 0) {
            lVar12 = lVar18 + -4;
            uVar10 = param_6;
            uVar15 = param_6 & 0xffffffff;
            while (uVar15 != 0) {
              lVar12 = lVar12 + 4;
              *(unsigned int *)lVar12 = 0xffffffff;
              uVar10 = uVar10 - 1;
              uVar15 = uVar10;
            }
          }
          uVar9 = 0;
          lVar12 = 0;
          while ((uVar8 = fn_82904370(param_1,param_2,uVar19,lVar18,param_4,lVar12,uVar9),
                 -1 < (int)uVar8 &&
                 (((uVar13 & 1) == 0 ||
                  (uVar8 = fn_82904370(param_1,param_2,uVar20 | 0x20500000,param_3,param_3,lVar18,
                                         0), -1 < (int)uVar8))))) {
            uVar13 = (uVar13 & 0xffffffff) >> 1;
            if (uVar13 == 0) goto LAB_82907654;
            uVar9 = 4;
            uVar19 = uVar20 | 0x20500000;
            param_4 = lVar18;
            lVar12 = lVar18;
          }
          goto LAB_82907844;
        }
LAB_82907654:
        if ((int)uVar1 < 0) {
          uVar9 = 0;
          goto LAB_829076e4;
        }
      }
LAB_82907704:
      uVar8 = 0;
      goto LAB_82907844;
    }
LAB_8290770c:
    uStack_90 = dVar14;
    lVar18 = fn_8265C940((param_6 & 0x1fffffff) << 3,0x24810000);
    if (lVar18 != 0) {
      puVar11 = &uStack_94;
      lVar21 = 2;
      lVar12 = lVar18;
      do {
        puVar11 = puVar11 + 1;
        *puVar11 = (int)lVar12;
        lVar12 = lVar12 + (param_6 & 0x3fffffff) * 4;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      iVar7 = (((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF);
      if ((param_6 & 0xffffffff) != 0) {
        puVar11 = (unsigned int *)((((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF) + -4);
        uVar20 = param_6;
        uVar13 = param_6 & 0xffffffff;
        while (uVar13 != 0) {
          puVar11 = puVar11 + 1;
          *puVar11 = 0xffffffff;
          uVar20 = uVar20 - 1;
          uVar13 = uVar20;
        }
      }
      iVar4 = (((unsigned __int64)(uStack_90) >> 32) & 0xFFFFFFFF);
      if ((param_6 & 0xffffffff) != 0) {
        puVar11 = (unsigned int *)((((unsigned __int64)(uStack_90) >> 32) & 0xFFFFFFFF) + -4);
        uVar20 = param_6;
        uVar13 = param_6 & 0xffffffff;
        while (uVar13 != 0) {
          puVar11 = puVar11 + 1;
          *puVar11 = 0xffffffff;
          uVar20 = uVar20 - 1;
          uVar13 = uVar20;
        }
        if ((param_6 & 0xffffffff) != 0) {
          lVar12 = param_3 + -4;
          uVar20 = param_6;
          uVar13 = param_6 & 0xffffffff;
          while (uVar13 != 0) {
            lVar12 = lVar12 + 4;
            *(unsigned int *)lVar12 = 0xffffffff;
            uVar20 = uVar20 - 1;
            uVar13 = uVar20;
          }
        }
      }
      param_6 = param_6 & 0xfffff;
      uVar8 = fn_82904370(param_1,param_2,param_6 | 0x10600000,(((unsigned __int64)(uStack_90) >> 0) & 0xFFFFFFFF),param_4,0,0);
      if ((-1 < (int)uVar8) &&
         (uVar8 = fn_82904370(param_1,param_2,param_6 | 0x20500000,iVar4,param_5,iVar7,0),
         -1 < (int)uVar8)) {
        uVar8 = fn_82904370(param_1,param_2,param_6 | 0x10500000,param_3,iVar4,0,4);
        uVar8 = (int)uVar8 >> 0x1f & uVar8;
      }
      goto LAB_82907844;
    }
  }
LAB_82907720:
  uVar8 = 0x8007000e;
LAB_82907844:
  fn_8265C990(lVar18,0x24810000);
  return uVar8;
}

