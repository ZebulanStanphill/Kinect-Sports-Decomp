extern unsigned int *auStack_20;
extern int fn_826BD928();
extern int fn_826C7400();


void fn_8269A800(int param_1)

{
  unsigned int uVar1;
  unsigned int auStack_20 [4];
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = fn_826BD928((unsigned int)*(unsigned int *)(param_1 + 0x20) + 0x68);
    if ((uVar1 & 0xffffffff) != 0) {
      auStack_20[0] = *(unsigned int *)(param_1 + 0x10);
      fn_826C7400(uVar1,*(unsigned int *)(param_1 + 0x14),auStack_20);
    }
  }
  return;
}

