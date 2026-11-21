extern unsigned int fn_82BBECA8;
extern unsigned int fn_82BBEEF0;
extern unsigned int fn_82BBEF70;
extern unsigned int fn_82BBF178;
extern unsigned int fn_82BBF2C0;
extern unsigned int fn_82BBF428;
extern unsigned int fn_82BBFC10;
extern unsigned int fn_82BBFC70;
extern unsigned int fn_82BBFCD0;
extern unsigned int fn_82BBFCE8;
extern unsigned int lbl_820DC938;
#define CONCAT44(a, b) ((unsigned __int64)(((unsigned __int64)(a) << 32) | (unsigned __int64)(unsigned int)(b)))

unsigned int * fn_82B98C40(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int (**pcVar4)();
  unsigned __int64 uVar5;
  int (**pcVar6)();
  
  fn_82B8F788(param_1,param_2,0,1);
  *param_1 = &lbl_820DC938;
  uVar5 = (CONCAT44(param_1[1],param_1[1]) & 0xfffffffffffffeff) - 0x1a200052;
  if (uVar5 == 0) {
    pcVar6 = fn_82BBF178;
    pcVar4 = fn_82BBECA8;
LAB_82b98d10:
    uVar3 = 8;
  }
  else if ((uVar5 & 0xffffffff) == 1) {
    uVar3 = 0x10;
    pcVar6 = fn_82BBFCD0;
    pcVar4 = fn_82BBFC10;
  }
  else {
    if ((uVar5 & 0xffffffff) != 2) {
      if ((uVar5 & 0xffffffff) == 0x28) {
        pcVar6 = fn_82BBF2C0;
        pcVar4 = fn_82BBEEF0;
      }
      else {
        if ((uVar5 & 0xffffffff) != 0x29) goto LAB_82b98d20;
        pcVar6 = fn_82BBF428;
        pcVar4 = fn_82BBEF70;
      }
      goto LAB_82b98d10;
    }
    uVar3 = 0x10;
    pcVar6 = fn_82BBFCE8;
    pcVar4 = fn_82BBFC70;
  }
  param_1[0x22] = uVar3;
  param_1[0x24] = pcVar6;
  param_1[0x23] = pcVar4;
LAB_82b98d20:
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
