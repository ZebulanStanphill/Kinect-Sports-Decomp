extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_827EFFE8();
extern int fn_827F2EB0();
extern int fn_827F3A60();
extern int fn_827F3B30();
extern int fn_827F3C20();
extern int fn_827F3EB0();
extern int fn_827F94B0();
extern int fn_82811080();
extern int fn_82811438();
extern int memcpy();
extern unsigned int lbl_8201DCF8;


unsigned int * fn_827F0298(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  int iVar7;
  unsigned __int64 uVar6;
  __int64 lVar8;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [16];
  
  fn_827F2EB0();
  param_1[0x45] = 0;
  *param_1 = &lbl_8201DCF8;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(unsigned short *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x44] = 0;
  *(unsigned short *)(param_1 + 0x4b) = 0;
  auStack_60[0] = 0;
  fn_82811438(auStack_50,auStack_60,0x10);
  uVar2 = fn_827F3EB0(param_1);
  lVar8 = (uVar2 & 0x3ffffff) * 0x40;
  lVar3 = fn_827F3A60(param_1);
  lVar4 = fn_827F3EB0(param_1);
  lVar5 = fn_82811080(0xffffffff8320a3e0,lVar4 * 0x34 + lVar3 + lVar8,auStack_50);
  param_1[0x4a] = (int)lVar5;
  iVar7 = fn_827F3EB0(param_1);
  if (iVar7 != 0) {
    param_1[0x44] = (int)lVar5;
    lVar5 = lVar5 + lVar8;
  }
  fn_827F3B30(param_1,lVar5);
  param_1[0x46] = (int)(lVar5 + lVar3);
  memcpy(lVar5 + lVar3,*(unsigned int *)(param_2 + 0x2c),lVar4 * 0x34);
  uVar1 = param_1[0x46];
  uVar6 = fn_827F3C20(param_1);
  fn_827F94B0(uVar6,uVar1);
  fn_827EFFE8(param_1);
  return param_1;
}

