#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_82F68CC0();


unsigned __int64 fn_82AA8BD0(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int uVar4;
  
  puVar1 = *(unsigned int **)(param_1 + 0xe8);
  lVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) + 10 & 0x3fffffff) * 4 +
          (unsigned __int64)*(unsigned int *)(param_1 + 0x24);
  uVar4 = (unsigned int)lVar3;
  if ((int)puVar1[1] < (int)uVar4) {
    uVar2 = 0xfffffffffffffff5;
  }
  else {
    puVar1[2] = uVar4;
    if ((int)puVar1[1] < (int)(uVar4 + 0x44)) {
      uVar2 = 0xfffffffffffffff4;
    }
    else {
      fn_82F68CC0((unsigned char *)(param_1 + 0x28),(unsigned __int64)*puVar1 + lVar3,0x44);
      uVar2 = 0;
      puVar1[2] = puVar1[2] + 0x44;
      *(unsigned int *)(param_1 + 0x28) =
           (unsigned int)*(unsigned char *)(param_1 + 0x2b) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x2a) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x29) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x28);
      *(unsigned int *)(param_1 + 0x2c) =
           (unsigned int)*(unsigned char *)(param_1 + 0x2f) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x2e) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x2d) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x2c);
      *(unsigned int *)(param_1 + 0x30) =
           (unsigned int)*(unsigned char *)(param_1 + 0x33) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x32) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x31) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x30);
      *(unsigned int *)(param_1 + 0x34) =
           (unsigned int)*(unsigned char *)(param_1 + 0x37) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x36) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x35) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x34);
      *(unsigned int *)(param_1 + 0x38) =
           (unsigned int)*(unsigned char *)(param_1 + 0x3b) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x3a) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x39) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x38);
      *(unsigned short *)(param_1 + 0x3c) =
           CONCAT11(*(unsigned char *)(param_1 + 0x3d),*(unsigned char *)(param_1 + 0x3c));
      *(unsigned short *)(param_1 + 0x3e) =
           CONCAT11(*(unsigned char *)(param_1 + 0x3f),*(unsigned char *)(param_1 + 0x3e));
      *(unsigned int *)(param_1 + 0x40) =
           (unsigned int)*(unsigned char *)(param_1 + 0x43) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x42) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x41) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x40);
      *(unsigned int *)(param_1 + 0x44) =
           (unsigned int)*(unsigned char *)(param_1 + 0x47) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x46) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x45) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x44);
      *(unsigned int *)(param_1 + 0x48) =
           (unsigned int)*(unsigned char *)(param_1 + 0x4b) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x4a) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x49) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x48);
      *(unsigned int *)(param_1 + 0x4c) =
           (unsigned int)*(unsigned char *)(param_1 + 0x4f) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x4e) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x4d) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x4c);
      *(unsigned int *)(param_1 + 0x50) =
           (unsigned int)*(unsigned char *)(param_1 + 0x53) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x52) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x51) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x50);
      *(unsigned int *)(param_1 + 0x54) =
           (unsigned int)*(unsigned char *)(param_1 + 0x57) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x56) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x55) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x54);
      *(unsigned short *)(param_1 + 0x58) =
           CONCAT11(*(unsigned char *)(param_1 + 0x59),*(unsigned char *)(param_1 + 0x58));
      *(unsigned short *)(param_1 + 0x5a) =
           CONCAT11(*(unsigned char *)(param_1 + 0x5b),*(unsigned char *)(param_1 + 0x5a));
      *(unsigned short *)(param_1 + 0x5c) =
           CONCAT11(*(unsigned char *)(param_1 + 0x5d),*(unsigned char *)(param_1 + 0x5c));
      *(unsigned short *)(param_1 + 0x5e) =
           CONCAT11(*(unsigned char *)(param_1 + 0x5f),*(unsigned char *)(param_1 + 0x5e));
      *(unsigned short *)(param_1 + 0x60) =
           CONCAT11(*(unsigned char *)(param_1 + 0x61),*(unsigned char *)(param_1 + 0x60));
      *(unsigned short *)(param_1 + 0x62) =
           CONCAT11(*(unsigned char *)(param_1 + 99),*(unsigned char *)(param_1 + 0x62));
      *(unsigned int *)(param_1 + 100) =
           (unsigned int)*(unsigned char *)(param_1 + 0x67) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x66) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x65) << 8 | (unsigned int)*(unsigned char *)(param_1 + 100);
      *(unsigned int *)(param_1 + 0x68) =
           (unsigned int)*(unsigned char *)(param_1 + 0x6b) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x6a) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x69) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x68);
    }
  }
  return uVar2;
}

