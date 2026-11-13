extern unsigned int lbl_821AAD20;


unsigned __int64 fn_83039CE0(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  
  trapWord(6,param_3,0);
  *(unsigned int *)(param_1 + 0x48) = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x20) = 0x10000;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  bVar2 = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned char *)(param_1 + 0x4f) = 1;
  *(int *)(param_1 + 0x30) = (int)(48000 / (param_3 & 0xffffffff));
  *(float *)(param_1 + 0x44) = (float)*param_2 / (float)(param_3 & 0xffffffff);
  for (uVar3 = param_2[1] >> 0xe; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    bVar2 = bVar2 + 1;
  }
  uVar3 = (unsigned int)bVar2;
  *(unsigned char *)(param_1 + 0x4d) = bVar2;
  *(unsigned char *)(param_1 + 0x4e) = (unsigned char)(param_2[1] >> 3) & 0x1f;
  uVar1 = param_2[1] >> 8 & 0x3f;
  if (uVar1 == 8) {
    if (uVar3 - 1 < 6) {
      if (uVar3 == 2) {
        *(unsigned int *)(param_1 + 0x40) = 0;
        *(unsigned char *)(param_1 + 0x4c) = 5;
        return 1;
      }
      if ((uVar3 != 3) && (uVar3 != 4)) {
        if ((uVar3 != 5) && (uVar3 == 1)) {
          *(unsigned int *)(param_1 + 0x40) = 0;
          *(unsigned char *)(param_1 + 0x4c) = 4;
          return 1;
        }
        *(unsigned int *)(param_1 + 0x40) = 0;
        *(unsigned char *)(param_1 + 0x4c) = 7;
        return 1;
      }
      *(unsigned int *)(param_1 + 0x40) = 0;
      *(unsigned char *)(param_1 + 0x4c) = 6;
      return 1;
    }
  }
  else if (uVar1 == 0x10) {
    if (uVar3 - 1 < 6) {
      if (uVar3 == 2) {
        *(unsigned char *)(param_1 + 0x4c) = 1;
        *(unsigned int *)(param_1 + 0x40) = 0;
        return 1;
      }
      if ((uVar3 != 3) && (uVar3 != 4)) {
        if ((uVar3 != 5) && (uVar3 == 1)) {
          *(unsigned char *)(param_1 + 0x4c) = 0;
          *(unsigned int *)(param_1 + 0x40) = 0;
          return 1;
        }
        *(unsigned int *)(param_1 + 0x40) = 0;
        *(unsigned char *)(param_1 + 0x4c) = 3;
        return 1;
      }
      *(unsigned int *)(param_1 + 0x40) = 0;
      *(unsigned char *)(param_1 + 0x4c) = 2;
      return 1;
    }
  }
  else if ((uVar1 == 0x20) && (uVar3 - 1 < 6)) {
    if (uVar3 == 2) {
      *(unsigned int *)(param_1 + 0x40) = 0;
      *(unsigned char *)(param_1 + 0x4c) = 9;
      return 1;
    }
    if ((uVar3 != 3) && (uVar3 != 4)) {
      if ((uVar3 != 5) && (uVar3 == 1)) {
        *(unsigned int *)(param_1 + 0x40) = 0;
        *(unsigned char *)(param_1 + 0x4c) = 8;
        return 1;
      }
      *(unsigned int *)(param_1 + 0x40) = 0;
      *(unsigned char *)(param_1 + 0x4c) = 0xb;
      return 1;
    }
    *(unsigned int *)(param_1 + 0x40) = 0;
    *(unsigned char *)(param_1 + 0x4c) = 10;
    return 1;
  }
  return 2;
}

