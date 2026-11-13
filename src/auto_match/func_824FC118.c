typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_660;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_8234E6D8();
extern int fn_82359C18();
extern int fn_824BF8A8();
extern int fn_824D2AE8();
extern int fn_824FCAC0();
extern int fn_8250E4D0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82529508();
extern int fn_825296E8();
extern int fn_82529A38();
extern int fn_8255FD70();
extern int fn_82587AC0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82670C10();
extern int fn_82F51468();
extern int fn_82F51A50();
extern int fn_82F53418();
extern unsigned int lbl_821962E0;
extern unsigned int lbl_821C2184;
extern unsigned int stack0x00000000;
extern unsigned int uStack_56c;
extern unsigned int uStack_5bc;
extern unsigned int uStack_684;
extern unsigned int uStack_688;
extern unsigned int uStack_690;
extern unsigned int uStack_6a0;
extern unsigned __int64 storeVectorElementWordIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


/* WARNING: Removing unreachable block (ram,0x824fc23c) */

int * fn_824FC118(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  bool bVar4;
  int *piVar5;
  int in_r0;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar10;
  __int64 lVar8;
  unsigned __int64 uVar9;
  int iVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  int *piVar14;
  char in_RESERVE;
  unsigned char bVar15;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int uStack_6a0;
  int *piStack_69c;
  unsigned int uStack_690;
  unsigned int uStack_688;
  unsigned int uStack_684;
  int *piStack_66c;
  unsigned char auStack_660 [16];
  unsigned int *puStack_650;
  unsigned int uStack_5bc;
  unsigned int uStack_56c;
  
  piVar5 = piStack_69c;
  uVar6 = ZEXT48(&stack0x00000000);
  puVar3 = (unsigned int *)((unsigned int)(&lbl_821962E0 + in_r0) & 0xfffffff0);
  uVar16 = *puVar3;
  uVar17 = puVar3[1];
  uVar18 = puVar3[2];
  uVar19 = puVar3[3];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = (unsigned int *)((unsigned int)(auStack_660 + in_r0) & 0xfffffff0);
  *puVar3 = uVar16;
  puVar3[1] = uVar17;
  puVar3[2] = uVar18;
  puVar3[3] = uVar19;
  bVar4 = false;
  uStack_6a0 = 0;
  uVar7 = fn_8265C9E0(8);
  if ((uVar7 & 0xffffffff) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = fn_82F51A50(uVar7,param_4);
  }
  param_1[5] = iVar10;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar10 = fn_8251F720(param_2 + 1,0);
  param_1[8] = iVar10;
  lVar8 = fn_8265C9E0(0x3c);
  if (lVar8 == 0) {
    iVar10 = 0;
  }
  else {
    uStack_688 = 0;
    bVar4 = true;
    fn_8255FD70(uVar6 - 0x6a0,param_1[8],0xffffffff821acfe8);
    piVar14 = (int *)0x0;
    bVar1 = piStack_69c != (int *)0x0;
    while (bVar1) {
      uStack_6a0 = *(unsigned int *)(*piVar14 + 0x40);
      piStack_69c = *(int **)(*piVar14 + 0x44);
      fn_824BF8A8(uVar6 - 0x690,uVar6 - 0x6a0);
      piVar14 = piVar14 + 1;
      bVar1 = piVar14 != piVar5;
    }
    iVar10 = fn_8250E4D0(lVar8,uVar6 - 0x690,0,0);
  }
  param_1[9] = iVar10;
  if (bVar4) {
    fn_82670C10(uVar6 - 0x690);
  }
  param_1[10] = 1;
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  param_1[0x14] = 0;
  lVar8 = fn_8265C9E0(0x80);
  bVar15 = (lVar8 == 0) << 1;
  if (lVar8 != 0) {
    iVar10 = (int)lVar8;
    param_1[0x10] = iVar10;
    param_1[0x13] = iVar10;
    param_1[0x11] = iVar10 + 0x80;
    param_1[0x12] = iVar10;
    fn_82529508(uVar6 - 0x640);
    uStack_56c = *param_2;
    uVar16 = storeVectorElementWordIndexed(in_vs32,0,uVar6 - 0x5a8);
    *(unsigned int *)(uVar6 - 0x5a8) = uVar16;
    storeVectorElementWordIndexed(in_vs45,uVar6 - 0x5a8,4);
    storeVectorElementWordIndexed(in_vs44,uVar6 - 0x5a8,8);
    fn_825296E8(uVar6 - 0x640,uVar6 - 0x660);
    uStack_5bc = param_3;
    uVar9 = fn_82587AC0(uVar6 - 0x5f5);
    iVar10 = fn_82529A38(uVar9,uVar6 - 0x640,0);
    *param_1 = iVar10;
    fn_824FCAC0(param_1);
    *(unsigned int *)(*param_1 + 0x19c) = 0;
    if (param_2[2] != 0) {
      uVar9 = fn_82F51468(uVar6 - 0x670,param_1[5]);
      fn_824D2AE8(uVar6 - 0x6a0,uVar9);
      if (ZEXT48(piStack_66c) != 0) {
        lVar8 = ZEXT48(piStack_66c) + 8;
        do {
          puVar13 = (unsigned int *)lVar8;
          lVar12 = (unsigned __int64)*puVar13 - 1;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed(lVar12,0,lVar8);
            *puVar13 = uVar2;
            bVar15 = 2;
          }
        } while (!(bool)(bVar15 >> 1 & 1));
        if ((int)lVar12 == 0) {
          (**(int (***)())(*piStack_66c + 4))();
        }
      }
      iVar11 = fn_82F53418(uStack_6a0,param_2 + 2,1);
      iVar10 = 0;
      if (iVar11 != 0) {
        iVar10 = iVar11;
      }
      param_1[6] = iVar10;
      if (piStack_69c != (int *)0x0) {
        fn_822315A0();
      }
    }
    uVar16 = *(unsigned int *)(*param_1 + 0x8c0);
    uVar7 = fn_8251F720(param_2 + 3,0);
    lVar8 = fn_8265C9E0(0x70);
    if (lVar8 == 0) {
      iVar10 = 0;
    }
    else {
      puStack_650 = (unsigned int *)fn_8265C9E0(0x14);
      if (puStack_650 == (unsigned int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82230040(uVar6 - 0x680);
      }
      *puStack_650 = &lbl_821C2184;
      puStack_650[1] = uStack_690;
      puStack_650[2] = param_1 + 4;
      puStack_650[3] = uStack_688;
      puStack_650[4] = uStack_684;
      iVar10 = fn_8234E6D8(lVar8,uVar6 - 0x660,uVar16,uVar7);
    }
    iVar11 = param_1[7];
    if (iVar10 != iVar11) {
      if (iVar11 != 0) {
        if (*(int *)(iVar11 + 0x60) != 0) {
          fn_8265CA20();
        }
        *(unsigned int *)(iVar11 + 0x60) = 0;
        *(unsigned int *)(iVar11 + 100) = 0;
        *(unsigned int *)(iVar11 + 0x68) = 0;
        fn_82359C18(iVar11);
        fn_8265CA20(iVar11);
      }
      param_1[7] = iVar10;
    }
    if ((uVar7 & 0xffffffff) != 0) {
      fn_8251FA58(uVar7);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(uVar6 - 0x678);
}

