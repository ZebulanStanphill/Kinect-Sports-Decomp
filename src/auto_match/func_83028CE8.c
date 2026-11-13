#define true 1


unsigned __int64 fn_83028CE8(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x88);
  while( true ) {
    if (iVar1 == *(int *)(param_1 + 0x8c)) {
      return 0;
    }
    if ((*(unsigned char *)(*(int *)(iVar1 + 4) + 0x14) & 1) != 0) break;
    iVar1 = iVar1 + 8;
  }
  return 1;
}

