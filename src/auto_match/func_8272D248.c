extern int fn_82722B00();


void fn_8272D248(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if (param_2 == '\0') {
    if (iVar1 != 0) {
      *(unsigned short *)(iVar1 + 0x68) = *(unsigned short *)(iVar1 + 0x68) & 0xfffd;
    }
  }
  else {
    iVar1 = fn_82722B00();
    *(unsigned short *)(iVar1 + 0x68) = *(unsigned short *)(iVar1 + 0x68) | 2;
  }
  return;
}

