#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8251A6C0();
extern int fn_82520AC8();
extern int fn_828B9720();
extern unsigned int stack0x00000000;


unsigned __int64 fn_8251A540(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  uVar4 = ZEXT48(&stack0x00000000);
  fn_8223CFC0(uVar4 - 0x110,2,1);
  fn_82240158(uVar4 - 0x110,0xffffffff821c28ec);
  uVar7 = 0xffffffff821c24f0;
  uVar1 = *(unsigned int *)(param_2 + 0x50);
  if (uVar1 == 0) {
    uVar7 = 0xffffffff821b42c0;
LAB_8251a688:
    lVar6 = uVar4 - 0x110;
  }
  else {
    if (uVar1 == 1) {
      uVar7 = 0xffffffff821c2900;
      goto LAB_8251a688;
    }
    if (uVar1 < 3) {
      uVar7 = fn_8251A6C0(uVar4 - 0x70,*(unsigned int *)(param_2 + 0xc));
      uVar5 = fn_82240158(uVar4 - 0x110,0xffffffff821c2908);
      uVar7 = fn_8223B728(uVar5,uVar7);
      fn_82240158(uVar7,0xffffffff821c24f0);
      lVar6 = uVar4 - 0x70;
LAB_8251a664:
      fn_82230300(lVar6,1,0);
      goto LAB_8251a690;
    }
    if (uVar1 == 3) {
      uVar7 = 0xffffffff821c2918;
      goto LAB_8251a688;
    }
    if (4 < uVar1) {
      if (uVar1 != 5) goto LAB_8251a690;
      uVar7 = fn_828B9720(uVar4 - 0x50,*(unsigned int *)(param_2 + 0x44),0,0,0);
      uVar5 = fn_82240158(uVar4 - 0x110,0xffffffff821c2950);
      uVar7 = fn_8223B728(uVar5,uVar7);
      fn_82240158(uVar7,0xffffffff821c24f0);
      lVar6 = uVar4 - 0x50;
      goto LAB_8251a664;
    }
    uVar2 = *(unsigned int *)(param_2 + 0x38);
    uVar3 = *(unsigned int *)(param_2 + 0x34);
    uVar5 = fn_82240158(uVar4 - 0x110,0xffffffff821c2938);
    uVar5 = fn_82520AC8(uVar5,uVar3);
    uVar5 = fn_82240158(uVar5,0xffffffff821c2924);
    lVar6 = fn_82520AC8(uVar5,uVar2);
  }
  fn_82240158(lVar6,uVar7);
LAB_8251a690:
  fn_82240158(uVar4 - 0x110,0xffffffff821c24f0);
  fn_822403C8(param_1,uVar4 - 0x10c);
  fn_8223DCC8(uVar4 - 0x110);
  return param_1;
}

