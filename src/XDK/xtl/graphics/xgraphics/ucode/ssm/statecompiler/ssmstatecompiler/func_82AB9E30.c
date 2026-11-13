extern int fn_82AB15D0();
extern int fn_82AB6EC0();
extern int fn_82AB6F58();
extern int fn_82AB7010();
extern int fn_82AB7C30();
extern int fn_82AB81E8();
extern int fn_82AB9738();
extern int fn_82B69A00();
extern int fn_82B6C978();
extern int fn_82B6CFD8();
extern int fn_82B6D168();
extern int fn_82B6D410();
extern int fn_82B7B7B8();
extern int fn_82B7D3B0();
extern int fn_82B7E460();
extern int fn_82B7F3D8();
extern int fn_82B7F430();
extern int fn_82B800F0();
extern int fn_82B80178();
extern int fn_82BA02A8();


unsigned __int64 fn_82AB9E30(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar8;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  uVar2 = *(unsigned int *)(param_1 + 0x10);
  iVar8 = fn_82B69A00(*(unsigned int *)(param_1 + 0x1c),1);
  uVar3 = fn_82AB6EC0(param_2,0);
  lVar4 = fn_82AB9738(uVar2,uVar3);
  if (lVar4 == 0) {
    uVar9 = 0x15e;
    uVar3 = 0xffffffff820d770c;
  }
  else {
    uVar9 = fn_82AB6EC0(param_2,1);
    lVar5 = fn_82AB9738(uVar2,uVar9);
    if (lVar5 != 0) {
      uVar6 = fn_82B6D410(*(unsigned int *)(param_1 + 0xc),0);
      *param_3 = (int)uVar6;
      if ((uVar6 & 0xffffffff) == 0) {
        fn_82AB15D0(uVar6,0xffffffff820d2ea4,0xffffffff820d76cc,0xffffffff820d7628,0x172);
        return 0x10;
      }
      uVar7 = fn_82B7F430();
      fn_82AB6F58(uVar7,uVar3);
      uVar7 = fn_82B7F3D8(*param_3);
      fn_82AB6F58(uVar7,uVar9);
      if (iVar8 == 0) {
        iVar8 = fn_82B6CFD8(*(unsigned int *)(param_1 + 0x14),param_2,*param_3);
        if (iVar8 == 0) {
          iVar8 = fn_82B6D168(*(unsigned int *)(param_1 + 0x14),param_2,*param_3);
          if (iVar8 == 0) {
            fn_82AB81E8(*(unsigned int *)(param_1 + 0x28));
            fn_82AB81E8(*(unsigned int *)(param_1 + 0x2c));
            uVar2 = *(unsigned int *)(param_1 + 0x28);
            uVar7 = fn_82B7F430(*param_3);
            fn_82AB7010(uVar7,uVar2);
            uVar2 = *(unsigned int *)(param_1 + 0x2c);
            uVar7 = fn_82B7F3D8(*param_3);
            fn_82AB7010(uVar7,uVar2);
            fn_82BA02A8(uVar1,0xffffffff820d76b0,uVar9);
            fn_82BA02A8(uVar1,0xffffffff820d7694,uVar3);
            uVar3 = fn_82B7F3D8(*param_3);
            uVar9 = fn_82B7F430(*param_3);
            uVar3 = fn_82B7D3B0(uVar1,uVar9,uVar3,lVar4,lVar5,param_2);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            fn_82B7F430(*param_3);
            uVar3 = fn_82AB7C30();
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            fn_82B7F3D8(*param_3);
            uVar3 = fn_82AB7C30();
            if ((int)uVar3 != 0) {
              return uVar3;
            }
          }
          fn_82B800F0(*param_3);
          fn_82B80178(*param_3);
          uVar3 = fn_82B7F430(*param_3);
          uVar9 = fn_82B7F3D8(*param_3);
          fn_82B6C978(*(unsigned int *)(param_1 + 0x14),uVar9,uVar3);
        }
      }
      else {
        fn_82AB81E8(*(unsigned int *)(param_1 + 0x28));
        fn_82AB81E8(*(unsigned int *)(param_1 + 0x2c));
        uVar1 = *(unsigned int *)(param_1 + 0x28);
        uVar3 = fn_82B7F430(*param_3);
        fn_82AB7010(uVar3,uVar1);
        uVar1 = *(unsigned int *)(param_1 + 0x2c);
        uVar3 = fn_82B7F3D8(*param_3);
        fn_82AB7010(uVar3,uVar1);
        fn_82B7B7B8(*(unsigned int *)(param_1 + 0x18),param_2,*param_3);
        fn_82B7F430(*param_3);
        uVar3 = fn_82AB7C30();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        fn_82B7F3D8(*param_3);
        uVar3 = fn_82AB7C30();
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      fn_82B7E460(*param_3,param_2);
      return 0;
    }
    uVar9 = 0x167;
    uVar3 = 0xffffffff820d76fc;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,uVar3,0xffffffff820d7628,uVar9);
  return 0x13;
}

