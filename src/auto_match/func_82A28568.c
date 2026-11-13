typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_b0;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_ec;
extern int fn_82A27010();
extern int fn_82A279F0();
extern int fn_82A28E10();
extern int fn_82F691F0();
extern unsigned int uStack_8;
extern unsigned int uStack_dc;


unsigned int fn_82A28568(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned __int64 uVar6;
  bool bVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned char bVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  int iVar19;
  __int64 lVar20;
  unsigned char auStack_ec [4];
  unsigned char auStack_e8 [12];
  unsigned int uStack_dc;
  unsigned char auStack_b0 [168];
  unsigned int uStack_8;
  
  iVar9 = (int)param_1;
  if (((*(unsigned int *)(iVar9 + 0x14) & 0x40000) != 0) &&
     (uVar8 = KeGetCurrentProcessType(), *(unsigned char *)(iVar9 + 0x17b) != uVar8)) {
    KeBugCheckEx(0xf4,param_1,uStack_8,0x5d9,param_3);
  }
  uVar14 = (unsigned __int64)*(unsigned int *)(iVar9 + 0x18);
  uVar15 = param_3;
  if ((param_3 & 0xffffffff) == 0) {
    uVar15 = 1;
  }
  uVar6 = uVar15 + 0x1f & 0xfffffff0;
  uVar15 = uVar6 >> 4;
  bVar7 = ((uVar14 | param_2 & 0xffffffff) & 1) == 0;
  if (bVar7) {
    RtlEnterCriticalSection(*(unsigned int *)(iVar9 + 0x580));
  }
  if (0x7f < uVar15) {
    if (*(unsigned int *)(iVar9 + 0x1c) < uVar15) {
      if (((*(unsigned int *)(iVar9 + 0x14) & 2) != 0) &&
         (iVar9 = NtAllocateVirtualMemory
                            (auStack_ec,auStack_e8,(~(uVar14 | param_2) & 8) << 0x14 | 0x60001000,4,
                             *(unsigned int *)(iVar9 + 0x590)), -1 < iVar9)) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(0,0,0x30);
      }
    }
    else {
LAB_82a28820:
      uVar12 = param_1 + 0x180;
      if (((uVar12 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(iVar9 + 0x184)) &&
         (uVar15 <= *(unsigned short *)(*(unsigned int *)(iVar9 + 0x184) - 8))) {
        for (puVar10 = (unsigned int *)*(unsigned int *)uVar12; uVar17 = ZEXT48(puVar10),
            (uVar12 & 0xffffffff) != uVar17; puVar10 = (unsigned int *)*puVar10) {
          uVar16 = uVar17 - 8;
          if (uVar15 <= *(unsigned short *)uVar16) {
            puVar11 = (unsigned int *)puVar10[1];
            uVar8 = *puVar10;
            if ((*puVar11 == *(unsigned int *)(uVar8 + 4)) && (*puVar11 == uVar17)) {
              *puVar11 = uVar8;
              *(unsigned int **)(uVar8 + 4) = puVar11;
            }
            goto LAB_82a288f4;
          }
        }
      }
      uVar16 = fn_82A279F0(param_1);
      if ((uVar16 & 0xffffffff) != 0) {
        puVar10 = *(unsigned int **)((int)uVar16 + 0xc);
        uVar8 = *(unsigned int *)((int)uVar16 + 8);
        if ((*puVar10 == *(unsigned int *)(uVar8 + 4)) && ((unsigned __int64)*puVar10 == (uVar16 + 8 & 0xffffffff))
           ) {
          *puVar10 = uVar8;
          *(unsigned int **)(uVar8 + 4) = puVar10;
        }
        goto LAB_82a288f4;
      }
    }
    if (((uVar14 | param_2 & 0xffffffff) & 4) != 0) {
      RtlRaiseException(auStack_b0);
    }
    uStack_dc = 0;
    goto LAB_82a28dd0;
  }
  uVar16 = (uVar15 + 0x30) * 8 + param_1;
  puVar10 = (unsigned int *)uVar16;
  if ((unsigned __int64)*puVar10 == (uVar16 & 0xffffffff)) {
    uVar16 = uVar6 >> 9;
    puVar10 = (unsigned int *)(((int)uVar16 + 0x58) * 4 + iVar9);
    puVar11 = puVar10 + 1;
    uVar8 = *puVar10 & ~((1 << ((unsigned int)uVar15 & 0x1f)) - 1U);
    if (uVar16 == 0) {
      if (uVar8 == 0) {
        uVar8 = *puVar11;
        puVar11 = puVar10 + 2;
        goto LAB_82a28748;
      }
      iVar19 = iVar9 + 0x180;
    }
    else if (uVar16 == 1) {
LAB_82a28748:
      if (uVar8 == 0) {
        uVar8 = *puVar11;
        puVar11 = puVar11 + 1;
        goto LAB_82a28768;
      }
      iVar19 = iVar9 + 0x280;
    }
    else {
      if (uVar16 < 3) {
LAB_82a28768:
        if (uVar8 != 0) {
          iVar19 = iVar9 + 0x380;
          goto LAB_82a28794;
        }
        uVar8 = *puVar11;
      }
      else if (uVar16 != 3) goto LAB_82a28820;
      if (uVar8 == 0) goto LAB_82a28820;
      iVar19 = iVar9 + 0x480;
    }
LAB_82a28794:
    puVar2 = *(unsigned int **)
              ((int)((0x1fU - LZCOUNT(uVar8 & ~(uVar8 - 1)) & 0xffffffff) << 3) + iVar19 + 4);
    uVar16 = ZEXT48(puVar2) - 8;
    puVar10 = (unsigned int *)puVar2[1];
    puVar11 = (unsigned int *)*puVar2;
    if ((*puVar10 == puVar11[1]) && ((unsigned __int64)*puVar10 == ZEXT48(puVar2))) {
      *puVar10 = (unsigned int)puVar11;
      puVar11[1] = (unsigned int)puVar10;
      if (puVar11 == puVar10) {
        iVar19 = ((*(unsigned short *)uVar16 >> 5) + 0x58) * 4;
        *(unsigned int *)(iVar19 + iVar9) = *(unsigned int *)(iVar19 + iVar9) ^ 1 << (*(unsigned short *)uVar16 & 0x1f);
      }
    }
LAB_82a288f4:
    puVar3 = (unsigned short *)uVar16;
    bVar13 = *(unsigned char *)((int)puVar3 + 5);
    *(unsigned int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) - (unsigned int)*puVar3;
    *(unsigned char *)((int)puVar3 + 5) = 1;
    uVar12 = *puVar3 - uVar15;
    *puVar3 = (unsigned short)uVar15;
    *(char *)(puVar3 + 3) = (char)uVar6 - (char)param_3;
    *(unsigned char *)((int)puVar3 + 7) = 0;
    if (uVar12 != 0) {
      if ((uVar12 & 0xffffffff) == 1) {
        *puVar3 = *puVar3 + 1;
        *(char *)(puVar3 + 3) = *(char *)(puVar3 + 3) + '\x10';
      }
      else {
        lVar20 = uVar15 * 0x10 + uVar16;
        uVar6 = uVar12 & 0xffff;
        puVar4 = (unsigned short *)lVar20;
        *(unsigned char *)((int)puVar4 + 5) = bVar13;
        puVar4[1] = (unsigned short)uVar15;
        *(unsigned char *)(puVar4 + 2) = *(unsigned char *)(puVar3 + 2);
        *puVar4 = (unsigned short)uVar12;
        if ((bVar13 & 0x10) == 0) {
          lVar18 = (uVar12 & 0xfffffff) * 0x10 + lVar20;
          puVar5 = (unsigned short *)lVar18;
          if ((*(unsigned char *)((int)puVar5 + 5) & 1) != 0) {
            puVar5[1] = (unsigned short)uVar12;
            if (uVar6 < 0x80) {
              *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar4 + 5) & 0x10;
              uVar15 = (uVar6 + 0x30) * 8 + param_1;
              puVar10 = (unsigned int *)uVar15;
              if ((unsigned __int64)*puVar10 == (uVar15 & 0xffffffff)) {
                iVar19 = ((*puVar4 >> 5) + 0x58) * 4;
                uVar8 = *(unsigned int *)(iVar19 + iVar9) | 1 << (*puVar4 & 0x1f);
                goto LAB_82a28a88;
              }
            }
            else {
              *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar4 + 5) & 0x10;
              for (puVar10 = *(unsigned int **)(iVar9 + 0x180);
                  ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar10) &&
                  (*(unsigned short *)(puVar10 + -2) < uVar6)); puVar10 = (unsigned int *)*puVar10) {
              }
            }
            goto LAB_82a28a8c;
          }
          *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar5 + 5);
          puVar10 = *(unsigned int **)(puVar5 + 4);
          puVar11 = *(unsigned int **)(puVar5 + 6);
          if (((unsigned __int64)*puVar11 == (unsigned __int64)puVar10[1]) &&
             ((unsigned __int64)*puVar11 == (lVar18 + 8U & 0xffffffff))) {
            *puVar11 = (unsigned int)puVar10;
            puVar10[1] = (unsigned int)puVar11;
            if ((puVar10 == puVar11) && (uVar1 = *puVar5, uVar1 < 0x80)) {
              iVar19 = ((uVar1 >> 5) + 0x58) * 4;
              *(unsigned int *)(iVar19 + iVar9) = 1 << (uVar1 & 0x1f) ^ *(unsigned int *)(iVar19 + iVar9);
            }
          }
          *(unsigned int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) - (unsigned int)*puVar5;
          uVar12 = *puVar5 + uVar12;
          if ((uVar12 & 0xffffffff) < 0xf001) {
            uVar15 = uVar12 & 0xffff;
            *puVar4 = (unsigned short)uVar12;
            if ((*(unsigned char *)((int)puVar4 + 5) & 0x10) == 0) {
              *(unsigned short *)((int)puVar4 + (int)((uVar12 & 0xffffffff) << 4) + 2) = (unsigned short)uVar12;
            }
            if (uVar15 < 0x80) {
              *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar4 + 5) & 0x10;
              uVar15 = (uVar15 + 0x30) * 8 + param_1;
              puVar10 = (unsigned int *)uVar15;
              if ((unsigned __int64)*puVar10 == (uVar15 & 0xffffffff)) {
                iVar19 = ((*puVar4 >> 5) + 0x58) * 4;
                *(unsigned int *)(iVar19 + iVar9) = *(unsigned int *)(iVar19 + iVar9) | 1 << (*puVar4 & 0x1f);
              }
            }
            else {
              *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar4 + 5) & 0x10;
              for (puVar10 = *(unsigned int **)(iVar9 + 0x180);
                  ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar10) &&
                  (*(unsigned short *)(puVar10 + -2) < uVar15)); puVar10 = (unsigned int *)*puVar10) {
              }
            }
            puVar2 = (unsigned int *)puVar10[1];
            *(unsigned int **)(puVar4 + 4) = puVar10;
            *(unsigned int **)(puVar4 + 6) = puVar2;
            *puVar2 = puVar4 + 4;
            puVar10[1] = (unsigned int)(puVar4 + 4);
            iVar19 = (int)uVar12 + *(int *)(iVar9 + 0x30);
            goto LAB_82a28c4c;
          }
          fn_82A27010(param_1,lVar20);
        }
        else {
          if (uVar6 < 0x80) {
            uVar15 = (uVar6 + 0x30) * 8 + param_1;
            *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar4 + 5) & 0x10;
            puVar10 = (unsigned int *)uVar15;
            if ((unsigned __int64)*puVar10 == (uVar15 & 0xffffffff)) {
              iVar19 = ((*puVar4 >> 5) + 0x58) * 4;
              uVar8 = 1 << (*puVar4 & 0x1f) | *(unsigned int *)(iVar19 + iVar9);
LAB_82a28a88:
              *(unsigned int *)(iVar19 + iVar9) = uVar8;
            }
          }
          else {
            *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar4 + 5) & 0x10;
            for (puVar10 = *(unsigned int **)(iVar9 + 0x180);
                ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar10) &&
                (*(unsigned short *)(puVar10 + -2) < uVar6)); puVar10 = (unsigned int *)*puVar10) {
            }
          }
