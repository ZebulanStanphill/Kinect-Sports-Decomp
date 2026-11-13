extern unsigned int *auStack_20;
extern int fn_8304DD90();
extern int fn_8304DE60();


unsigned __int64 fn_8304E2F8(int param_1,int param_2,char param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int auStack_20 [4];
  
  if (param_2 == 1) {
    if (param_3 == '\0') {
      auStack_20[0] = *(unsigned int *)(param_1 + 0x44);
    }
    else {
      uVar1 = fn_8304DD90(param_1,auStack_20);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
    }
    iVar2 = fn_8304DE60(param_1,auStack_20[0]);
    if (iVar2 != 1) {
      return 2;
    }
  }
  uVar1 = (**(int (***)())(**(int **)(param_1 + 0x28) + 0x1c))();
  return uVar1;
}

