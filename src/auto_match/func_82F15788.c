extern unsigned int uRam831b8d54;
extern unsigned int uRam831b8d58;


void fn_82F15788(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  if (param_2 == 0) {
    *param_3 = 0;
    return;
  }
  uVar4 = 1;
  param_3[0x17] = 0;
  *param_3 = 1;
  param_3[2] = 0;
  param_3[3] = 0;
  uVar1 = *(unsigned short *)(param_2 + 1);
  param_3[1] = 3;
  param_3[0x16] = uRam831b8d54 >> 0x1f & uVar1 >> 4 & 0x3f;
  uVar1 = *(unsigned short *)(param_2 + 5);
  param_3[0x11] = param_4;
  param_3[8] = 1;
  param_3[0xf] = 0;
  param_3[5] = uRam831b8d54 >> 0x1f & uVar1 >> 0xb & 1;
  param_3[9] = uRam831b8d54 >> 0x1f & uVar1 >> 10 & 1;
  param_3[0xb] = uRam831b8d58 >> 0x1e & (unsigned char)(uVar1 >> 8) & 3;
  param_3[0xc] = uRam831b8d54 >> 0x1f & uVar1 >> 7 & 1;
  param_3[0xe] = uRam831b8d54 >> 0x1f & uVar1 >> 6 & 1;
  uVar2 = uRam831b8d54 >> 0x1f & uVar1 >> 5 & 1;
  param_3[0x13] = uVar2;
  uVar3 = (uRam831b8d54 & (unsigned int)uVar1 << 0x1b) >> 0x1f;
  if (uVar2 == 0) {
    param_3[0x15] = uVar3;
  }
  else {
    param_3[0x14] = uVar3;
  }
  if ((param_3[0x13] == 0) && (param_3[0x15] == 0)) {
    uVar4 = 0;
  }
  param_3[0x12] = uVar4;
  param_3[4] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  param_3[0xd] = 0;
  param_3[0x10] = 0;
  param_3[10] = 0;
  return;
}

