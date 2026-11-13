extern unsigned short fn_826A6A38();
extern int fn_826A9280();


void fn_826E07A0(int param_1)

{
  unsigned int uVar1;
  char uVar2;
  
  uVar1 = fn_826A6A38();
  *(unsigned int *)(*(int *)(param_1 + 0x20) + 0x68) = uVar1 & 0xffff;
  if ((uVar1 & 0xffff) != 0) {
    param_1 = param_1 + 0x14;
    fn_826A9280(param_1,"  fileAttr:");
    uVar2 = 0x20;
    if ((uVar1 & 1) != 0) {
      fn_826A9280(param_1,"%cUseNetwork",0x20);
      uVar2 = 0x2c;
    }
    if ((uVar1 & 0x10) != 0) {
      fn_826A9280(param_1,"%cHasMetadata",uVar2);
    }
    fn_826A9280(param_1,"\n");
  }
  return;
}

