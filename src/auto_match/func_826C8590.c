extern void *fn_8267B890(int,int,int);
extern int fn_8267C498();
extern int fn_8269A5F8();
extern int fn_82758A28();
extern int fn_82758D20();


void fn_826C8590(int param_1,int param_2)

{
  void *iVar1;
  unsigned int uVar2;
  
  if (*(int *)(param_1 + 0x1b8) == 0) {
    iVar1 = fn_8267B890(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x14),0x88,0);
    uVar2 = iVar1 ? fn_82758A28(iVar1) : 0;
    if (*(void **)(param_1 + 0x1b8) != 0) {
      fn_8267C498(*(void **)(param_1 + 0x1b8));
    }
    *(unsigned int *)(param_1 + 0x1b8) = uVar2;
  }
  *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xb00) = *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xb00) | 0x400;
  fn_8269A5F8(param_1);
  fn_82758D20(*(unsigned int *)(param_1 + 0x1b8),param_2);
  return;
}

