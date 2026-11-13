extern int fn_82E1F690();


unsigned __int64
fn_82E1CDF8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned char param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar2 = fn_82E1F690(param_3);
    *(unsigned int *)(*(int *)(param_1 + 0x20) + param_2 * 4) = uVar2;
    uVar2 = fn_82E1F690(param_4);
    *(unsigned int *)(*(int *)(param_1 + 0x24) + param_2 * 4) = uVar2;
    uVar1 = 0;
    *(unsigned char *)(*(int *)(param_1 + 0x1c) + param_2) = param_5;
  }
  return uVar1;
}

