extern unsigned int fn_829B2110;
extern unsigned int fn_829B2710;
extern unsigned int fn_829B3080;
extern unsigned int fn_829B30E0;
extern unsigned int fn_829B3140;
extern unsigned int fn_829B3158;
extern unsigned int lbl_8202F09C;
#define CONCAT44(a, b) ((unsigned __int64)(((unsigned __int64)(a) << 32) | (unsigned __int64)(unsigned int)(b)))

unsigned int * fn_8292E978(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int (**pcVar4)();
  unsigned __int64 uVar5;
  int (**pcVar6)();
  
  fn_82924CD8(param_1,param_2,0,1);
  *param_1 = &lbl_8202F09C;
  uVar5 = (CONCAT44(param_1[1],param_1[1]) & 0xfffffffffffffe3f) - 0x1a200012;
  if (uVar5 == 0) {
    uVar3 = 8;
    pcVar6 = fn_829B2710;
    pcVar4 = fn_829B2110;
  }
  else if ((uVar5 & 0xffffffff) == 1) {
    uVar3 = 0x10;
    pcVar6 = fn_829B3140;
    pcVar4 = fn_829B3080;
  }
  else {
    if ((uVar5 & 0xffffffff) != 2) goto LAB_8292ea20;
    uVar3 = 0x10;
    pcVar6 = fn_829B3158;
    pcVar4 = fn_829B30E0;
  }
  param_1[0x22] = uVar3;
  param_1[0x24] = pcVar6;
  param_1[0x23] = pcVar4;
LAB_8292ea20:
  memcpy(param_1 + 0x25,param_2 + 0x10,0x18);
  param_1[0x3a] = 0xffffffff;
  param_1[0x3b] = 0xffffffff;
  uVar1 = param_1[0x12] + 3 & 0xfffffffc;
  param_1[0x31] = param_1[0xf] & 0xfffffffc;
  uVar2 = param_1[0x11] + 3 & 0xfffffffc;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x34] = uVar1;
  param_1[0x33] = uVar2;
  param_1[0x32] = param_1[0x10] & 0xfffffffc;
  param_1[0x37] = uVar2 - (param_1[0xf] & 0xfffffffc) >> 2;
  param_1[0x38] = uVar1 - (param_1[0x10] & 0xfffffffc) >> 2;
  param_1[0x35] = param_1[0x13];
  param_1[0x39] = param_1[0x14] - param_1[0x13];
  param_1[0x36] = param_1[0x14];
  param_1[0x2d] = param_1[0x27] + 3 & 0xfffffffc;
  param_1[0x2b] = param_1[0x25] & 0xfffffffc;
  param_1[0x2c] = param_1[0x26] & 0xfffffffc;
  param_1[0x2f] = param_1[0x29];
  param_1[0x2e] = param_1[0x28] + 3 & 0xfffffffc;
  param_1[0x30] = param_1[0x2a];
  param_1[0x3f] = *(unsigned int *)(param_2 + 0x40);
  return param_1;
}
