extern int fn_828F59D0();
extern int fn_828FA8D8();


int fn_828F6708(int param_1)

{
  unsigned int iVar1;
  int uVar2;
  
  iVar1 = *(unsigned int *)(*(int *)(param_1 + 0x274) + 0x38);
  if (iVar1 == 0) {
    fn_828FA8D8(param_1 + 0x18,param_1 + 0x280,0x5e6,"unexpected #endif");
    *(unsigned int *)(param_1 + 0x50) = 1;
    uVar2 = 0x80004005;
  }
  else {
    *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(iVar1 + 4);
    *(unsigned int *)(*(int *)(param_1 + 0x274) + 0x38) = *(unsigned int *)(iVar1 + 0xc);
    *(unsigned int *)(iVar1 + 0xc) = 0;
    fn_828F59D0(iVar1,1);
    uVar2 = 0;
  }
  return uVar2;
}

