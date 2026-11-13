#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230110();
extern int fn_82230180();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_8223DEF8();
extern int fn_8223DFF0();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822402F8();
extern int fn_822403C8();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int stack0x00000000;


unsigned __int64 fn_8289FDC8(unsigned __int64 param_1,int param_2,char param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned char *apuStack_e0 [20];
  unsigned char **ppuStack_90;
  
  uVar5 = ZEXT48(&stack0x00000000);
  apuStack_e0[0] = &lbl_821AA8E0;
  ppuStack_90 = &lbl_82020F40;
  fn_8223CD08(uVar5 - 0x90,uVar5 - 0xdc,0);
  *(unsigned char ***)((int)apuStack_e0 + *(int *)(apuStack_e0[0] + 4)) =
       &lbl_82021284;
  fn_8223CF38(uVar5 - 0xdc,2);
  iVar1 = *(int *)(param_2 + 0x3c);
  if (param_3 == '\0') {
    if (iVar1 == 0) {
      lVar8 = fn_82230110(uVar5 - 0x100,0xffffffff82196582);
    }
    else {
      uVar6 = fn_82230110(uVar5 - 0x120,0xffffffff82196824);
      uVar6 = fn_8223DEF8(uVar6,param_2 + 0x2c,0,0xffffffffffffffff);
      fn_822402F8(uVar5 - 0x140,uVar6);
      lVar8 = uVar5 - 0x140;
    }
    if (*(char *)(param_2 + 0x26) == '\0') {
      uVar6 = 0xffffffff820237d0;
    }
    else {
      uVar6 = 0xffffffff820237d8;
    }
    uVar2 = *(unsigned int *)(param_2 + 0x28);
    uVar3 = *(unsigned int *)(param_2 + 8);
    uVar4 = *(unsigned int *)(param_2 + 0xc);
    uVar7 = fn_82240158(uVar5 - 0xe0,0xffffffff82023c68);
    uVar6 = fn_82240158(uVar7,uVar6);
    uVar6 = fn_8223B728(uVar6,lVar8);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c84);
    uVar6 = fn_8223FBB0(uVar6,uVar4);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c7c);
    uVar6 = fn_8223FBB0(uVar6,uVar3);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c74);
    uVar6 = fn_8223FBB0(uVar6,uVar2);
    fn_82240158(uVar6,0xffffffff82196fb0);
    if (iVar1 == 0) {
      fn_82230180(uVar5 - 0x100);
      goto LAB_828a00d0;
    }
    fn_82230180(uVar5 - 0x140);
    lVar8 = uVar5 - 0x120;
  }
  else {
    if (iVar1 == 0) {
      lVar8 = fn_82230110(uVar5 - 0x120,0xffffffff82196582);
    }
    else {
      uVar6 = fn_82230110(uVar5 - 0x100,0xffffffff82023cb8);
      uVar6 = fn_8223DEF8(uVar6,param_2 + 0x2c,0,0xffffffffffffffff);
      uVar6 = fn_8223DFF0(uVar6,0xffffffff82023cb0,7);
      fn_822402F8(uVar5 - 0x160,uVar6);
      lVar8 = uVar5 - 0x160;
    }
    if (*(char *)(param_2 + 0x26) == '\0') {
      uVar6 = 0xffffffff820237d0;
    }
    else {
      uVar6 = 0xffffffff820237d8;
    }
    uVar2 = *(unsigned int *)(param_2 + 0x28);
    uVar3 = *(unsigned int *)(param_2 + 8);
    uVar4 = *(unsigned int *)(param_2 + 0xc);
    uVar7 = fn_82240158(uVar5 - 0xe0,0xffffffff82023c8c);
    uVar6 = fn_82240158(uVar7,uVar6);
    uVar6 = fn_8223B728(uVar6,lVar8);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c84);
    uVar6 = fn_8223FBB0(uVar6,uVar4);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c7c);
    uVar6 = fn_8223FBB0(uVar6,uVar3);
    uVar6 = fn_82240158(uVar6,0xffffffff82023c74);
    uVar6 = fn_8223FBB0(uVar6,uVar2);
    fn_82240158(uVar6,0xffffffff82196fb0);
    if (iVar1 == 0) {
      fn_82230180(uVar5 - 0x120);
      goto LAB_828a00d0;
    }
    fn_82230180(uVar5 - 0x160);
    lVar8 = uVar5 - 0x100;
  }
  fn_82230180(lVar8);
LAB_828a00d0:
  fn_822403C8(param_1,uVar5 - 0xdc);
  fn_8223DBE8(uVar5 - 0x90);
  ppuStack_90 = &lbl_82020F30;
  fn_82F62F60(uVar5 - 0x90);
  return param_1;
}

