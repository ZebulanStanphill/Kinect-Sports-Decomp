extern int fn_82BA90B8();


void fn_82BABB88(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  
  if (*(char *)(param_2 + 0x30) != '\0') {
    fn_82BA90B8(param_2);
    *(unsigned char *)(param_2 + 0x30) = 0;
    uVar1 = *(unsigned int *)(param_2 + 0xc);
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0x24);
    *(unsigned int *)(param_2 + 0x18) = uVar1;
  }
  return;
}

