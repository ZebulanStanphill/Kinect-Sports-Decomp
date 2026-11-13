extern unsigned int lbl_821AAD20;


unsigned __int64
fn_83026A78(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4,unsigned short param_5,
             unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  
  *(unsigned int *)(param_1 + 0xb0) = param_2;
  *(unsigned int *)(param_1 + 0xb4) = param_4;
  *(unsigned char *)(param_1 + 0xb8) = 0;
  *(unsigned char *)(param_1 + 0xba) = 1;
  *(unsigned short *)(param_1 + 0xbe) = param_5;
  trapWord(6,param_6,0);
  *(unsigned int *)(param_1 + 0x58) = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x30) = 0x10000;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  bVar2 = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned char *)(param_1 + 0x5f) = 1;
  *(int *)(param_1 + 0x40) = (int)(48000 / (param_6 & 0xffffffff));
  *(float *)(param_1 + 0x54) = (float)*param_3 / (float)(param_6 & 0xffffffff);
  for (uVar3 = param_3[1] >> 0xe; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    bVar2 = bVar2 + 1;
  }
  uVar3 = (unsigned int)bVar2;
  *(unsigned char *)(param_1 + 0x5d) = bVar2;
  *(unsigned char *)(param_1 + 0x5e) = (unsigned char)(param_3[1] >> 3) & 0x1f;
  uVar1 = param_3[1] >> 8 & 0x3f;
  if (uVar1 == 8) {
    if (uVar3 - 1 < 6) {
      if (uVar3 == 2) {
        *(unsigned int *)(param_1 + 0x50) = 0;
        *(unsigned char *)(param_1 + 0x5c) = 5;
        return 1;
      }
      if ((uVar3 != 3) && (uVar3 != 4)) {
        if ((uVar3 != 5) && (uVar3 == 1)) {
          *(unsigned int *)(param_1 + 0x50) = 0;
          *(unsigned char *)(param_1 + 0x5c) = 4;
          return 1;
        }
        *(unsigned int *)(param_1 + 0x50) = 0;
        *(unsigned char *)(param_1 + 0x5c) = 7;
        return 1;
      }
      *(unsigned int *)(param_1 + 0x50) = 0;
      *(unsigned char *)(param_1 + 0x5c) = 6;
      return 1;
    }
  }
  else if (uVar1 == 0x10) {
    if (uVar3 - 1 < 6) {
      if (uVar3 == 2) {
        *(unsigned char *)(param_1 + 0x5c) = 1;
        *(unsigned int *)(param_1 + 0x50) = 0;
        return 1;
      }
      if ((uVar3 != 3) && (uVar3 != 4)) {
        if ((uVar3 != 5) && (uVar3 == 1)) {
          *(unsigned char *)(param_1 + 0x5c) = 0;
          *(unsigned int *)(param_1 + 0x50) = 0;
          return 1;
        }
        *(unsigned int *)(param_1 + 0x50) = 0;
        *(unsigned char *)(param_1 + 0x5c) = 3;
        return 1;
      }
      *(unsigned int *)(param_1 + 0x50) = 0;
      *(unsigned char *)(param_1 + 0x5c) = 2;
      return 1;
    }
  }
  else if ((uVar1 == 0x20) && (uVar3 - 1 < 6)) {
    if (uVar3 == 2) {
      *(unsigned int *)(param_1 + 0x50) = 0;
      *(unsigned char *)(param_1 + 0x5c) = 9;
      return 1;
    }
    if ((uVar3 != 3) && (uVar3 != 4)) {
      if ((uVar3 != 5) && (uVar3 == 1)) {
        *(unsigned int *)(param_1 + 0x50) = 0;
        *(unsigned char *)(param_1 + 0x5c) = 8;
        return 1;
      }
      *(unsigned int *)(param_1 + 0x50) = 0;
      *(unsigned char *)(param_1 + 0x5c) = 0xb;
      return 1;
    }
    *(unsigned int *)(param_1 + 0x50) = 0;
    *(unsigned char *)(param_1 + 0x5c) = 10;
    return 1;
  }
  return 2;
}

