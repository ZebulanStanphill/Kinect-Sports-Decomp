typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82964CB0();
extern int fn_82964D38();
extern int fn_82965280();
extern int fn_829698F8();
extern int fn_8296CF68();
extern int fn_8296D7F0();


unsigned __int64 fn_8296EB38(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  
  bVar4 = false;
  fn_8296CF68();
  lVar5 = fn_8265C940(*(int *)(param_1 + 8) << 2,0x24810000);
  if (lVar5 == 0) {
    uVar6 = 0xffffffff8007000e;
  }
  else {
    uVar6 = 0;
    bVar3 = false;
    uVar10 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar7 = 0;
      lVar9 = lVar5 + -4;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar7);
        *(unsigned int *)(iVar2 + 0x30) = uVar10;
        uVar1 = *(unsigned int *)(*(int *)(*(int *)(iVar2 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
        if (((((uVar1 & 0x100) != 0) && ((uVar1 & 0x400) == 0)) && ((uVar1 & 0x800) == 0)) &&
           ((uVar1 & 0x40) == 0)) {
          lVar9 = lVar9 + 4;
          *(unsigned int *)lVar9 = uVar10;
          uVar6 = uVar6 + 1;
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar10 < *(unsigned int *)(param_1 + 8));
    }
    fn_82965280(0xffffffff82964cb0,lVar5,uVar6,param_1);
    if (1 < (uVar6 & 0xffffffff)) {
      lVar8 = uVar6 - 1;
      lVar9 = lVar5;
      do {
        lVar9 = lVar9 + 4;
        uVar6 = (unsigned __int64)*(unsigned int *)lVar9;
        iVar7 = fn_82964CB0(*(unsigned int *)
                               (*(int *)(((unsigned int *)lVar9)[-1] * 4 + *(int *)(param_1 + 0x14)) + 0x30)
                              ,uVar6,param_1);
        if (iVar7 == 0) {
          bVar3 = true;
          *(unsigned int *)(*(int *)((int)((uVar6 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14)) + 4)
               = *(unsigned int *)(param_1 + 0x74);
          *(unsigned int *)(*(int *)(*(int *)lVar9 * 4 + *(int *)(param_1 + 0x14)) + 0x30) =
               *(unsigned int *)(*(int *)(((int *)lVar9)[-1] * 4 + *(int *)(param_1 + 0x14)) + 0x30);
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      if (bVar3) {
        fn_8296D7F0(param_1);
        bVar4 = true;
      }
    }
    uVar6 = 0;
    bVar3 = false;
    uVar10 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar7 = 0;
      lVar9 = lVar5 + -4;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar7);
        *(unsigned int *)(iVar2 + 0x30) = uVar10;
        iVar2 = *(int *)(iVar2 + 4);
        if ((*(int *)(param_1 + 0x74) != iVar2) &&
           (((*(unsigned int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x40) != 0 ||
            (*(int *)(param_1 + 0xdc) != 0)))) {
          lVar9 = lVar9 + 4;
          *(unsigned int *)lVar9 = uVar10;
          uVar6 = uVar6 + 1;
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar10 < *(unsigned int *)(param_1 + 8));
    }
    fn_82965280(0xffffffff82964d38,lVar5,uVar6,param_1);
    uVar11 = 0;
    if ((uVar6 & 0xffffffff) != 0) {
      uVar11 = (unsigned __int64)*(unsigned int *)lVar5;
    }
    if (1 < (uVar6 & 0xffffffff)) {
      lVar8 = uVar6 - 1;
      lVar9 = lVar5;
      do {
        lVar9 = lVar9 + 4;
        uVar6 = (unsigned __int64)*(unsigned int *)lVar9;
        iVar7 = fn_82964D38(uVar11,uVar6,param_1);
        if (iVar7 == 0) {
          fn_829698F8(param_1,uVar11,uVar6);
          bVar3 = true;
          *(unsigned int *)(*(int *)(*(unsigned int *)lVar9 * 4 + *(int *)(param_1 + 0x14)) + 4) =
               *(unsigned int *)(param_1 + 0x74);
          uVar6 = uVar11;
        }
        lVar8 = lVar8 + -1;
        uVar11 = uVar6;
      } while (lVar8 != 0);
      if (bVar3) {
        fn_8296D7F0(param_1);
        bVar4 = true;
      }
    }
    fn_8265C990(lVar5,0x24810000);
    uVar6 = (unsigned __int64)!bVar4;
  }
  return uVar6;
}