LAB_82a28a8c:
          puVar2 = (unsigned int *)puVar10[1];
          *(unsigned int **)(puVar4 + 4) = puVar10;
          *(unsigned int **)(puVar4 + 6) = puVar2;
          *puVar2 = puVar4 + 4;
          puVar10[1] = (unsigned int)(puVar4 + 4);
          iVar19 = (int)uVar12 + *(int *)(iVar9 + 0x30);
LAB_82a28c4c:
          *(int *)(iVar9 + 0x30) = iVar19;
        }
        bVar13 = 0;
        if ((*(unsigned char *)((int)puVar4 + 5) & 0x10) != 0) {
          *(unsigned short **)(*(int *)((*(unsigned char *)(puVar4 + 2) + 0x18) * 4 + iVar9) + 0x40) = puVar4;
        }
      }
    }
    if ((bVar13 & 0x10) != 0) {
      *(unsigned char *)((int)puVar3 + 5) = *(unsigned char *)((int)puVar3 + 5) | 0x10;
    }
  }
  else {
    puVar2 = (unsigned int *)puVar10[1];
    uVar16 = ZEXT48(puVar2) - 8;
    bVar13 = *(unsigned char *)((int)puVar2 - 3);
    puVar10 = (unsigned int *)puVar2[1];
    puVar11 = (unsigned int *)*puVar2;
    if ((*puVar10 == puVar11[1]) && ((unsigned __int64)*puVar10 == ZEXT48(puVar2))) {
      *puVar10 = (unsigned int)puVar11;
      puVar11[1] = (unsigned int)puVar10;
      if (puVar11 == puVar10) {
        iVar19 = ((*(unsigned short *)uVar16 >> 5) + 0x58) * 4;
        *(unsigned int *)(iVar19 + iVar9) = *(unsigned int *)(iVar19 + iVar9) ^ 1 << (*(unsigned short *)uVar16 & 0x1f);
      }
    }
    *(unsigned int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) - (unsigned int)uVar15;
    *(unsigned char *)((int)puVar2 - 3) = bVar13 & 0x10 | 1;
    *(char *)((int)puVar2 - 2) = (char)uVar6 - (char)param_3;
    *(unsigned char *)((int)puVar2 - 1) = 0;
  }
  uStack_dc = (unsigned int)(uVar16 + 0x10);
  if (bVar7) {
    RtlLeaveCriticalSection(*(unsigned int *)(iVar9 + 0x580));
  }
  if (((uVar14 | param_2 & 0xffffffff) & 8) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar16 + 0x10,0,param_3);
  }
LAB_82a28dd0:
  fn_82A28E10();
  return uStack_dc;
}

