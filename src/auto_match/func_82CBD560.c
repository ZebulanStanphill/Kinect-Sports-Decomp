extern unsigned int *auStack_a0;
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82CBCC78();


unsigned __int64 fn_82CBD560(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned __int64 *puVar11;
  unsigned int uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  unsigned char *pbVar17;
  int iVar18;
  unsigned int uVar19;
  int iVar20;
  __int64 lVar21;
  int iVar22;
  __int64 lVar23;
  unsigned __int64 uVar24;
  unsigned int uVar25;
  unsigned __int64 uVar26;
  unsigned int auStack_a0;
  
  param_2 = (int *)*param_2;
  iVar9 = *(int *)(param_1 + 0x13c);
  uVar10 = *(unsigned int *)(param_1 + 0x140);
  puVar11 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar12 = param_2[2];
  piVar13 = (int *)*param_2;
  iVar14 = param_2[7];
  iVar15 = param_2[8];
  iVar16 = param_2[1];
  uVar25 = 1;
  uVar19 = auStack_a0;
  if (param_3 != 0) {
    do {
      do {
        if (piVar13 == (int *)0x0) {
          uVar26 = 0xffffffffffffffff;
          *(unsigned int *)((int)puVar11 + 0x14) = 3;
        }
        else {
          iVar18 = *piVar13;
          sVar7 = *(short *)((int)((*puVar11 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar13 + 2) & 0x7f) &
                                   0xffffffff) << 1) + iVar18);
          uVar26 = (unsigned __int64)sVar7;
          if (sVar7 < 0) {
            fn_82C4E470(puVar11);
            do {
              uVar24 = *puVar11;
              fn_82C4E470(puVar11,1);
              sVar7 = *(short *)((int)(((uVar26 - ((__int64)uVar24 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar18);
              uVar26 = (unsigned __int64)sVar7;
            } while (sVar7 < 0);
            uVar19 = (unsigned int)((__int64)*puVar11 >> 0x3f);
            fn_82C4E470(puVar11,1);
          }
          else {
            lVar21 = *puVar11 << (uVar26 & 0xf);
            lVar23 = ((unsigned __int64)*(unsigned int *)(puVar11 + 1) - (uVar26 & 0xf)) + -1;
            uVar19 = (unsigned int)(lVar21 >> 0x3f);
            *(int *)(puVar11 + 1) = (int)lVar23;
            *puVar11 = lVar21 << 1;
            if (lVar23 < 0) {
              do {
                pbVar17 = *(unsigned char **)((int)puVar11 + 0xc);
                if (pbVar17 < (unsigned char *)(*(int *)(puVar11 + 2) - 4U)) {
                  bVar5 = *pbVar17;
                  bVar6 = pbVar17[1];
                  bVar1 = pbVar17[2];
                  bVar2 = pbVar17[3];
                  bVar3 = pbVar17[4];
                  bVar4 = pbVar17[5];
                  iVar18 = *(int *)(puVar11 + 1);
                  *(unsigned char **)((int)puVar11 + 0xc) = pbVar17 + 6;
                  *(int *)(puVar11 + 1) = iVar18 + 0x30;
                  *puVar11 = ((((((unsigned __int64)bVar5 * 0x100 + (unsigned __int64)bVar6) * 0x100 +
                                (unsigned __int64)bVar1) * 0x100 + (unsigned __int64)bVar2) * 0x100 +
                              (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar4 <<
                             ((__int64)-iVar18 & 0x7fU)) + *puVar11;
                  goto LAB_82cbd6d0;
                }
                iVar18 = fn_82C4E3B0(puVar11);
              } while (iVar18 == 1);
              uVar26 = (unsigned __int64)((int)sVar7 >> 4);
            }
            else {
LAB_82cbd6d0:
              uVar26 = (unsigned __int64)((int)sVar7 >> 4);
            }
          }
        }
        iVar18 = (int)(uVar26 & 0xff);
        bVar5 = *(unsigned char *)(iVar18 + iVar15);
        iVar20 = bVar5 + uVar25;
        bVar6 = *(unsigned char *)(iVar20 + param_5);
        iVar22 = ((int)*(char *)(iVar18 + iVar14) ^ uVar19) - uVar19;
        sVar7 = (short)iVar22;
        if (bVar6 < 8) {
          *(short *)((unsigned int)bVar6 * 2 + param_4) = *(short *)((unsigned int)bVar6 * 2 + param_4) + sVar7;
        }
        else if ((bVar6 & 7) == 0) {
          iVar22 = (((int)(unsigned int)bVar6 >> 3) + 8) * 2;
          *(short *)(iVar22 + param_4) = *(short *)(iVar22 + param_4) + sVar7;
        }
        else if (iVar22 < 1) {
          *(unsigned int *)(*(int *)(param_1 + 0x6e4) + (unsigned int)bVar6 * 4) = iVar22 * iVar9 - uVar10;
        }
        else {
          *(unsigned int *)(*(int *)(param_1 + 0x6e4) + (unsigned int)bVar6 * 4) = iVar22 * iVar9 + uVar10;
        }
        uVar25 = iVar20 + 1;
      } while (((uVar26 & 0xff) < (unsigned __int64)uVar12 + 1 && (unsigned int)LZCOUNT(iVar16 - iVar18) >> 5 == 0)
               && uVar25 < 0x40);
      if (iVar18 != iVar16) break;
      auStack_a0 = (uVar25 - bVar5) - 1;
      if (bVar6 < 8) {
        *(short *)((unsigned int)bVar6 * 2 + param_4) = *(short *)((unsigned int)bVar6 * 2 + param_4) - sVar7;
      }
      else if ((bVar6 & 7) == 0) {
        iVar18 = (((int)(unsigned int)bVar6 >> 3) + 8) * 2;
        *(short *)(iVar18 + param_4) = *(short *)(iVar18 + param_4) - sVar7;
      }
      else {
        *(unsigned int *)(*(int *)(param_1 + 0x6e4) + (unsigned int)bVar6 * 4) = 0;
      }
      uVar26 = fn_82CBCC78(param_1,param_2,param_4,param_5,-uVar19,&auStack_a0);
      uVar25 = auStack_a0;
    } while ((uVar26 & 0xff) < ((unsigned __int64)uVar12 + 1 & 0xffffffff));
  }
  uVar26 = 1;
  lVar21 = 0x200000002;
  do {
    sVar7 = *(short *)((int)lVar21 + param_4);
    lVar21 = uVar26 << 2;
    uVar12 = (int)sVar7 >> 0x1f;
    sVar8 = *(short *)(((int)uVar26 + 8) * 2 + param_4);
    uVar25 = (int)sVar8 >> 0x1f;
    lVar23 = uVar26 << 5;
    uVar26 = uVar26 + 1 & 0xff;
    *(unsigned int *)((int)lVar21 + *(int *)(param_1 + 0x6e4)) =
         ((uVar12 ^ uVar10) + sVar7 * iVar9) - uVar12 & -(unsigned int)(sVar7 != 0);
    lVar21 = uVar26 << 1;
    *(unsigned int *)((int)lVar23 + *(int *)(param_1 + 0x6e4)) =
         ((uVar25 ^ uVar10) + sVar8 * iVar9) - uVar25 & -(unsigned int)(sVar8 != 0);
  } while (uVar26 < 8);
  return 0;
}

