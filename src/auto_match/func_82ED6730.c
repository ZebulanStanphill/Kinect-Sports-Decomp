extern int fn_82A1E650();
extern int fn_82A1E810();
extern int fn_82ED61A8();
extern int fn_82F28150();
extern int fn_82F2C488();
extern int fn_82F2C7C0();
extern unsigned int iStack00000044;
extern unsigned int iStack_c0;
extern unsigned int lbl_8329F070;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;


void fn_82ED6730(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int param_5,
                  unsigned int param_6,int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  int iStack00000044;
  unsigned int uStack0000004c;
  unsigned int in_stack_0000005c;
  int iStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  
  uStack0000002c = (unsigned int)param_4;
  uVar2 = (unsigned int)param_3;
  uStack_bc = 1;
  lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e54) + (unsigned __int64)in_stack_0000005c * 0x114;
  if ((*(int *)(param_1 + 0x7984) != 0) && (*(int *)(param_1 + 0x4f2c) == 0)) {
    uStack_b8 = (unsigned int)(uVar2 == 0);
  }
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  iStack00000044 = param_7;
  if (*(int *)(param_1 + 0x6de4) == 1) {
    iStack00000044 = *(int *)(param_1 + 0x568) >> 1;
    uStack00000034 = (*(int *)(param_1 + 0x564) >> 1) + param_5;
    uStack0000003c = iStack00000044 + param_6;
    iStack00000044 = iStack00000044 + param_7;
  }
  uStack0000001c = param_2;
  uStack00000024 = uVar2;
  uStack0000004c = param_8;
  fn_82F2C488(lbl_8329F070,param_1 + 0x4490);
  if ((param_3 & 0xffffffff) < (param_4 & 0xffffffff)) {
    iStack_c0 = (int)((param_3 & 0xffffffff) << 2);
    do {
      uVar5 = (unsigned __int64)uStack00000034;
      uVar1 = (unsigned int)param_3;
      uVar6 = (unsigned __int64)uStack0000003c;
      uStack_b4 = (unsigned int)LZCOUNT(((int)param_4 + -1) - uVar1) >> 5;
      if (*(int *)(param_1 + 0x8e0) != 0) {
        if (((param_3 & 0xffffffff) < (unsigned __int64)(*(int *)(param_1 + 0x2d4) - 1)) &&
           (*(int *)(*(int *)(param_1 + 0x8d8) + iStack_c0 + 4) != 0)) {
          uStack_b4 = 1;
        }
        if (*(int *)(*(int *)(param_1 + 0x8d8) + iStack_c0) != 0) {
          uStack_bc = 1;
        }
      }
      uVar8 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        uVar3 = iStack00000044 - uStack0000003c;
        do {
          fn_82ED61A8(param_1,uStack0000001c,lVar4,uVar8,param_3,uVar5,uVar6,uVar3 + uVar6);
          uVar8 = uVar8 + 1;
          uVar5 = uVar5 + 0x10;
          uVar6 = uVar6 + 8;
          lVar4 = lVar4 + 0x114;
        } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x2d0));
      }
      uVar3 = uStack00000024;
      if ((*(int *)(param_1 + 0x7984) != 0) && (*(int *)(param_1 + 0x4f2c) == 0)) {
        *(unsigned char *)(*(int *)(param_1 + 0x79a0) + uVar1) = 1;
        if (uStack_b8 == 0) {
          if (*(char *)(*(int *)(param_1 + 0x79a0) + uStack00000024 + -1) != '\0') {
            if ((int)uStack00000024 <= (int)uVar1) {
              iVar7 = uStack00000024 << 2;
              lVar9 = (1 - uVar2) + param_3;
              do {
                fn_82A1E810(*(unsigned int *)(iVar7 + *(int *)(param_1 + 0x7998)));
                lVar9 = lVar9 + -1;
                iVar7 = iVar7 + 4;
              } while (lVar9 != 0);
            }
            uStack_b8 = 1;
          }
        }
        else {
          fn_82A1E810(*(unsigned int *)(*(int *)(param_1 + 0x7998) + iStack_c0));
          uVar3 = uStack00000024;
        }
      }
      if ((*(unsigned int *)(param_1 + 0x924) & 1) != 0) {
        fn_82F28150(param_1,param_3,uStack00000034,uStack0000003c,iStack00000044,uStack_bc,0,
                          uVar3 == uVar1);
      }
      uStack0000003c = *(int *)(param_1 + 0x580) + uStack0000003c;
      iStack00000044 = *(int *)(param_1 + 0x580) + iStack00000044;
      uStack00000034 = *(int *)(param_1 + 0x57c) + uStack00000034;
      uStack_bc = 0;
      if ((uStack_b4 != 0) && ((*(unsigned int *)(param_1 + 0x924) & 1) != 0)) {
        fn_82F28150(param_1,param_3);
      }
      param_3 = param_3 + 1;
      iStack_c0 = iStack_c0 + 4;
      param_4 = (unsigned __int64)uStack0000002c;
    } while ((param_3 & 0xffffffff) < (unsigned __int64)uStack0000002c);
    param_3 = (unsigned __int64)uStack00000024;
  }
  fn_82F2C7C0(param_1 + 0x4490);
  if (((*(int *)(param_1 + 0x7984) != 0) && (*(int *)(param_1 + 0x4f2c) == 0)) && (uStack_b8 == 0))
  {
    lVar4 = (param_3 & 0x3fffffff) << 2;
    fn_82A1E650(*(unsigned int *)((int)lVar4 + *(int *)(param_1 + 0x7998) + -4),0xffffffffffffffff);
    if ((int)param_3 < (int)param_4) {
      lVar9 = param_4 - param_3;
      do {
        fn_82A1E810(*(unsigned int *)((int)lVar4 + *(int *)(param_1 + 0x7998)));
        lVar9 = lVar9 + -1;
        lVar4 = lVar4 + 4;
      } while (lVar9 != 0);
    }
  }
  return;
}

