extern int fn_8262FFB0();
extern int fn_8263AB38();
extern int fn_8263AC58();
extern int fn_8263B0F8();
extern unsigned int iStack_a8;
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_8263B388(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5,
                  unsigned int *param_6,unsigned int *param_7)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  
  uVar12 = *(unsigned int *)(param_1 + 0x20);
  bVar1 = (&lbl_821CBFB1)[(uVar12 & 0x3f) * 2];
  uVar2 = uVar12 & 0x3f;
  iVar4 = fn_8262FFB0();
  iStack_a8 = iVar4;
  if (iVar4 == 4) {
    fn_8263B0F8(param_1,&uStack_b4,&uStack_b0,&uStack_ac);
    uVar11 = *(unsigned int *)(param_1 + 0x30) >> 9 & 3;
    uVar9 = (*(unsigned int *)(param_1 + 0x1c) >> 0x16 & 0x1ff) * (unsigned int)bVar1 * 4;
    uStack_b8 = uStack_b4;
    uStack_c0 = uStack_b0;
    uStack_bc = uStack_ac;
    fn_8263AC58(&uStack_b8,&uStack_c0,&uStack_bc,bVar1,uVar2,uVar11,
                  *(unsigned int *)(param_1 + 0x1c) >> 0x1f);
    uVar12 = uStack_b4;
    uVar13 = uStack_b0;
    uVar10 = uStack_ac;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x28) >> 0x1f;
    uVar13 = -iVar5;
    uVar3 = (unsigned __int64)uVar13;
    iVar5 = iVar5 * -2;
    fn_8263B0F8(param_1,&uStack_b4,&uStack_b0,&uStack_ac);
    uVar10 = uStack_ac;
    uVar9 = *(unsigned int *)(param_1 + 0x30);
    uVar11 = uVar9 >> 9 & 3;
    uStack_b8 = 1 << ((uVar13 - (int)LZCOUNT((uStack_b4 - iVar5) - 1)) + 0x20 & 0x3f);
    uStack_c0 = 1 << ((uVar13 - (int)LZCOUNT((uStack_b0 - iVar5) - 1)) + 0x20 & 0x3f);
    if (uVar11 == 2) {
      uStack_bc = 1 << ((uVar13 - (int)LZCOUNT((uStack_ac - iVar5) + -1)) + 0x20 & 0x3f);
    }
    else {
      uStack_bc = 1;
    }
    if ((param_2 & 0xffffffff) == 0) {
      if (((0x10 < uStack_b8) && (0x10 < uStack_c0)) || ((uVar9 & 0x800) == 0)) {
        uStack_b8 = uStack_b4;
        uStack_c0 = uStack_b0;
        uStack_bc = uStack_ac;
      }
      uVar13 = *(unsigned int *)(param_1 + 0x1c);
      iVar4 = -((int)uVar13 >> 0x1f);
      fn_8263AC58(&uStack_b8,&uStack_c0,&uStack_bc,bVar1,uVar2,uVar11,iVar4);
      if (iVar4 == 0) {
        if ((uVar12 & 0x400) == 0) {
          if ((((uVar9 & 0x800) == 0) && (uVar11 == 1)) &&
             (((*(unsigned int *)(param_1 + 0x2c) & 0x3c0) == 0 && (uVar3 == 0)))) {
            fn_8263AB38(uVar2,&uStack_b0,&uStack_ac);
            uStack_c0 = (uStack_ac + uStack_b0) - 1 & ~(uStack_ac - 1);
          }
        }
      }
      uVar9 = (uVar13 >> 0x16 & 0x1ff) * (unsigned int)bVar1 * 4;
      uVar12 = uStack_b4;
      uVar13 = uStack_b0;
      iVar4 = iStack_a8;
    }
    else {
      uVar10 = (unsigned int)param_2;
      uVar12 = uStack_b4 - iVar5 >> (uVar10 & 0x3f);
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      uVar13 = uStack_b0 - iVar5 >> (uVar10 & 0x3f);
      uVar12 = uVar12 + iVar5;
      if (uVar13 < 2) {
        uVar13 = 1;
      }
      uVar13 = uVar13 + iVar5;
      if (uVar11 == 2) {
        uVar10 = uStack_ac - iVar5 >> (uVar10 & 0x3f);
        if (uVar10 < 2) {
          uVar10 = 1;
        }
        uVar10 = uVar10 + iVar5;
      }
      else {
        uVar10 = 1;
      }
      if ((uVar9 & 0x800) != 0) {
        lVar7 = (uVar3 - LZCOUNT((uStack_b4 - iVar5) + -1)) + 0x20;
        lVar6 = (uVar3 - LZCOUNT((uStack_b0 - iVar5) + -1)) + 0x20;
        if ((int)lVar6 <= (int)lVar7) {
          lVar7 = lVar6;
        }
        uVar8 = lVar7 - 4;
        if (((((uVar8 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar8 == 0) & uVar8 & 0xffffffff) <=
            (param_2 & 0xffffffff)) {
          lVar7 = (uVar3 - LZCOUNT((uStack_b4 - iVar5) + -1)) + 0x20;
          lVar6 = (uVar3 - LZCOUNT((uStack_b0 - iVar5) + -1)) + 0x20;
          if ((int)lVar6 <= (int)lVar7) {
            lVar7 = lVar6;
          }
          param_2 = lVar7 - 4;
          param_2 = (((param_2 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(param_2 == 0) & param_2;
        }
      }
      uVar9 = (unsigned int)param_2;
      uStack_b8 = uStack_b8 >> (uVar9 & 0x3f);
      if (uStack_b8 < 2) {
        uStack_b8 = 1;
      }
      uStack_c0 = uStack_c0 >> (uVar9 & 0x3f);
      if (uStack_c0 < 2) {
        uStack_c0 = 1;
      }
      uStack_bc = uStack_bc >> (uVar9 & 0x3f);
      if (uStack_bc < 2) {
        uStack_bc = 1;
      }
      fn_8263AC58(&uStack_b8,&uStack_c0,&uStack_bc,bVar1,uVar2,uVar11,
                    *(unsigned int *)(param_1 + 0x1c) >> 0x1f);
      uVar9 = uStack_b8 * bVar1 >> 3;
    }
  }
  uVar2 = *(unsigned int *)(param_1 + 0x1c);
  *param_3 = uVar12;
  *param_4 = uVar13;
  *param_5 = uVar10;
  *param_6 = uVar9;
  *param_7 = uVar9 * uStack_c0;
  if (((((uVar2 & 0x80000000) != 0) || (1 < (param_2 & 0xffffffff))) ||
      ((iVar4 != 3 && (iVar4 != 0x14)))) && (uVar11 != 2)) {
    *param_7 = uVar9 * uStack_c0 + 0xfff & 0xfffff000;
  }
  return;
}

