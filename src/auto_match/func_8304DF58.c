extern unsigned int *auStack_30;
extern int fn_8304DE60();
extern unsigned int uStack_28;


unsigned __int64 fn_8304DF58(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_30 [8];
  unsigned int uStack_28;
  
  iVar1 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x3c) = iVar1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x54);
  if (*(short *)(param_1 + 0x1c) == 1) {
    uVar2 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c);
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x50);
  }
  if (*(unsigned int *)(param_1 + 0x44) < uVar2) {
    *(unsigned int *)(param_1 + 0x54) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x3c) = (iVar1 - *(unsigned int *)(param_1 + 0x44)) + uVar2;
    if (*(short *)(param_1 + 0x1c) == 1) {
      *(unsigned char *)(param_1 + 0x40) = 1;
    }
    else {
      iVar1 = fn_8304DE60(param_1,*(unsigned int *)(param_1 + 0x4c));
      if (iVar1 != 1) {
        return 2;
      }
      if (1 < *(unsigned short *)(param_1 + 0x1c)) {
        *(unsigned short *)(param_1 + 0x1c) = *(unsigned short *)(param_1 + 0x1c) - 1;
      }
      *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) + '\x01';
      if (*(short *)(param_1 + 0x1c) == 1) {
        (**(int (***)())(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),auStack_30);
        uStack_28 = 0;
        (**(int (***)())(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_30);
      }
    }
  }
  return 1;
}

