#define true 1


unsigned __int64 fn_830350E0(int param_1)

{
  int iVar1;
  
  iVar1 = *(unsigned int *)(param_1 + 0x10);
  while( true ) {
    if (iVar1 == *(unsigned int *)(param_1 + 0x14)) {
      return 0;
    }
    if ((*(unsigned int *)(iVar1 + 8) != 0) && (*(short *)(*(unsigned int *)(iVar1 + 8) + 0x18) != 0)) break;
    iVar1 = iVar1 + 0x18;
  }
  return 1;
}

