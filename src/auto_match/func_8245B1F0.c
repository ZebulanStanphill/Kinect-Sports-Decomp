extern int fn_8245B458();


unsigned __int64 fn_8245B1F0(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 8) != 0) ||
      ((*(int *)(param_1 + 0x1c) == 1 && (*(int *)(param_1 + 0x10) != 0)))) &&
     (iVar1 = fn_8245B458(), *(int *)(iVar1 + 0x588) != 0)) {
    return 1;
  }
  return 0;
}

