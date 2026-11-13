extern unsigned int fn_827F6AB8();
extern unsigned int fn_827FA1E8();


void fn_827F7268(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  unsigned int iVar3;
  unsigned int uVar4;
  
  if (*(unsigned int *)(param_1 + 0x84) != 0) {
    iVar3 = (unsigned int)*(unsigned short *)(param_1 + 0x32) * 0x30 + *(unsigned int *)(param_1 + 0x84);
    if ((*(unsigned int *)(param_1 + 0x14) != 0) && (iVar3 != 0)) {
      uVar4 = 0;
      iVar1 = fn_827F6AB8();
      if (iVar1 != 0) {
        iVar1 = 0;
        do {
          uVar4 = uVar4 + 1;
          *(float *)(*(int *)(param_1 + 0x14) + iVar1) = *(float *)(iVar1 + iVar3);
          iVar1 = iVar1 + 4;
          uVar2 = fn_827F6AB8(param_1);
        } while (uVar4 < uVar2);
      }
    }
    iVar3 = ((unsigned int)*(unsigned short *)(param_1 + 0x2e) + (unsigned int)*(unsigned short *)(param_1 + 0x32) * 0xc) * 4 +
            *(unsigned int *)(param_1 + 0x84);
    if ((*(unsigned int *)(param_1 + 0x18) != 0) && (iVar3 != 0)) {
      uVar4 = 0;
      iVar1 = fn_827FA1E8(param_1);
      if (iVar1 != 0) {
        iVar1 = 0;
        do {
          uVar4 = uVar4 + 1;
          *(float *)(iVar1 + *(int *)(param_1 + 0x18)) = *(float *)(iVar1 + iVar3);
          iVar1 = iVar1 + 4;
          uVar2 = fn_827FA1E8(param_1);
        } while (uVar4 < uVar2);
      }
    }
  }
  return;
}

