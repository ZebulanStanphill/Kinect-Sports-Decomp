typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a8;
extern int fn_82A75588();
extern int fn_82C30370();
extern unsigned int iStack_ac;
extern unsigned int uStack_b0;


unsigned __int64 fn_82C306A8(int *param_1,int param_2,__int64 param_3)

{
  bool bVar1;
  unsigned short uVar2;
  short sVar3;
  int iVar4;
  unsigned int uVar5;
  short *psVar6;
  int iVar7;
  bool bVar8;
  unsigned __int64 uVar9;
  short sVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned short *puVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  int iVar17;
  short sVar18;
  int iVar20;
  __int64 lVar19;
  int iVar21;
  short sVar24;
  int *piVar22;
  short *psVar23;
  __int64 lVar25;
  int *piVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  int iVar29;
  unsigned int uVar30;
  unsigned __int64 uVar31;
  unsigned __int64 uVar32;
  int iVar33;
  int *piStack00000014;
  unsigned int uStack_b0;
  int iStack_ac;
  unsigned int auStack_a8;
  
  iVar4 = *param_1;
  uVar9 = 0;
  uVar16 = 0;
  uVar2 = *(unsigned short *)(iVar4 + 0x22);
  uVar31 = (unsigned __int64)uVar2;
  lVar25 = 0;
  uVar30 = *(unsigned int *)(iVar4 + 0x100);
  uVar5 = *(unsigned int *)(iVar4 + 0xe4);
  uVar27 = (__int64)(int)uVar30 * (__int64)(int)(unsigned int)uVar2;
  if (uVar5 == 1) {
    if (uVar2 != 0) {
      iVar20 = 0;
      do {
        iVar29 = iVar20 * 0x6f0;
        sVar10 = (short)iVar20 + 1;
        iVar20 = (int)sVar10;
        puVar14 = (unsigned short *)
                  (*(int *)(iVar29 + *(int *)(iVar4 + 0x140) + 0x1a8) + param_2 * 0x1c);
        **(unsigned short **)(puVar14 + 4) = (short)*(unsigned int *)(iVar4 + 0x100);
        **(unsigned short **)(puVar14 + 6) = 0;
        *puVar14 = 1;
      } while ((int)sVar10 < (int)(unsigned int)*(unsigned short *)(iVar4 + 0x22));
    }
    uVar9 = 0;
  }
  else {
    if (*(int *)(iVar4 + 0xb0) == 0) {
      if (uVar5 == 4) {
        uVar16 = 1;
        lVar25 = 1;
        lVar19 = 2;
      }
      else if (uVar5 == 0x10) {
        lVar25 = 2;
        uVar16 = 1;
        lVar19 = 3;
      }
      else {
        uVar15 = 0;
        sVar10 = 0;
        uVar16 = uVar5;
        while (1 < uVar16) {
          uVar15 = uVar15 + 1;
          sVar10 = (short)uVar15;
          uVar16 = uVar5 >> (uVar15 & 0x3f);
        }
        lVar25 = 0;
        uVar16 = (int)(short)(sVar10 + 1) - 1;
        uVar5 = uVar16;
        while (1 < uVar5) {
          lVar25 = lVar25 + 1;
          uVar5 = uVar16 >> ((unsigned int)lVar25 & 0x3f);
        }
        lVar25 = lVar25 + 1;
        uVar16 = 0;
        lVar19 = lVar25;
      }
    }
    else {
      lVar19 = 0;
      uVar15 = uVar5 - 1;
      while (1 < uVar15) {
        lVar19 = lVar19 + 1;
        uVar15 = uVar5 - 1 >> ((unsigned int)lVar19 & 0x3f);
      }
      lVar19 = lVar19 + 1;
    }
    if (uVar2 != 0) {
      iVar20 = 0;
      do {
        lVar13 = 0;
        lVar12 = 0;
        iVar17 = 0;
        iVar29 = *(int *)(iVar20 * 0x6f0 + *(int *)(iVar4 + 0x140) + 0x1a8);
        iVar33 = iVar29 + param_2 * 0x1c;
        sVar10 = *(short *)(iVar29 + param_2 * 0x1c);
        if (1 < sVar10) {
          iVar29 = *(int *)(iVar33 + 8);
          param_3 = (__int64)sVar10 + -1;
          iVar21 = 0;
          do {
            iVar7 = iVar29 + iVar21;
            psVar6 = (short *)(iVar29 + iVar21);
            iVar17 = iVar17 + 2;
            iVar21 = iVar21 + 4;
            lVar13 = lVar13 - *psVar6;
            lVar12 = lVar12 - *(short *)(iVar7 + 2);
          } while (iVar17 < (int)param_3);
        }
        if (iVar17 < sVar10) {
          uVar27 = uVar27 - (__int64)*(short *)(iVar17 * 2 + *(int *)(iVar33 + 8));
        }
        sVar10 = (short)iVar20 + 1;
        iVar20 = (int)sVar10;
        uVar27 = lVar13 + lVar12 + uVar27;
      } while ((int)sVar10 < (int)(unsigned int)uVar2);
    }
    if (0 < (int)uVar27) {
      piVar26 = param_1 + 0x38;
      piStack00000014 = param_1;
      do {
        piVar22 = piStack00000014;
        iStack_ac = 0;
        uStack_b0 = 0;
        uVar5 = *(unsigned int *)(iVar4 + 0xe4);
        uVar11 = (unsigned __int64)uVar5 &
                 ~((((unsigned __int64)uVar30 & 0x7fffffff) << 1 | (unsigned __int64)(uVar30 >> 0x1f)) - 1);
        trapWord(6,(unsigned __int64)uVar5,0);
        bVar8 = false;
        trapWord(5,uVar11,0xffff);
        sVar10 = (short)((int)uVar30 / (int)uVar5);
        uVar28 = 0;
        uVar9 = fn_82A75588(piVar26,uVar31 + lVar19 + 1,param_3,uVar11);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        iVar20 = (int)uVar27;
        if (iVar20 == (unsigned int)*(unsigned short *)(iVar4 + 0x22) * *(int *)(iVar4 + 0x100)) {
          uVar9 = fn_82C30370(piVar26,1,&iStack_ac);
          if ((int)uVar9 < 0) {
            return uVar9;
          }
          if (iStack_ac == 0) {
            piVar22[0x20] = 0;
          }
          else {
            piVar22[0x20] = 1;
          }
        }
        uVar2 = *(unsigned short *)(iVar4 + 0x22);
        sVar24 = (short)*(unsigned int *)(iVar4 + 0x100);
        if (uVar2 != 0) {
          sVar18 = 0;
          piVar22 = (int *)(*(int *)(iVar4 + 0x140) + 0x1a8);
          do {
            sVar3 = **(short **)(param_2 * 0x1c + *piVar22 + 0xc);
            if (sVar3 < sVar24) {
              sVar24 = sVar3;
            }
            sVar18 = sVar18 + 1;
            piVar22 = piVar22 + 0x1bc;
          } while ((int)sVar18 < (int)(unsigned int)uVar2);
        }
        uVar31 = (unsigned __int64)uVar2;
        if (piStack00000014[0x20] == 0) {
          iStack_ac = 0;
          uVar31 = uVar28;
          if (uVar2 == 0) goto LAB_82c30a20;
          sVar18 = 0;
          piVar22 = (int *)(*(int *)(iVar4 + 0x140) + 0x1a8);
          do {
            if (sVar24 == **(short **)(param_2 * 0x1c + *piVar22 + 0xc)) {
              uVar28 = uVar28 + 1;
              iStack_ac = 1;
            }
            sVar18 = sVar18 + 1;
            piVar22 = piVar22 + 0x1bc;
          } while ((int)sVar18 < (int)(unsigned int)uVar2);
          uVar31 = uVar28;
          if ((int)uVar28 < 2) goto LAB_82c30a20;
        }
        else {
LAB_82c30a20:
          uVar28 = uVar31;
          bVar8 = true;
        }
        iVar29 = (int)uVar28;
        trapWord(6,uVar28,0);
        bVar1 = iVar20 / iVar29 == (int)sVar10;
        trapWord(5,uVar28 & ~(((uVar27 & 0x7fffffff) << 1 | (uVar27 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        if (bVar1) {
          bVar8 = true;
        }
        uVar11 = 0xffffffffffffffff;
        if (!bVar8) {
          uVar31 = 0x18;
          if (iVar29 < 0x19) {
            uVar31 = uVar28;
          }
          uVar11 = 0;
          uVar32 = uVar28;
          while (iVar29 != 0) {
            uVar9 = fn_82C30370(piVar26,uVar31,&auStack_a8);
            if ((int)uVar9 < 0) {
              return uVar9;
            }
            uVar32 = uVar32 - uVar31;
            iVar29 = (int)uVar32;
            uVar31 = 0x18;
            if (iVar29 < 0x19) {
              uVar31 = uVar32;
            }
            uVar11 = (auStack_a8 | uVar11) << ((__int64)(int)uVar31 & 0x7fU);
          }
        }
        if (!bVar1) {
          if (uVar16 == 0) {
            uVar9 = fn_82C30370(piVar26,lVar19,&uStack_b0);
            if ((int)uVar9 < 0) {
              return uVar9;
            }
          }
          else {
            uVar9 = fn_82C30370(piVar26,uVar16,&uStack_b0);
            if ((int)uVar9 < 0) {
              return uVar9;
            }
            if (uVar16 <= uStack_b0) {
              uVar9 = fn_82C30370(piVar26,lVar25,&uStack_b0);
              if ((int)uVar9 < 0) {
                return uVar9;
              }
              uStack_b0 = uStack_b0 + uVar16;
            }
          }
          if (*(int *)(iVar4 + 0xb0) == 0) {
            uVar30 = *(unsigned int *)(iVar4 + 0x100);
            uVar5 = 1 << (uStack_b0 & 0x3f);
            uVar31 = (unsigned __int64)uVar5;
            sVar10 = (short)((int)uVar30 / (int)uVar5);
            trapWord(5,uVar31 & ~((((unsigned __int64)uVar30 & 0x7fffffff) << 1 |
                                  (unsigned __int64)(uVar30 >> 0x1f)) - 1),0xffff);
          }
          else {
            uVar30 = *(unsigned int *)(iVar4 + 0x100);
            uVar31 = (unsigned __int64)*(unsigned int *)(iVar4 + 0xe4);
            sVar10 = (short)((int)uVar30 / (int)*(unsigned int *)(iVar4 + 0xe4)) * ((short)uStack_b0 + 1);
            trapWord(5,uVar31 & ~((((unsigned __int64)uVar30 & 0x7fffffff) << 1 |
                                  (unsigned __int64)(uVar30 >> 0x1f)) - 1),0xffff);
          }
          trapWord(6,uVar31,0);
        }
        if (((int)sVar10 < *(int *)(iVar4 + 0xec)) ||
           (uVar30 = *(unsigned int *)(iVar4 + 0x100), (int)uVar30 < (int)sVar10)) {
          return 0xffffffff80040002;
        }
        param_3 = 0;
        if (*(short *)(iVar4 + 0x22) == 0) {
          return 0xffffffff80040002;
        }
        piVar22 = (int *)(*(int *)(iVar4 + 0x140) + 0x1a8);
        do {
          psVar23 = (short *)(param_2 * 0x1c + *piVar22);
          sVar18 = *psVar23;
          psVar6 = *(short **)(psVar23 + 6);
          if (0x20 < sVar18) {
            return 0xffffffff80040002;
          }
          if ((sVar24 == *psVar6) &&
             (uVar28 = uVar28 - 1, (1L << ((__int64)(int)uVar28 & 0x7fU) & uVar11) != 0)) {
            if (0x1f < sVar18) {
              return 0xffffffff80040002;
            }
            uVar27 = uVar27 - (__int64)sVar10;
            *(short *)(sVar18 * 2 + *(int *)(psVar23 + 4)) = sVar10;
            *psVar23 = *psVar23 + 1;
            sVar18 = *psVar6;
            *psVar6 = sVar18 + sVar10;
            if ((__int64)uVar27 < 0) {
              return 0xffffffff80040002;
            }
            uVar30 = *(unsigned int *)(iVar4 + 0x100);
            if ((int)uVar30 < (int)(short)(sVar18 + sVar10)) {
              return 0xffffffff80040002;
            }
          }
          sVar18 = (short)param_3 + 1;
          uVar31 = (unsigned __int64)*(unsigned short *)(iVar4 + 0x22);
          piVar22 = piVar22 + 0x1bc;
          param_3 = (__int64)sVar18;
        } while ((int)sVar18 < (int)(unsigned int)*(unsigned short *)(iVar4 + 0x22));
        if (iVar20 <= (int)uVar27) {
          return 0xffffffff80040002;
        }
      } while (0 < (int)uVar27);
    }
    if ((int)uVar31 != 0) {
      iVar20 = 0;
      do {
        iVar29 = iVar20 * 0x6f0;
        sVar10 = (short)iVar20 + 1;
        iVar20 = (int)sVar10;
        **(unsigned short **)(*(int *)(iVar29 + *(int *)(iVar4 + 0x140) + 0x1a8) + param_2 * 0x1c + 0xc)
             = 0;
      } while ((int)sVar10 < (int)(unsigned int)*(unsigned short *)(iVar4 + 0x22));
    }
  }
  return uVar9;
}

