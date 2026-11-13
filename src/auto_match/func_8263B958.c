extern unsigned int *auStack_a4;
extern int fn_8262FFB0();
extern int fn_8263AB38();
extern int fn_8263AC58();
extern int fn_8263B0F8();
extern int fn_8263B230();
extern unsigned int iStack0000001c;
extern unsigned int iStack_a8;
extern unsigned int iStack_b8;
extern unsigned int *iStack_c0;
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


void fn_8263B958(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned int *param_5,
                  unsigned int *param_6,int *param_7,unsigned int *param_8)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  int iStack0000001c;
  unsigned int *puStack0000002c;
  unsigned int *puStack00000034;
  unsigned int *puStack0000003c;
  int *piStack00000044;
  unsigned int *puStack0000004c;
  unsigned int *in_stack_00000054;
  int *in_stack_0000005c;
  int *in_stack_00000064;
  int iStack_c0;
  unsigned int uStack_bc;
  int iStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  struct { unsigned int first; int second; } stack_pair_ac;

  unsigned int auStack_a4;
  
  uVar15 = *(unsigned int *)(param_1 + 0x20);
  uVar12 = *(unsigned int *)(param_1 + 0x1c);
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  iVar11 = *(int *)(param_1 + 0x28) >> 0x1f;
  iVar8 = -iVar11;
  bVar1 = (&lbl_821CBFB1)[(uVar15 & 0x3f) * 2];
  stack_pair_ac.second = 0;
  iVar4 = -((int)uVar12 >> 0x1f);
  uVar6 = uVar2 >> 9 & 3;
  uVar5 = uVar15 & 0x3f;
  iVar11 = iVar11 * -2;
  iStack0000001c = param_2;
  puStack0000002c = param_4;
  puStack00000034 = param_5;
  puStack0000003c = param_6;
  piStack00000044 = param_7;
  puStack0000004c = param_8;
  fn_8263B0F8(param_1,&uStack_b0,&stack_pair_ac.first,&iStack_b8);
  uVar7 = stack_pair_ac.first;
  uVar10 = 1 << ((iVar8 - (int)LZCOUNT((uStack_b0 - iVar11) - 1)) + 0x20U & 0x3f);
  uVar16 = 1 << ((iVar8 - (int)LZCOUNT((stack_pair_ac.first - iVar11) - 1)) + 0x20U & 0x3f);
  if (uVar6 == 2) {
    iStack_c0 = 1 << ((iVar8 - (int)LZCOUNT((iStack_b8 - iVar11) + -1)) + 0x20U & 0x3f);
  }
  else {
    iStack_c0 = 1;
  }
  if (((0x10 < uVar10) && (0x10 < uVar16)) || (iVar9 = 1, (uVar2 & 0x800) == 0)) {
    iVar9 = 0;
  }
  if (((param_3 & 0xffffffff) == 0) || (uVar13 = uVar2, iVar9 != 0)) {
    uVar13 = uVar15;
  }
  uVar13 = uVar13 & 0xfffff000;
  uVar14 = (unsigned int)bVar1;
  if (((param_3 & 0xffffffff) == 0) && (iVar9 == 0)) {
    uStack_b4 = uStack_b0;
    uStack_bc = stack_pair_ac.first;
    iStack_c0 = iStack_b8;
    fn_8263AC58(&uStack_b4,&uStack_bc,&iStack_c0,bVar1,uVar5,uVar6,iVar4);
    uVar16 = uStack_bc;
    if ((((iVar4 == 0) && ((uVar15 & 0x400) == 0)) &&
        (((uVar2 & 0x800) == 0 && ((uVar6 == 1 && ((*(unsigned int *)(param_1 + 0x2c) & 0x3c0) == 0)))))) &&
       (iVar8 == 0)) {
      fn_8263AB38(uVar5,&auStack_a4,&uStack_bc);
      uVar16 = (uStack_bc + uVar7) - 1 & ~(uStack_bc - 1);
    }
    if (uVar6 == 0) {
      auStack_a4 = uStack_b4 * uVar14 >> 3;
    }
    else {
      auStack_a4 = (uVar12 >> 0x16 & 0x1ff) * uVar14 * 4;
    }
  }
  else {
    uVar12 = (unsigned int)param_3;
    uStack_b0 = uStack_b0 - iVar11 >> (uVar12 & 0x3f);
    if (uStack_b0 < 2) {
      uStack_b0 = 1;
    }
    stack_pair_ac.first = stack_pair_ac.first - iVar11 >> (uVar12 & 0x3f);
    uStack_b0 = uStack_b0 + iVar11;
    if (stack_pair_ac.first < 2) {
      stack_pair_ac.first = 1;
    }
    stack_pair_ac.first = stack_pair_ac.first + iVar11;
    if (uVar6 == 2) {
      uVar12 = (unsigned int)(iStack_b8 - iVar11) >> (uVar12 & 0x3f);
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      iStack_b8 = uVar12 + iVar11;
    }
    else {
      iStack_b8 = 1;
    }
    iVar8 = fn_8262FFB0(param_1);
    if ((iVar8 == 0x12) || (iVar8 == 0x13)) {
      iVar8 = 1 << (uVar15 >> 9 & 2);
      uVar15 = (*(unsigned int *)(param_1 + 0x24) >> 0x1a) + iVar8 & ~(iVar8 - 1U);
    }
    else {
      uVar15 = 1;
    }
    uVar17 = -LZCOUNT(uVar10) + 0x1f;
    uVar18 = -LZCOUNT(uVar16) + 0x1f;
    uVar19 = -LZCOUNT(iStack_c0) + 0x1f;
    if (iVar9 == 0) {
      param_3 = param_3 - 1;
    }
    else {
      uVar17 = -LZCOUNT(uVar10) + 0x20;
      uVar18 = -LZCOUNT(uVar16) + 0x20;
      uVar19 = -LZCOUNT(iStack_c0) + 0x20;
    }
    param_6 = puStack0000003c;
    param_5 = puStack00000034;
    if (-1 < (int)param_3) {
      do {
        if ((uVar17 & 0xffffffff) != 0) {
          uVar17 = uVar17 - 1;
        }
        if ((uVar18 & 0xffffffff) != 0) {
          uVar18 = uVar18 - 1;
        }
        if ((uVar19 & 0xffffffff) != 0) {
          uVar19 = uVar19 - 1;
        }
        uVar12 = 1 << ((unsigned int)uVar17 & 0x3f);
        uVar10 = 1 << ((unsigned int)uVar18 & 0x3f);
        iVar8 = 1 << ((unsigned int)uVar19 & 0x3f);
        iStack_c0 = iVar8;
        uStack_bc = uVar10;
        uStack_b4 = uVar12;
        fn_8263AC58(&uStack_b4,&uStack_bc,&iStack_c0,bVar1,uVar5,uVar6,iVar4);
        uVar16 = uStack_bc;
        uVar3 = ((__int64)(int)uStack_b4 * (__int64)(int)uVar14 & 0xffffffffU) >> 3;
        auStack_a4 = (unsigned int)uVar3;
        if (((uVar12 < 0x11) || (uVar10 < 0x11)) && ((uVar2 & 0x800) != 0)) {
          stack_pair_ac.second = fn_8263B230(param_3,uVar12,uVar10,iVar8,uVar3,
                                    (__int64)(int)auStack_a4 * (__int64)(int)uStack_bc,uVar5,
                                    &uStack_b4);
          uVar13 = uVar13 + stack_pair_ac.second;
          param_6 = puStack0000003c;
          param_5 = puStack00000034;
          break;
        }
        if (0 < (int)param_3) {
          if (uVar6 == 2) {
            uVar12 = auStack_a4 * iStack_c0 * uStack_bc + 0xfff & 0xfffff000;
          }
          else {
            uVar12 = (auStack_a4 * uStack_bc + 0xfff & 0xfffff000) * iStack_c0;
          }
          uVar13 = uVar12 * uVar15 + uVar13;
        }
        param_3 = param_3 - 1;
        param_6 = puStack0000003c;
        param_5 = puStack00000034;
      } while (-1 < (__int64)param_3);
    }
  }
  uVar16 = auStack_a4 * uVar16;
  uVar15 = uVar16 + 0xfff & 0xfffff000;
  *in_stack_00000064 = uVar15 * iStack0000001c + uVar13;
  *puStack0000002c = auStack_a4;
  if ((*(unsigned int *)(param_1 + 0x30) & 0x600) == 0x400) {
    *param_5 = uVar16;
    uVar12 = uVar16 * iStack_c0 + 0xfff & 0xfffff000;
  }
  else {
    uVar12 = uVar15 * iStack_c0;
    *param_5 = uVar15;
  }
  *param_6 = uVar12;
  *puStack0000004c = uStack_b0;
  *in_stack_00000054 = stack_pair_ac.first;
  *in_stack_0000005c = iStack_b8;
  *piStack00000044 = stack_pair_ac.second;
  return;
}

