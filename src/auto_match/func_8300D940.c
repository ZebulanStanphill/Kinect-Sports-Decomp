void fn_8300D940(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  *(unsigned char *)(param_1 + 0x4d) = 0;
  *(unsigned char *)(param_1 + 0x4c) = 0;
  do {
    piVar1 = (int *)((uVar2 + 1) * 0xc + param_1);
    if (piVar1[1] - *piVar1 >> 3 != 0) {
      *(char *)(param_1 + 0x4d) = (char)uVar2 + '\x01';
      *(unsigned char *)(param_1 + 0x4c) = (unsigned char)(1 << (uVar2 & 0x3f)) | *(unsigned char *)(param_1 + 0x4c);
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  return;
}

