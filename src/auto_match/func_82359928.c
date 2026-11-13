extern int fn_8249ABC0();
extern int fn_8249DA08();
extern int fn_824BF8A8();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_82359928(int param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  struct { unsigned int first; int second; } stack_pair_30;

  
  if (*(int *)(param_1 + 0xb0) != param_2) {
    iVar1 = fn_8249ABC0();
    uVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x110);
    if (*(int *)(param_1 + 0xb8) != -1) {
      fn_8249DA08(uVar2);
      *(unsigned int *)(param_1 + 0xb8) = 0xffffffff;
    }
    if (param_2 == 0) {
      iVar1 = *(int *)((int)uVar2 + 0x20);
      stack_pair_30.first = 0;
      *(int *)((int)uVar2 + 0x20) = iVar1 + 1;
      stack_pair_30.second = iVar1;
      fn_824BF8A8(uVar2 + 0x10,&stack_pair_30.first);
      *(int *)(param_1 + 0xb8) = iVar1;
    }
    *(int *)(param_1 + 0xb0) = param_2;
  }
  return;
}

