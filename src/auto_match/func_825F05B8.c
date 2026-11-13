extern int fn_825F1048();


int fn_825F05B8(int param_1)

{
  int uVar1;
  
  if (*(unsigned int *)(param_1 + 0x24) == 0) {
    return 1;
  }
  uVar1 = fn_825F1048(*(unsigned int *)(*(int *)(param_1 + 0x24) + 4));
  return uVar1;
}

