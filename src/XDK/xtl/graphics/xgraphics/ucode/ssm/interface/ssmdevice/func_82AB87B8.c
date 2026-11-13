extern int fn_82AB15D0();
extern int fn_82AB18A8();
extern int fn_82AB4D18();
extern int fn_82AB8730();
extern int fn_82AB9A50();
extern int fn_82ABA458();
extern int fn_82B693B0();
extern int fn_82B69840();
extern int fn_82B6AB18();
extern int fn_82B6AC48();
extern int fn_82B6B968();
extern int fn_82B6BB00();
extern int fn_82B6BC98();
extern int fn_82B6CB80();
extern int fn_82B6DB00();
extern int fn_82B6DE98();
extern int fn_82F68CC0();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


int fn_82AB87B8(int *param_1,int param_2)

{
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  int *piVar9;
  __int64 lVar10;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  if ((((param_2 == 0xd) || (param_2 == 0xb)) && (param_1 != (int *)0x0)) && (param_1[10] != 0)) {
    fn_82AB18A8(param_1[4],param_1[10],param_1[0xc],param_1[0xd],param_1[0xe],param_1[0xf],
                    param_1[0x10],param_1[0x11]);
    if (param_1[9] == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7318,0xffffffff820d7090,0x123);
    }
    if (param_1[9] != 0) {
      lVar8 = 0xf;
      piVar9 = (int *)0x83160580;
      do {
        (*(int (**)())param_1[9])(param_1[4],piVar9[-1],piVar9);
        iVar2 = *piVar9;
        if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 0)) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7290,0xffffffff820d7090,0x132);
        }
        lVar8 = lVar8 + -1;
        piVar9 = piVar9 + 3;
      } while (lVar8 != 0);
    }
    if (*param_1 != 0x32) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7260,0xffffffff820d7090,0x139);
    }
    if (param_1[5] == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d723c,0xffffffff820d7090,0x13c);
    }
    if (param_1[6] == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d721c,0xffffffff820d7090,0x13d);
    }
    if ((((int (**)())param_1[5] != (int (**)())0x0) && (param_1[6] != 0)) &&
       (iVar2 = (*(int (**)())param_1[5])(param_1[4],0x138), iVar2 != 0)) {
      iVar7 = iVar2 + 0xcc;
      iVar6 = -0x7ce9f370;
      lVar8 = 5;
      do {
        puVar5 = (unsigned int *)(iVar6 + -4);
        puVar4 = (unsigned int *)(iVar7 + -4);
        lVar10 = 5;
        do {
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar5;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        lVar8 = lVar8 + -1;
        iVar7 = iVar7 + 0x14;
        iVar6 = iVar6 + 0x14;
      } while (lVar8 != 0);
      *(unsigned int *)(iVar2 + 0x130) = 10;
      *(unsigned int *)(iVar2 + 0x134) = 10;
      *(unsigned int *)(iVar2 + 0x4c) = 0;
      fn_82F68CC0(iVar2,param_1,0x48);
      uVar3 = fn_82B6B968(param_1[4],param_1[5],param_1[6],1000,100);
      *(unsigned int *)(iVar2 + 0x70) = uVar3;
      uVar3 = fn_82B6BB00(param_1[4],param_1[5],param_1[6],1000,100);
      *(unsigned int *)(iVar2 + 0x74) = uVar3;
      uVar3 = fn_82B6BC98(param_1[4],param_1[5],param_1[6],10,100);
      *(unsigned int *)(iVar2 + 0x78) = uVar3;
      if (*(int *)(iVar2 + 0x70) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7204,0xffffffff820d7090,0x17e);
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d71e8,0xffffffff820d7090,0x17f);
      }
      if (*(int *)(iVar2 + 0x78) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d71cc,0xffffffff820d7090,0x180);
      }
      uVar3 = fn_82B69840(param_1[4],param_1[5],param_1[6],param_1[9]);
      *(unsigned int *)(iVar2 + 0x5c) = uVar3;
      fn_82AB8730(iVar2 + 0x7c);
      uVar3 = fn_82AB4D18(param_1[4],param_1[5],param_1[6],10);
      *(unsigned int *)(iVar2 + 0x48) = uVar3;
      uStack_60 = 0;
      uStack_54 = 0x20;
      uStack_58 = 0x100;
      uStack_5c = 5;
      uStack_50 = 0x1000;
      uStack_4c = 0x100;
      uStack_48 = 0x40;
      uStack_44 = 0x100;
      uVar1 = fn_82B6DE98(&uStack_60,param_1);
      *(int *)(iVar2 + 200) = (int)uVar1;
      uVar3 = fn_82B6DB00(param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],uVar1,
                                *(unsigned int *)(iVar2 + 0x5c),*(unsigned int *)(iVar2 + 0x70));
      *(unsigned int *)(iVar2 + 0x50) = uVar3;
      uVar3 = fn_82AB9A50(param_1[4],param_1[5],param_1[6],*(unsigned int *)(iVar2 + 0x70),
                                *(unsigned int *)(iVar2 + 0x134));
      *(unsigned int *)(iVar2 + 0x54) = uVar3;
      uVar3 = fn_82B6AB18(param_1[4],param_1[5],param_1[6],*(unsigned int *)(iVar2 + 0x5c),
                                *(unsigned int *)(iVar2 + 0x50),*(unsigned int *)(iVar2 + 200),
                                *(unsigned int *)(iVar2 + 8) & 1);
      *(unsigned int *)(iVar2 + 0x58) = uVar3;
      uVar1 = fn_82B6CB80(param_1[4],param_1[5],param_1[6],*(unsigned int *)(iVar2 + 0x54),
                                *(unsigned int *)(iVar2 + 0x5c));
      *(int *)(iVar2 + 0x68) = (int)uVar1;
      uVar1 = fn_82ABA458(param_1[4],param_1[5],param_1[6],*(unsigned int *)(iVar2 + 0x50),
                                *(unsigned int *)(iVar2 + 0x54),uVar1,*(unsigned int *)(iVar2 + 200),
                                *(unsigned int *)(iVar2 + 0x5c));
      *(int *)(iVar2 + 0x60) = (int)uVar1;
      uVar1 = fn_82B6AC48(param_1[4],param_1[5],param_1[6],uVar1,*(unsigned int *)(iVar2 + 0x50)
                                ,*(unsigned int *)(iVar2 + 0x58),*(unsigned int *)(iVar2 + 0x74),
                                *(unsigned int *)(iVar2 + 0x70));
      *(int *)(iVar2 + 100) = (int)uVar1;
      uVar3 = fn_82B693B0(param_1[4],param_1[5],param_1[6],uVar1,*(unsigned int *)(iVar2 + 0x5c)
                               );
      *(unsigned int *)(iVar2 + 0x6c) = uVar3;
      if (*(int *)(iVar2 + 0x5c) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d71b8,0xffffffff820d7090,0x1e7);
      }
      if (*(int *)(iVar2 + 0x60) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d71a4,0xffffffff820d7090,0x1e8);
      }
      if (*(int *)(iVar2 + 0x58) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d718c,0xffffffff820d7090,0x1e9);
      }
      if (*(int *)(iVar2 + 0x6c) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7174,0xffffffff820d7090,0x1ea);
      }
      if (*(int *)(iVar2 + 0x50) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d715c,0xffffffff820d7090,0x1eb);
      }
      if (*(int *)(iVar2 + 0x54) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7144,0xffffffff820d7090,0x1ec);
      }
      if (*(int *)(iVar2 + 100) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d712c,0xffffffff820d7090,0x1ed);
      }
      if (*(int *)(iVar2 + 200) != 0) {
        return iVar2;
      }
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7118,0xffffffff820d7090,0x1ee);
      return iVar2;
    }
  }
  return 0;
}

