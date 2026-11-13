typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82AD12C8();
extern int fn_82AEFBB8();
extern int fn_82AEFDB8();
extern int fn_82AF4BA8();


unsigned __int64
fn_82AF5EC0(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5
             )

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  bool bVar4;
  char cVar9;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int *puVar11;
  __int64 lVar10;
  unsigned char *pbVar12;
  unsigned __int64 uVar13;
  unsigned int uVar15;
  unsigned __int64 uVar14;
  unsigned char *pbVar16;
  bool bVar19;
  unsigned __int64 uVar17;
  unsigned char *pbVar18;
  unsigned int uVar20;
  unsigned int *puVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int *puVar26;
  unsigned int *puVar27;
  unsigned char abStack_b0 [16];
  unsigned char abStack_a0 [160];
  
  uVar1 = param_3[3];
  uVar8 = *param_3;
  uVar14 = (unsigned __int64)uVar8 & 0x1f;
  uVar7 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
  if ((uVar7 == 0x7d) || (bVar19 = false, uVar7 == 0x7c)) {
    bVar19 = true;
  }
  uVar7 = param_2[4];
  uVar2 = param_2[3];
  cVar9 = fn_82AEFDB8(uVar7,uVar1,param_1);
  if (cVar9 != '\0') {
    uVar22 = *param_2;
    uVar13 = (unsigned __int64)uVar22 & 0x1f;
    if ((((uVar8 & 0x18) == 0) || ((uVar22 & 0x18) == 0)) &&
       (((uVar8 & 2) == 0 || ((uVar22 & 1) == 0)))) {
      if (((uVar8 & 4) == 0) || (bVar4 = false, (uVar22 & 1) == 0)) {
        bVar4 = true;
      }
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      uVar17 = uVar14;
      if (((uVar8 & 4) != 0) && ((uVar22 & 2) != 0)) {
        uVar17 = uVar14 - 4;
      }
      if ((uVar17 & uVar13 & 4) != 0) {
        uVar17 = uVar17 - 4;
        uVar13 = uVar13 - 4;
      }
      if (((uVar17 & 1) != 0) && ((uVar13 & 2) != 0)) {
        uVar13 = uVar13 - 2;
      }
      uVar17 = uVar17 | uVar13;
      cVar9 = fn_82AEFBB8(uVar7,uVar17);
      if (cVar9 != '\0') {
        uVar13 = 0;
        uVar20 = 0;
        uVar22 = *(unsigned int *)(uVar7 + 8) >> 7 & 0x7f;
        if ((uVar22 == 0) || (bVar4 = true, 0x66 < uVar22)) {
          bVar4 = false;
        }
        if (bVar4) {
          uVar24 = 0;
          puVar27 = (unsigned int *)0x0;
          puVar21 = (unsigned int *)0x0;
          puVar11 = (unsigned int *)(uVar7 + 0x2c);
          uVar22 = 0xffffffff;
          for (uVar15 = 0; uVar20 = (unsigned int)uVar13, uVar15 < (*(unsigned int *)(uVar7 + 8) >> 0x13 & 7);
              uVar15 = uVar15 + 1) {
            puVar3 = (unsigned int *)*puVar11;
            uVar23 = uVar15;
            if (puVar3 != param_2) {
              uVar23 = *(unsigned int *)(puVar3[3] + 8) >> 7 & 0x7f;
              if ((uVar23 == 0x7d) || (bVar4 = false, uVar23 == 0x7c)) {
                bVar4 = true;
              }
              puVar26 = puVar27;
              uVar25 = uVar24;
              if ((bVar4) && (puVar26 = puVar3, uVar25 = uVar15, puVar27 != (unsigned int *)0x0)) {
                puVar21 = puVar3;
                puVar26 = puVar27;
                uVar25 = uVar24;
              }
              uVar13 = (unsigned __int64)*puVar3 & 0x18 | uVar13;
              puVar27 = puVar26;
              uVar23 = uVar22;
              uVar24 = uVar25;
            }
            puVar11 = puVar11 + 1;
            uVar22 = uVar23;
          }
          if (uVar22 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          if (((uVar8 & 0x18) != 0) && (uVar13 != 0)) {
            if (((unsigned __int64)uVar8 & 0x18) != uVar13) {
              return 0;
            }
            if ((uVar8 & 8) != 0) {
              iVar5 = fn_82AD12C8(uVar2);
              iVar6 = fn_82AD12C8(uVar7);
              if (iVar5 != iVar6) {
                return 0;
              }
            }
          }
          if ((bVar19) && (puVar21 != (unsigned int *)0x0)) {
            if (uVar22 == 0) {
              uVar14 = (unsigned __int64)**(unsigned int **)((uVar24 + 0xb) * 4 + uVar7) & 0x1f;
            }
            if (((*puVar21 ^ uVar14) & 0x18) != 0) {
              return 0;
            }
          }
          if (((bVar19) && (puVar27 != (unsigned int *)0x0)) && (((*puVar27 ^ uVar17) & 2) != 0)) {
            uVar7 = fn_82AF4BA8(param_1,uVar1,*param_3 >> 0x19 & 7,*param_3 >> 5 & 0xff,uVar17,
                                  abStack_a0);
            uVar8 = *puVar27;
            uVar8 = fn_82AF4BA8(param_1,puVar27[3],uVar8 >> 0x19 & 7,uVar8 >> 5 & 0xff,
                                  uVar8 & 0x1f,abStack_b0);
            if (((uVar8 | uVar7) & 5) == 5) {
              return 0;
            }
            if (uVar8 != 4) {
              return 0;
            }
            uVar14 = 2;
            if ((uVar17 & 4) != 0) {
              uVar17 = uVar17 - 4;
            }
            if ((uVar17 & 1) != 0) {
              uVar14 = 0;
            }
            uVar17 = uVar17 | uVar14;
            if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 16000) {
              fn_82AF4BA8(param_1,uVar1,*param_3 >> 0x19 & 7,*param_3 >> 5 & 0xff,uVar17,
                            abStack_b0);
              pbVar12 = abStack_b0;
              pbVar18 = abStack_a0;
              lVar10 = 0;
              uVar1 = *param_3 >> 0x17 & 0x1c;
              if (uVar1 != 0) {
                pbVar16 = pbVar18 + uVar1;
                do {
                  lVar10 = (unsigned __int64)*pbVar18 - (unsigned __int64)*pbVar12;
                  if (lVar10 != 0) break;
                  pbVar18 = pbVar18 + 1;
                  pbVar12 = pbVar12 + 1;
                } while (pbVar18 != pbVar16);
              }
              if ((int)lVar10 != 0) {
                return 0;
              }
            }
          }
        }
        *param_5 = uVar20;
        *param_4 = (int)uVar17;
        return 1;
      }
    }
  }
  return 0;
}

