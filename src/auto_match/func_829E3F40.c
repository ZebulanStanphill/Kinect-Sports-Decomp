extern int fn_829E55D0();
extern int fn_829E5970();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_8201EBA4;
extern unsigned int lbl_8201FBB0;
extern unsigned int lbl_82057B38;
extern unsigned int lbl_82057B40;
extern unsigned int lbl_82057B44;
extern unsigned int lbl_82057B48;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_829E3F40(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  param_1[1] = 0;
  fn_829E55D0(param_1 + 2);
  fn_829E5970(param_1 + 9);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x28] = lbl_82002AE0;
  param_1[0x23] = 1;
  param_1[0x24] = 1;
  param_1[0x25] = 1;
  param_1[0x35] = lbl_8201EBA4;
  param_1[0x2e] = 1;
  uVar2 = lbl_82005748;
  param_1[0x2f] = 1;
  uVar3 = lbl_8201FBB0;
  param_1[0x30] = 4;
  param_1[0x2c] = uVar2;
  *(unsigned __int64 *)(param_1 + 0x32) = 1;
  param_1[0x2d] = uVar2;
  param_1[0x34] = 0;
  param_1[0x36] = uVar3;
  param_1[0x3c] = lbl_82057B38;
  uVar5 = lbl_82057B44;
  uVar4 = lbl_82057B40;
  uVar3 = lbl_82057B38;
  uVar2 = lbl_8200BF40;
  param_1[0x38] = lbl_82057B48;
  param_1[0x39] = uVar5;
  param_1[0x3a] = uVar4;
  param_1[0x3b] = uVar2;
  param_1[0x3d] = uVar3;
  param_1[0x3e] = uVar1;
  param_1[0x3f] = 0;
  param_1[0x40] = uVar1;
  *param_1 = 0;
  return param_1;
}

