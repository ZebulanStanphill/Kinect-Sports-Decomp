extern int fn_823AA458();
extern int fn_823AAD80();
extern int fn_823AB470();
extern int fn_823AB478();
extern int fn_823AB480();
extern int fn_8289DE38();
extern int fn_82AB15D0();
extern int fn_82AB4658();
extern int fn_82AB63F8();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB69F0();
extern int fn_82AB6BC8();
extern int fn_82AB6F58();
extern int fn_82AB7718();
extern int fn_82AB8588();
extern int fn_82AB97B8();
extern int fn_82AB9898();
extern int fn_82ABA320();
extern int fn_82B697C0();
extern int fn_82B69A00();
extern int fn_82BA02A8();
extern int fn_82CE4720();


__int64 fn_82AB46B0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  
  lVar1 = fn_82AB4658(param_2);
  if (lVar1 == 0) {
    lVar2 = 0x16;
  }
  else {
    fn_823AA458(lVar1);
    uVar3 = fn_823AAD80();
    fn_823AA458(lVar1);
    uVar4 = fn_82CE4720();
    fn_823AA458(lVar1);
    uVar5 = fn_823AB470();
    fn_823AA458(lVar1);
    uVar6 = fn_823AB478();
    fn_823AA458(lVar1);
    uVar7 = fn_823AB480();
    fn_823AA458(lVar1);
    uVar8 = fn_82AB8588();
    fn_823AA458(lVar1);
    uVar9 = fn_8289DE38();
    fn_823AA458(lVar1);
    iVar12 = fn_82BA02A8();
    iVar13 = fn_82B69A00(uVar9,9);
    if ((iVar13 == 0) || (iVar13 = fn_82B69A00(uVar9,1), iVar13 != 0)) {
LAB_82ab4770:
      lVar2 = 0;
    }
    else {
      uVar10 = fn_82AB9898(uVar3,param_1);
      for (lVar1 = fn_82AB63F8(); lVar1 != 0; lVar1 = fn_82AB66F8(uVar10,lVar1)) {
        uVar11 = fn_82AB67A8(lVar1);
        iVar13 = fn_82AB7718(uVar11,param_2);
        if (iVar13 != 0) goto LAB_82ab4770;
      }
      iVar13 = fn_82B697C0(uVar5,param_2);
      if (iVar13 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6840,0xffffffff820d67d8,0x208);
      }
      lVar1 = fn_82AB69F0(*(unsigned int *)(iVar12 + 0x10),*(unsigned int *)(iVar12 + 0x14),
                                *(unsigned int *)(iVar12 + 0x18),uVar9,uVar6,uVar7,uVar8,1);
      if (lVar1 == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d67d8,0x213);
        lVar2 = 0x10;
      }
      else {
        fn_82AB6F58(lVar1,param_1);
        lVar2 = fn_82ABA320(uVar4,param_1,param_2,lVar1);
        if (lVar2 == 0) {
          lVar2 = fn_82AB97B8(uVar3,param_1,lVar1);
          if (lVar2 != 0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6840,0xffffffff820d67d8,0x244);
          }
        }
        else {
          fn_82AB6BC8(lVar1);
        }
      }
    }
  }
  return lVar2;
}

