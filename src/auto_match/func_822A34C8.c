extern int fn_82526C70();


void fn_822A34C8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x39c + param_1;
  iVar1 = param_3 * 0x5c + iVar2 + 0x1188;
  *(unsigned int *)(iVar2 + 0x1188) = 1;
  *(unsigned int *)(iVar1 + -0x58) = 1;
  iVar1 = iVar1 + -0x54;
  if (param_4 < 1) {
    fn_82526C70(iVar1,0x10,0xffffffff82196582);
  }
  else {
    fn_82526C70(iVar1,0x10,0xffffffff821aa66c);
  }
  *(unsigned int *)(param_1 + 0x1ff8) = 1;
  return;
}

