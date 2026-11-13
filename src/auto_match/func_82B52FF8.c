#define true 1
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82AA66A8();
extern int fn_82ABEA98();
extern int fn_82AE7110();
extern int fn_82AE7308();
extern int fn_82B20BC0();
extern int fn_82B24700();
extern int fn_82B453E0();
extern int fn_82B45880();
extern int fn_82B462A8();
extern int fn_82B463F8();
extern int fn_82B47420();
extern int fn_82B47660();
extern int fn_82B4B1D8();
extern int fn_82B4B6F0();
extern int fn_82B4BAA8();
extern int fn_82B50498();
extern int fn_82B50558();
extern int fn_82B50B00();
extern int fn_82B51E30();
extern int fn_82B860F0();
extern int fn_82F68CC0();
extern int fn_82F6DCE0();
extern unsigned int iStack_c8;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000034;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_cc;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B52FF8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned int param_5)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned __int64 uVar6;
  int iVar11;
  char *pcVar12;
  unsigned __int64 uVar7;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  char *pcVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned int *puVar23;
  int iVar24;
  unsigned int uVar25;
  unsigned int uStack0000001c;
  unsigned int uStack00000034;
  unsigned int uStack_cc;
  int iStack_c8;
  unsigned int *puStack_c4;
  unsigned char auStack_c0 [4];
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int auStack_b0 [2];
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  
  uStack0000001c = (unsigned int)param_2;
  if (param_3 != *(int *)(param_1 + 0x10)) {
    iVar24 = param_3 * 0x28;
    iVar11 = *(int *)(*(int *)(param_1 + 0x234) + 0x50);
    iVar3 = iVar24 + *(int *)(param_1 + 0xc);
    uStack_cc = *(unsigned int *)(iVar24 + *(int *)(param_1 + 0xc)) >> 3 & 0x3fff;
    if (iVar11 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(unsigned int *)(param_3 * 4 + iVar11);
    }
    uStack00000034 = param_5;
    fn_82B51E30(param_1,param_2,param_3,uVar9,0,uStack_cc,0);
    fn_82B24700(auStack_c0,param_2);
    fn_82B4B1D8(auStack_c0,uStack_cc);
    puVar8 = (unsigned int *)fn_82AE7110(param_1,*(unsigned int *)(iVar3 + 0x14),param_4,0);
    uVar20 = 0;
    if (uStack_cc != 0) {
      do {
        fn_82B50B00(puVar8);
        iVar11 = puVar8[2];
        if (iVar11 == 0) {
          if (*(int *)(*(int *)(iVar24 + *(int *)(param_1 + 0xc) + 0xc) + 0x10) == 2) {
            uVar6 = 0xffffffff820d8958;
          }
          else {
            fn_82F68CC0(auStack_b0,0xffffffff820d8940,0x16);
            pcVar12 = (char *)fn_82B462A8(param_1,param_3);
            pcVar17 = pcVar12;
            do {
              cVar1 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar1 != '\0');
            uVar6 = fn_82ABEA98(param_1,pcVar17 + (0x15 - (int)pcVar12),0);
            fn_82F6DCE0(uVar6,pcVar17 + (0x15 - (int)pcVar12),auStack_b0,pcVar12);
          }
          uVar7 = fn_82B453E0(param_1);
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdaf,uVar7,uVar6);
        }
        if (*(int *)(iVar3 + 0x1c) == 0) {
          fn_82AE7308(param_1,param_3);
        }
        uVar21 = 0;
        uVar19 = (unsigned __int64)(unsigned int)puVar8[1] + 1;
        if (uVar19 != 0) {
          lVar18 = (uVar20 & 0x1fffffff) << 3;
          do {
            iVar10 = *(int *)(iVar24 + *(int *)(param_1 + 0xc) + 0x1c);
            uVar2 = *(unsigned int *)((int)lVar18 + iVar10);
            if ((uVar2 & 0x4000000) == 0) {
              iVar11 = fn_82B45880(param_1,iVar11);
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x1197,*(unsigned int *)(iVar11 + 0x18));
            }
            uVar2 = uVar2 >> 0x1b & 0xf;
            uVar15 = 0;
            if ((uVar21 & 0xffffffff) == 0) {
LAB_82b53154:
              auStack_b0[0] = 0;
              uVar15 = 0;
              uVar25 = 0;
              uStack_a8 = 0;
              uStack_a4 = 0;
              if ((uVar19 & 0xffffffff) <= (uVar21 & 0xffffffff)) {
LAB_82b53390:
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              puVar23 = &uStack_b4;
              uVar22 = uVar21;
              lVar13 = lVar18;
              do {
                uVar5 = uStack_b8;
                uVar4 = uStack_bc;
                if ((*(unsigned int *)(*(int *)(iVar24 + *(int *)(param_1 + 0xc) + 0x1c) + (int)lVar13) >>
                     0x1b & 0xf) == uVar2) {
                  if ((uVar15 & 0xffffffff) == 4) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c0);
                  }
                  uVar25 = *(unsigned int *)((int)lVar13 + *(int *)(iVar3 + 0x1c)) & 0xf | uVar25;
                  fn_82B47660(auStack_c0,uVar22 + uVar20);
                  uVar14 = (unsigned __int64)uStack_b8;
                  uVar16 = (unsigned __int64)uStack_bc;
                  uStack_bc = uVar4;
                  uStack_b8 = uVar5;
                  uVar9 = fn_82B4BAA8(param_1,(uVar14 + 2 & 0x1fffffff) * 8 + uVar16);
                  uVar15 = uVar15 + 1;
                  puVar23 = puVar23 + 1;
                  *puVar23 = uVar9;
                }
                uVar22 = uVar22 + 1;
                lVar13 = lVar13 + 8;
              } while ((uVar22 & 0xffffffff) < (uVar19 & 0xffffffff));
              if ((uVar25 == 0) || (uVar25 != (1 << ((unsigned int)uVar15 & 0x3f)) - 1U)) goto LAB_82b53390;
              uVar25 = *(unsigned int *)(iVar3 + 4) >> 0x1e & 1;
              if ((uVar25 == 0) && (puVar8[4] != 0)) {
                fn_82B50498(&iStack_c8,puVar8[4],param_1);
                while( true ) {
                  iVar10 = fn_82B50558(&iStack_c8);
                  if (iVar10 == 0) break;
                  if ((iVar10 == 0) || (*(int *)(iVar10 + 4) != 0x13)) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c1);
                  }
                  iVar10 = fn_82B463F8(param_1,iVar10);
                  if (iVar10 == 2) {
                    uVar25 = 1;
                  }
                }
                *puStack_c4 = *(unsigned int *)(iStack_c8 + 0x3d0);
                *(unsigned int **)(iStack_c8 + 0x3d0) = puStack_c4;
              }
              uVar6 = fn_82B4B6F0(param_1,iVar11,uVar2,uVar15,uVar25);
              uVar22 = (unsigned __int64)auStack_b0[0];
              if (1 < (uVar15 & 0xffffffff)) {
                uVar22 = fn_82B47420(param_1,uVar22,0,0,0,uStack_a8,0,uStack_a4);
              }
              fn_82B860F0(param_1,uVar22,uVar6,uStack00000034,1);
              param_2 = (unsigned __int64)uStack0000001c;
            }
            else {
              lVar13 = (uVar20 & 0x1fffffff) << 3;
              do {
                if ((*(unsigned int *)((int)lVar13 + iVar10) >> 0x1b & 0xf) == uVar2) break;
                uVar15 = uVar15 + 1;
                lVar13 = lVar13 + 8;
              } while ((uVar15 & 0xffffffff) < (uVar21 & 0xffffffff));
              if ((uVar21 & 0xffffffff) <= (uVar15 & 0xffffffff)) goto LAB_82b53154;
            }
            uVar21 = uVar21 + 1;
            lVar18 = lVar18 + 8;
          } while ((uVar21 & 0xffffffff) < (uVar19 & 0xffffffff));
        }
        uVar21 = (unsigned __int64)uStack_cc;
        uVar20 = uVar19 + uVar20;
        puVar8[1] = 0;
        uStack_cc = (unsigned int)(uVar21 - uVar19);
      } while (uVar21 - uVar19 != 0);
    }
    fn_82B20BC0(param_2);
    *puVar8 = *(unsigned int *)(param_1 + 0x3ec);
    *(unsigned int **)(param_1 + 0x3ec) = puVar8;
  }
  return;
}

