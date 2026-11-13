extern int fn_8267C498();
extern int fn_82700248();


void fn_826C7030(int param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_82700248(*(unsigned int *)(param_1 + 0xa0) + 0xa2c,param_3);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 4) = 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (*(void **)(iVar1 + 8) != 0) {
      fn_8267C498(*(void **)(iVar1 + 8));
    }
    *(int *)(iVar1 + 8) = param_1;
    if (param_2 != 0) {
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    }
    if (*(void **)(iVar1 + 0xc) != 0) {
      fn_8267C498(*(void **)(iVar1 + 0xc));
    }
    *(int *)(iVar1 + 0xc) = param_2;
    *(unsigned int *)(iVar1 + 0x10) = 0;
  }
  return;
}

