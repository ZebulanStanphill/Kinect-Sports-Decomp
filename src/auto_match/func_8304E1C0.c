extern int fn_8304DE60();


void fn_8304E1C0(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x28) + 0x20))();
    if (param_2 == 1) {
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(int (***)())(**(int **)(param_1 + 0x28) + 0x30))();
        uVar2 = *(unsigned int *)(param_1 + 0x3c);
        if (*(unsigned int *)(param_1 + 0x44) < uVar2) {
          *(unsigned int *)(param_1 + 0x34) = 0;
          *(unsigned int *)(param_1 + 0x38) = 0;
          *(unsigned int *)(param_1 + 0x3c) = 0;
          *(unsigned int *)(param_1 + 0x44) = *(int *)(param_1 + 0x50) - uVar2;
        }
        else {
          uVar2 = *(unsigned int *)(param_1 + 0x44) - uVar2;
          *(unsigned int *)(param_1 + 0x44) = uVar2;
          uVar1 = (unsigned __int64)(*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x6c) + 0x24) >> 3) & 0x1f;
          *(unsigned int *)(param_1 + 0x34) = 0;
          trapWord(6,uVar1,0);
          *(unsigned int *)(param_1 + 0x38) = 0;
          *(unsigned int *)(param_1 + 0x3c) = 0;
          *(int *)(param_1 + 0x44) = (int)(uVar2 / uVar1) * (int)uVar1;
        }
      }
    }
    else {
      if (param_2 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x3c) != 0) {
        (**(int (***)())(**(int **)(param_1 + 0x28) + 0x30))();
        *(unsigned int *)(param_1 + 0x34) = 0;
        *(unsigned int *)(param_1 + 0x38) = 0;
        *(unsigned int *)(param_1 + 0x3c) = 0;
      }
      fn_8304DE60(param_1,*(unsigned int *)(param_1 + 0x30));
      *(unsigned short *)(param_1 + 0x1c) = *(unsigned short *)(*(int *)(param_1 + 8) + 0xd4);
    }
    *(unsigned char *)(param_1 + 0x40) = 0;
  }
  return;
}

