extern unsigned int DAT_831d3a74;
extern unsigned int DAT_831d3a8c;
extern unsigned int fn_82476F48;
extern unsigned int fn_82BA02A8;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_831D3A70;

/* WARNING: Inlined function: __savegprlr_24 */

unsigned int *
fn_82476198(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4,
           unsigned int param_5,unsigned __int64 param_6,unsigned int param_7)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  *param_1 = &lbl_821A8C90;
  param_1[5] = 0;
  param_1[6] = *(unsigned int *)(param_5 + 0x8c8);
  param_1[7] = param_3;
  param_1[8] = param_4;
  fn_822C5B18(param_1 + 10,param_6);
  param_1[0x10] = param_7;
  memcpy(param_1 + 0x26,param_2,0x48);
  param_1[0x57] = param_5;
  param_1[0x3b] = 0;
  param_1[0x38] = 2;
  param_1[0x39] = 3;
  param_1[0x3a] = 0xffffffff;
  param_1[0x3e] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  *(unsigned char *)(param_1 + 0x3d) = 0;
  param_1[0x40] = 0;
  *(unsigned char *)((int)param_1 + 0xf5) = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  *(unsigned char *)((int)param_1 + 0xf6) = 0;
  param_1[0x44] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  *(unsigned char *)(param_1 + 0x4b) = 0;
  param_1[0x48] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(unsigned char *)(param_1 + 0x51) = 0;
  param_1[0x4e] = 0;
  *(unsigned char *)(param_1 + 0x54) = 0;
  param_1[0x4f] = 0;
  param_1[0x55] = 0;
  param_1[0x50] = 0;
  param_1[0x58] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0xffffffff;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(unsigned char *)(param_1 + 0x62) = 0;
  DAT_831d3a74 = *param_2;
  DAT_831d3a8c = param_2[1];
  lbl_831D3A70 = param_5;
  uVar1 = fn_8265C9E0(0xa0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8227FDA0(uVar1,0xffffffff831d3a70);
  }
  param_1[5] = uVar2;
  param_1[1] = param_1;
  param_1[2] = fn_82476F48;
  param_1[3] = fn_82BA02A8;
  param_1[4] = fn_82BA02A8;
  param_1[0x59] = 0;
  param_1[0x5b] = 0xffffffff;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0xffffffff;
  param_1[0x5c] = param_2[0x11];
  fn_82476B88(param_1);
  fn_82359C18(param_6);
  return param_1;
}
