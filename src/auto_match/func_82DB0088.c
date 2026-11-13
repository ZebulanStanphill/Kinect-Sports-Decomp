extern unsigned int lbl_8200D8B4;
extern unsigned int lbl_82141EA4;
extern unsigned int lbl_821AAD20;


void fn_82DB0088(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  param_1[6] = param_2;
  *(unsigned char *)((int)param_1 + 0x25) = *(unsigned char *)((int)param_1 + 0x25) & 0x33;
  *param_1 = &lbl_82141EA4;
  uVar1 = lbl_821AAD20;
  *(unsigned short *)((int)param_1 + 6) = 1;
  *(unsigned short *)((int)param_1 + 0x22) = 0xffff;
  *(unsigned char *)((int)param_1 + 0x26) = 0x50;
  *(unsigned short *)(param_1 + 0xb) = 0;
  param_1[10] = 0xffffffd1;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  uVar1 = lbl_8200D8B4;
  param_1[0xe] = 0;
  param_1[0x10] = 0x80000000;
  param_1[0xf] = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = param_1 + 0x15;
  param_1[0x13] = 0;
  param_1[0x14] = 0x80000001;
  param_1[0x17] = param_1 + 0x1a;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000001;
  param_1[0x16] = 0x200;
  *(unsigned char *)((int)param_1 + 0x25) = *(unsigned char *)((int)param_1 + 0x25) & 0xfc;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *(unsigned char *)((int)param_1 + 0x25) = *(unsigned char *)((int)param_1 + 0x25) & 0xcf;
  return;
}

