extern int fn_82240C08();
extern int fn_8265C9E0();


void fn_828A2C20(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = fn_8265C9E0(0xfc);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_82240C08(uVar1,*(unsigned int *)(param_2 + 0x50));
    *(unsigned int *)(param_2 + 0x4c) = uVar2;
    return;
  }
  *(unsigned int *)(param_2 + 0x4c) = 0;
  return;
}

