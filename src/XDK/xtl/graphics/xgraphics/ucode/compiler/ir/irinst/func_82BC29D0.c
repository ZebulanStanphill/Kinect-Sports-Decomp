typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_58;
extern int fn_82BB1A80();
extern int fn_82BC2958();
extern int fn_82BB0150();
extern int fn_82BB1AE0();
extern int fn_82BB1AC0();
extern int fn_82BB1AA0();
extern int fn_82BB01B0();
extern int fn_82BB0190();
extern int fn_82BB0170();
extern int fn_82BA05E8();
extern int fn_82BC2958();
extern unsigned int iStack_54;
extern unsigned int lbl_820E35F8;
extern unsigned int lbl_820E3B00;
extern unsigned int stack0x00000028;
extern unsigned int stack0x00000030;
extern unsigned int stack0x00000038;
extern unsigned int stack0x00000040;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BC29D0(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned char uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int *piVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  unsigned char **ppuVar11;
  unsigned char **ppuVar12;
  unsigned __int64 uVar13;
  bool bVar14;
  __int64 lVar15;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned char auStack_58 [4];
  int iStack_54;
  unsigned char *puStack_50;
  unsigned char *puStack_4c;
  unsigned char *puStack_48;
  unsigned char *puStack_44;
  unsigned char *puStack_40;
  unsigned char *puStack_3c;
  unsigned char *puStack_38;
  unsigned char *puStack_34;

  stack_pair_60.second = lbl_820E3B00;
  puStack_38 = (unsigned char *)&stack0x00000038;
  puStack_40 = (unsigned char *)&stack0x00000028;
  puStack_3c = (unsigned char *)&stack0x00000030;
  puStack_50 = &lbl_820E35F8;
  puStack_34 = (unsigned char *)&stack0x00000040;
  lVar8 = 0;
  iVar9 = 0;
  stack_pair_60.first = lbl_820E3B00;
  piVar6 = &iStack_54;
  puStack_4c = &lbl_820E35F8;
  ppuVar11 = &puStack_40;
  puStack_48 = &lbl_820E35F8;
  puStack_44 = &lbl_820E35F8;
  do {
    iVar10 = 0;
    iVar7 = (int)lVar8;
    if (-1 < iVar7) {
      ppuVar12 = &puStack_50;
      do {
        piVar2 = (int *)*ppuVar11;
        if (iVar10 == iVar7) {
          piVar6 = piVar6 + 1;
          *piVar6 = (int)piVar2;
          *(char *)((int)&stack_pair_60.first + iVar9) = (char)lVar8;
          lVar8 = lVar8 + 1;
          break;
        }
        if ((*(int *)*ppuVar12 != *piVar2) ||
           (bVar14 = true, *(int *)((int)*ppuVar12 + 4) != piVar2[1])) {
          bVar14 = false;
        }
        if (bVar14) {
          *(char *)((int)&stack_pair_60.first + iVar9) = (char)iVar10;
          break;
        }
        iVar10 = iVar10 + 1;
        ppuVar12 = ppuVar12 + 1;
      } while (iVar10 <= iVar7);
    }
    iVar9 = iVar9 + 1;
    ppuVar11 = ppuVar11 + 1;
    if (3 < iVar9) {
      iVar9 = (int)lVar8;
      lVar15 = lVar8;
      lVar5 = lVar8;
      if (0 < iVar9) {
        do {
          iVar10 = 0;
          iVar7 = (int)(lVar5 + -1);
          if (0 < iVar7) {
            ppuVar12 = &puStack_50;
            do {
              puVar3 = (unsigned int *)ppuVar12[1];
              puVar4 = (unsigned int *)*ppuVar12;
              if (*puVar4 == *puVar3) {
                bVar14 = puVar3[1] <= puVar4[1];
              }
              else {
                bVar14 = *puVar3 <= *puVar4;
              }
              if (!bVar14) {
                *ppuVar12 = (unsigned char *)puVar3;
                ppuVar12[1] = (unsigned char *)puVar4;
                uVar1 = auStack_58[iVar10 + -3];
                auStack_58[iVar10 + -3] = auStack_58[iVar10 + -4];
                auStack_58[iVar10 + -4] = uVar1;
              }
              iVar10 = iVar10 + 1;
              ppuVar12 = ppuVar12 + 1;
            } while (iVar10 < iVar7);
          }
          lVar15 = lVar15 + -1;
          lVar5 = lVar5 + -1;
        } while (lVar15 != 0);
      }
      iVar7 = 0;
      if (0 < iVar9) {
        do {
          auStack_58[(unsigned char)auStack_58[iVar7 + -4]] = (char)iVar7;
          lVar8 = lVar8 + -1;
          iVar7 = iVar7 + 1;
        } while (lVar8 != 0);
      }
      iVar7 = 0;
      lVar8 = 4;
      do {
        auStack_58[iVar7 + -4] = auStack_58[*(unsigned char *)((int)&stack_pair_60.first + iVar7)];
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar13 = 0;
      uStack00000028 = param_4;
      uStack00000030 = param_5;
      uStack00000038 = param_6;
      uStack00000040 = param_7;
      if (*(char *)(*(int *)(param_1 + 0x3b8) + 0x571) == '\0') {
        if (iVar9 == 1) {
          uVar13 = fn_82BB01B0(*(unsigned int *)(param_2 + 0xac),lbl_820E35F8);
        }
        else if (iVar9 == 2) {
          uVar13 = fn_82BB0190(*(unsigned int *)(param_2 + 0xac),lbl_820E35F8,lbl_820E35F8);
        }
        else if (iVar9 == 3) {
          uVar13 = fn_82BB0170(*(unsigned int *)(param_2 + 0xac),lbl_820E35F8,lbl_820E35F8,
                                   lbl_820E35F8);
        }
        else if (iVar9 == 4) {
          uVar13 = fn_82BA05E8(*(unsigned int *)(param_2 + 0xac),lbl_820E35F8,lbl_820E35F8,
                                   lbl_820E35F8,lbl_820E35F8);
        }
        else {
          fn_82BB1A80(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e3b18,0x19a);
        }
        fn_82BC2958(param_1,param_3,uVar13);
      }
      else {
        if (iVar9 == 1) {
          uVar13 = fn_82BB0150(*(unsigned int *)(param_2 + 0xac),lbl_820E35F8);
        }
        else if (iVar9 == 2) {
          uVar13 = fn_82BB1AE0(*(unsigned int *)(param_2 + 0xac),lbl_820E35F8,lbl_820E35F8);
        }
        else if (iVar9 == 3) {
          uVar13 = fn_82BB1AC0(*(unsigned int *)(param_2 + 0xac),lbl_820E35F8,lbl_820E35F8,
                                   lbl_820E35F8);
        }
        else if (iVar9 == 4) {
          uVar13 = fn_82BB1AA0(*(unsigned int *)(param_2 + 0xac),lbl_820E35F8,lbl_820E35F8,
                                   lbl_820E35F8,lbl_820E35F8);
        }
        else {
          fn_82BB1A80(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e3b18,0x181);
        }
        fn_82BC2958(param_1,param_3,uVar13);
      }
      *(unsigned int *)((param_3 + 0x20) * 4 + param_1) = stack_pair_60.second;
      return;
    }
  } while( true );
}
