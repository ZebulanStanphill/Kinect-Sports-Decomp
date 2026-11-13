extern int fn_8304A3A8();
extern int fn_8304A498();
extern int fn_8304AA48();
extern int fn_8304AAD0();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_8304AE78(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x2c))
                    (*(int **)(param_1 + 0x2c),&uStack_1c,&uStack_20,0);
  if (iVar3 != 0x2e) {
    if ((iVar3 != 0x2d) && (iVar3 != 0x11)) {
      return 2;
    }
    uVar2 = fn_8304AAD0(param_1,uStack_1c,uStack_20);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    uVar2 = fn_8304A3A8(param_1);
    if ((int)uVar2 != 1) {
      return uVar2;
    }
    iVar3 = *(int *)(param_1 + 8);
    if ((*(unsigned char *)(iVar3 + 0xdb) & 0x80) == 0) {
      if (((unsigned __int64)uStack_20 - (unsigned __int64)*(unsigned int *)(param_1 + 0x54) & 0xffffffff) != 0) {
        *(unsigned char *)(param_1 + 0x7d) = 0;
        *(unsigned int *)(param_1 + 100) = uStack_1c;
        uVar2 = fn_8304AA48(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x54) +
                                          (unsigned __int64)uStack_1c);
        return uVar2;
      }
    }
    else {
      uVar1 = *(unsigned int *)(*(int *)(iVar3 + 0x6c) + 0x20);
      *(unsigned char *)(iVar3 + 0xdb) = *(unsigned char *)(iVar3 + 0xdb) & 0x7f;
      uVar4 = ((unsigned __int64)uVar1 * (unsigned __int64)*(unsigned int *)(iVar3 + 0xd0)) / 48000;
      uVar1 = (unsigned int)uVar4;
      *(unsigned int *)(iVar3 + 0xd0) = uVar1 & 0x7f;
      uVar2 = fn_8304A498(param_1,uVar4 & 0xffffffff);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      *(unsigned int *)(param_1 + 0x5c) = uVar1;
    }
    (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x30))();
  }
  return 0x3f;
}

