#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e8;
extern int fn_82A27010();
extern int fn_82A27260();
extern int fn_82A28568();
extern int fn_82A28E60();
extern int fn_82A299C0();
extern int fn_82F63CA0();
extern int fn_82F691F0();
extern unsigned int iStack00000014;
extern unsigned int iStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_8;


int fn_82A29158(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar6;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  int iVar12;
  unsigned short *puVar13;
  unsigned short *puVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  __int64 lVar19;
  __int64 lVar20;
  int iStack00000014;
  int iStack00000024;
  unsigned int uStack0000002c;
  unsigned char auStack_e8 [16];
  unsigned char auStack_d8 [24];
  unsigned char auStack_c0 [184];
  unsigned int uStack_8;
  
  iVar8 = (int)param_1;
  iVar12 = (int)param_3;
  uStack0000002c = (unsigned int)param_4;
  iStack00000014 = iVar8;
  iStack00000024 = iVar12;
  if (((*(unsigned int *)(iVar8 + 0x14) & 0x40000) != 0) &&
     (uVar7 = KeGetCurrentProcessType(), *(unsigned char *)(iVar8 + 0x17b) != uVar7)) {
    KeBugCheckEx(0xf4,param_1,uStack_8,0xc6c,param_3);
  }
  if ((param_3 & 0xffffffff) == 0) {
    return 0;
  }
  uVar9 = (unsigned __int64)*(unsigned int *)(iVar8 + 0x18);
  uVar15 = uVar9 | param_2;
  if (0x7fffffff < (param_4 & 0xffffffff)) {
    return 0;
  }
  uVar10 = param_4;
  if ((param_4 & 0xffffffff) == 0) {
    uVar10 = 1;
  }
  uVar18 = uVar9 | param_2 & 0xffffffff;
  uVar10 = *(unsigned int *)(iVar8 + 0x50) + uVar10 & (unsigned __int64)*(unsigned int *)(iVar8 + 0x54);
  if ((((uVar18 & 0x3fffff00) != 0 || (uVar18 & 0x3c000100) != 0) || (*(int *)(iVar8 + 0x17c) != 0))
     || ((*(unsigned char *)(iVar12 + -0xb) & 2) != 0)) {
    uVar10 = uVar10 + 0x10;
  }
  if (((uVar9 | param_2 & 0xffffffff) & 1) == 0) {
    RtlEnterCriticalSection(*(unsigned int *)(iVar8 + 0x580));
    uVar15 = uVar15 ^ 1;
  }
  lVar19 = param_3 - 0x10;
  puVar14 = (unsigned short *)lVar19;
  bVar1 = *(unsigned char *)(iVar12 + -0xb);
  if ((bVar1 & 1) == 0) goto LAB_82a2996c;
  uVar2 = *puVar14;
  uVar9 = (unsigned __int64)uVar2;
  if ((bVar1 & 8) == 0) {
    uVar18 = uVar9 * 0x10 - (unsigned __int64)*(unsigned char *)(iVar12 + -10);
  }
  else {
    uVar10 = uVar10 + 0x1001f & 0xffff0000;
    uVar18 = (*(unsigned int *)(iVar12 + -0x18) - uVar9) - 0x30;
    uVar9 = (unsigned __int64)(*(unsigned int *)(iVar12 + -0x18) >> 4);
  }
  iVar17 = (int)uVar10;
  uVar10 = (uVar10 & 0xffffffff) >> 4;
  uVar6 = param_3;
  uVar16 = uVar15;
  if (uVar9 < uVar10) {
    if (((bVar1 & 8) == 0) &&
       (iVar8 = fn_82A27260(param_1,uVar15,lVar19,param_4,uVar10), iVar5 = iStack00000024,
       iVar8 != 0)) goto LAB_82a29938;
    if ((uVar15 & 0x10) == 0) {
      uVar16 = uVar15 << 0x20 | uVar15 & 0xc003ffff;
      if ((*(unsigned char *)(iVar12 + -0xb) & 2) == 0) {
        if ((unsigned __int64)*(unsigned char *)(iVar12 + -9) != 0) {
          uVar16 = (unsigned __int64)*(unsigned char *)(iVar12 + -9) << 0x12 | uVar16;
        }
      }
      else {
        uVar16 = ((unsigned __int64)*(unsigned char *)(iVar12 + -0xb) & 0xe0) << 4 | 0x100 |
                 (uVar15 & 0xc003ffff) << 0x20 | uVar15 & 0xc003f1ff;
        if ((*(unsigned char *)(iVar12 + -0xb) & 8) == 0) {
          puVar13 = puVar14 + (unsigned int)*puVar14 * 8 + -8;
        }
        else {
          puVar13 = (unsigned short *)(iVar12 + -0x28);
        }
        uVar2 = puVar13[1];
        if (((unsigned __int64)uVar2 != 0) && ((uVar2 & 0x8000) == 0)) {
          uVar16 = ((unsigned __int64)uVar2 & 0x3fff) << 0x12 | uVar16;
        }
      }
      uVar6 = fn_82A28568(param_1,uVar16 << 0x20 | uVar16 & 0xfffffff7,param_4);
      iVar5 = (int)uVar6;
      if (uVar6 != 0) {
        if ((*(unsigned char *)(iVar5 + -0xb) & 2) != 0) {
          if ((*(unsigned char *)(iVar5 + -0xb) & 8) == 0) {
            puVar13 = (unsigned short *)(iVar5 + -0x10) + (unsigned int)*(unsigned short *)(iVar5 + -0x10) * 8 + -8;
          }
          else {
            puVar13 = (unsigned short *)(iVar5 + -0x28);
          }
          if ((*(unsigned char *)(iVar12 + -0xb) & 2) == 0) {
            puVar13[0] = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[7] = 0;
          }
          else {
            if ((*(unsigned char *)(iVar12 + -0xb) & 8) == 0) {
              puVar14 = puVar14 + (unsigned int)*puVar14 * 8 + -8;
            }
            else {
              puVar14 = (unsigned short *)(iVar12 + -0x28);
            }
            *(unsigned int *)(puVar13 + 2) = *(unsigned int *)(puVar14 + 2);
          }
        }
        uVar15 = param_4;
        if ((uVar18 & 0xffffffff) <= (param_4 & 0xffffffff)) {
          uVar15 = uVar18;
        }
        fn_82F63CA0(uVar6,param_3,uVar15);
        if (((uVar18 & 0xffffffff) < (param_4 & 0xffffffff)) && ((uVar16 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uVar6 + uVar18,0,param_4 - uVar18);
        }
        fn_82A28E60(param_1,uVar16,param_3);
      }
      goto LAB_82a29938;
    }
    iStack00000024 = 0;
  }
  else {
    if (uVar10 + 1 == uVar9) {
      iVar17 = iVar17 + 0x10;
      uVar10 = uVar10 + 1;
    }
    if ((bVar1 & 8) == 0) {
      if ((bVar1 & 2) == 0) {
        *(char *)(iVar12 + -10) = (char)iVar17 - (char)param_4;
      }
      else {
        iVar5 = (int)(uVar10 << 4);
        *(unsigned __int64 *)((int)puVar14 + iVar5 + -0x10) =
             *(unsigned __int64 *)(puVar14 + (unsigned int)uVar2 * 8 + -8);
        *(unsigned __int64 *)((int)puVar14 + iVar5 + -8) = *(unsigned __int64 *)(puVar14 + (unsigned int)uVar2 * 8 + -4)
        ;
        *(char *)(iVar12 + -10) = (char)iVar17 - (char)param_4;
      }
    }
    else {
      *puVar14 = ((short)iVar17 - (short)param_4) - 0x30;
    }
    if (((uVar18 & 0xffffffff) < (param_4 & 0xffffffff)) && ((uVar15 & 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar18 + param_3,0,param_4 - uVar18);
    }
    iVar5 = iStack00000024;
    if (uVar10 != uVar9) {
      bVar1 = *(unsigned char *)(iVar12 + -0xb);
      if ((bVar1 & 8) == 0) {
        lVar19 = (uVar10 & 0xfffffff) * 0x10 + lVar19;
        puVar13 = (unsigned short *)lVar19;
        *(unsigned char *)((int)puVar13 + 5) = bVar1 & 0xfe;
        puVar13[1] = (unsigned short)uVar10;
        *(unsigned char *)(puVar13 + 2) = *(unsigned char *)(iVar12 + -0xc);
        uVar15 = *puVar14 - uVar10;
        *puVar14 = (unsigned short)uVar10;
        *(unsigned char *)(iVar12 + -0xb) = *(unsigned char *)(iVar12 + -0xb) & 0xef;
        uVar2 = (unsigned short)uVar15;
        if ((bVar1 & 0x10) == 0) {
          lVar20 = (uVar15 & 0xfffffff) * 0x10 + lVar19;
          puVar14 = (unsigned short *)lVar20;
          if ((*(unsigned char *)((int)puVar14 + 5) & 1) != 0) {
            *puVar13 = uVar2;
            puVar14[1] = uVar2;
            *(unsigned char *)((int)puVar13 + 5) = *(unsigned char *)((int)puVar13 + 5) & 0xf8;
            if ((uVar15 & 0xffff) < 0x80) goto LAB_82a294e0;
            for (puVar11 = *(unsigned int **)(iVar8 + 0x180);
                ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                ((unsigned __int64)*(unsigned short *)(puVar11 + -2) < (uVar15 & 0xffff)));
                puVar11 = (unsigned int *)*puVar11) {
            }
            goto LAB_82a29518;
          }
          *(unsigned char *)((int)puVar13 + 5) = *(unsigned char *)((int)puVar14 + 5);
          puVar11 = *(unsigned int **)(puVar14 + 6);
          puVar4 = *(unsigned int **)(puVar14 + 4);
          if (((unsigned __int64)*puVar11 == (unsigned __int64)puVar4[1]) &&
             ((unsigned __int64)*puVar11 == (lVar20 + 8U & 0xffffffff))) {
            *puVar11 = (unsigned int)puVar4;
            puVar4[1] = (unsigned int)puVar11;
            if ((puVar4 == puVar11) && (uVar2 = *puVar14, uVar2 < 0x80)) {
              iVar12 = ((uVar2 >> 5) + 0x58) * 4;
              *(unsigned int *)(iVar12 + iVar8) = *(unsigned int *)(iVar12 + iVar8) ^ 1 << (uVar2 & 0x1f);
            }
          }
          if ((*(unsigned char *)((int)puVar14 + 5) & 4) != 0) {
            uVar9 = (unsigned __int64)*puVar14 * 0x10 - 0x18;
            if (((*(unsigned char *)((int)puVar14 + 5) & 2) != 0) && (4 < (uVar9 & 0xffffffff))) {
              uVar9 = (unsigned __int64)*puVar14 * 0x10 - 0x1c;
            }
            RtlCompareMemoryUlong(lVar20 + 0x18,uVar9,0xfffffffffeeefeee);
          }
          *(unsigned int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) - (unsigned int)*puVar14;
          uVar15 = *puVar14 + uVar15;
          if (0xf000 < (uVar15 & 0xffffffff)) {
            fn_82A27010(param_1,lVar19);
            iVar5 = iStack00000024;
            goto LAB_82a29938;
          }
          uVar9 = uVar15 & 0xffff;
          *puVar13 = (unsigned short)uVar15;
          if ((*(unsigned char *)((int)puVar13 + 5) & 0x10) == 0) {
            *(unsigned short *)((int)puVar13 + (int)((uVar15 & 0xffffffff) << 4) + 2) = (unsigned short)uVar15;
          }
          else {
            *(unsigned short **)(*(int *)((*(unsigned char *)(puVar13 + 2) + 0x18) * 4 + iVar8) + 0x40) = puVar13;
          }
          *(unsigned char *)((int)puVar13 + 5) = *(unsigned char *)((int)puVar13 + 5) & 0xf8;
          if (uVar9 < 0x80) {
            uVar9 = (uVar9 + 0x30) * 8 + param_1;
            puVar11 = (unsigned int *)uVar9;
            if ((unsigned __int64)*puVar11 == (uVar9 & 0xffffffff)) {
              iVar12 = ((*puVar13 >> 5) + 0x58) * 4;
              *(unsigned int *)(iVar12 + iVar8) = *(unsigned int *)(iVar12 + iVar8) | 1 << (*puVar13 & 0x1f);
            }
          }
          else {
            for (puVar11 = *(unsigned int **)(iVar8 + 0x180);
                ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                (*(unsigned short *)(puVar11 + -2) < uVar9)); puVar11 = (unsigned int *)*puVar11) {
            }
          }
          puVar3 = (unsigned int *)puVar11[1];
          *(unsigned int **)(puVar13 + 4) = puVar11;
          *(unsigned int **)(puVar13 + 6) = puVar3;
          *puVar3 = puVar13 + 4;
          puVar11[1] = (unsigned int)(puVar13 + 4);
          iVar12 = (int)uVar15 + *(int *)(iVar8 + 0x30);
        }
        else {
          *(unsigned short **)(*(int *)((*(unsigned char *)(puVar13 + 2) + 0x18) * 4 + iVar8) + 0x40) = puVar13;
          *puVar13 = uVar2;
          *(unsigned char *)((int)puVar13 + 5) = *(unsigned char *)((int)puVar13 + 5) & 0xf8;
          if ((uVar15 & 0xffff) < 0x80) {
LAB_82a294e0:
            uVar9 = ((uVar15 & 0xffff) + 0x30) * 8 + param_1;
            puVar11 = (unsigned int *)uVar9;
            if ((unsigned __int64)*puVar11 == (uVar9 & 0xffffffff)) {
              iVar12 = ((*puVar13 >> 5) + 0x58) * 4;
              *(unsigned int *)(iVar12 + iVar8) = *(unsigned int *)(iVar12 + iVar8) | 1 << (*puVar13 & 0x1f);
            }
          }
          else {
            for (puVar11 = *(unsigned int **)(iVar8 + 0x180);
                ((param_1 + 0x180U & 0xffffffff) != ZEXT48(puVar11) &&
                ((unsigned __int64)*(unsigned short *)(puVar11 + -2) < (uVar15 & 0xffff)));
                puVar11 = (unsigned int *)*puVar11) {
            }
          }
LAB_82a29518:
          puVar3 = (unsigned int *)puVar11[1];
          *(unsigned int **)(puVar13 + 4) = puVar11;
          *(unsigned int **)(puVar13 + 6) = puVar3;
          *puVar3 = puVar13 + 4;
          puVar11[1] = (unsigned int)(puVar13 + 4);
          iVar12 = (int)uVar15 + *(int *)(iVar8 + 0x30);
        }
        *(int *)(iVar8 + 0x30) = iVar12;
        iVar5 = iStack00000024;
      }
      else {
        iVar8 = NtFreeVirtualMemory(auStack_d8,auStack_e8,0x8000,*(unsigned int *)(iVar8 + 0x590));
        iVar5 = iStack00000024;
        if (-1 < iVar8) {
          *(int *)(iVar12 + -0x18) = *(int *)(iVar12 + -0x18) - ((int)(uVar9 << 4) - iVar17);
        }
      }
    }
LAB_82a29938:
    iStack00000024 = iVar5;
    uVar15 = uVar16;
    if ((uVar6 & 0xffffffff) != 0) goto LAB_82a2996c;
  }
  if ((uVar15 & 4) != 0) {
    RtlRaiseException(auStack_c0);
  }
LAB_82a2996c:
  fn_82A299C0();
  return iStack00000024;
}

