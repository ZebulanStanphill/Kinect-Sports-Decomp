extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;


void fn_82E81818(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if (*(int *)(param_1 + 0xb08) == 0) {
    if ((*(int *)(param_1 + 0x1ff0) == 0) || (*(int *)(*(int *)(param_1 + 0x1ff4) + 0xac) == 0)) {
      uVar2 = *(unsigned int *)(param_1 + 0x7974);
    }
    else {
      uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x1ff4) + 0x40);
    }
    if ((int)uVar2 < 0) {
      *(unsigned int *)(param_1 + 0x1f2c) = 0;
      *(unsigned char *)(param_1 + 0x7b30) = 0xff;
      *(unsigned int *)(param_1 + 0x7b2c) = *(unsigned int *)(param_1 + 0x7b2c) & 0xfffffff4;
    }
    else {
      if (((((uVar2 & 0xf0) != 0) && (lbl_83248E44 == 0)) && (lbl_83248E48 == 0)) &&
         (*(int *)(param_1 + 4) == 8)) {
        *(unsigned int *)(param_1 + 0x7910) = 1;
        *(unsigned int *)(param_1 + 0x7914) = 2;
        *(unsigned char *)(param_1 + 0x7b30) = (unsigned char)(uVar2 >> 4) & 0xf;
        *(unsigned char *)(param_1 + 0x7b31) = (unsigned char)(uVar2 >> 8) & 0xf;
      }
      uVar1 = uVar2 & 0xf;
      if ((uVar2 & 0xf) == 0) {
        *(unsigned int *)(param_1 + 0x1f2c) = 0;
        *(unsigned int *)(param_1 + 0x7b2c) = *(unsigned int *)(param_1 + 0x7b2c) & 0xfffffff4;
      }
      else if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
        *(unsigned int *)(param_1 + 0x1f2c) = 1;
        *(unsigned int *)(param_1 + 0x7910) = 1;
        *(unsigned int *)(param_1 + 0x7914) = 2;
        *(unsigned int *)(param_1 + 0x7b2c) = *(unsigned int *)(param_1 + 0x7b2c) | 0x20;
      }
    }
  }
  else {
    *(unsigned int *)(param_1 + 0x7b2c) = *(unsigned int *)(param_1 + 0x7b2c) | 10;
  }
  if (lbl_83248E44 == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x7b2c) = 0;
  return;
}

