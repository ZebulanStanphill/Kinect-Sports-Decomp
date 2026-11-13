extern unsigned int uRam83188cec;
extern unsigned int uRam83188cf0;


void fn_82E84DF8(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  unsigned int uVar5;
  
  if (param_2 == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    uVar1 = *(unsigned short *)(param_2 + 6);
    param_3[1] = 3;
    param_3[0x16] = uRam83188cec >> 0x1f & uVar1 >> 8 & 0x3f;
    puVar4 = (unsigned short *)(param_2 + 10);
    uVar1 = *puVar4;
    param_3[0x17] = (uRam83188cec & (unsigned int)uVar1 << 0x10) >> 0x1f;
    param_3[2] = uRam83188cec >> 0x1f & uVar1 >> 0xe & 1;
    param_3[3] = uRam83188cec >> 0x1f & uVar1 >> 10 & 0x1f;
    for (; ((*(char *)puVar4 != '\0' || ((char)*puVar4 != '\0')) ||
           (*(char *)(puVar4 + 1) != '\x01')); puVar4 = (unsigned short *)((int)puVar4 + 1)) {
    }
    uVar1 = puVar4[2];
    param_3[8] = 1;
    param_3[0x11] = param_4;
    param_3[0xf] = 0;
    param_3[5] = uVar1 >> 0xb & 1 & uRam83188cec >> 0x1f;
    param_3[9] = uVar1 >> 10 & 1 & uRam83188cec >> 0x1f;
    param_3[10] = uVar1 >> 9 & 1 & uRam83188cec >> 0x1f;
    param_3[0xb] = uVar1 >> 7 & 3 & uRam83188cf0 >> 0x1e;
    param_3[0xc] = uVar1 >> 6 & 1 & uRam83188cec >> 0x1f;
    param_3[0xe] = uVar1 >> 5 & 1 & uRam83188cec >> 0x1f;
    uVar2 = uVar1 >> 4 & 1 & uRam83188cec >> 0x1f;
    param_3[0x13] = uVar2;
    uVar3 = (uRam83188cec & (unsigned int)uVar1 << 0x1c) >> 0x1f;
    if (uVar2 == 0) {
      param_3[0x15] = uVar3;
    }
    else {
      param_3[0x14] = uVar3;
    }
    if ((param_3[0x13] != 0) || (uVar5 = 0, param_3[0x15] != 0)) {
      uVar5 = 1;
    }
    param_3[0x12] = uVar5;
    param_3[4] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[0xd] = 0;
    param_3[0x10] = 0;
  }
  return;
}

