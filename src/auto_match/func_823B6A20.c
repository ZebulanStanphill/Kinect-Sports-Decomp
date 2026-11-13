extern int fn_8288B760();


unsigned __int64 fn_823B6A20(int param_1)

{
  unsigned char cVar2;
  unsigned __int64 uVar1;
  
  if (((*(int *)(param_1 + 0xc) == 0) ||
      (cVar2 = fn_8288B760((unsigned int)*(unsigned int *)(param_1 + 0xc) - 0x68), cVar2 == '\0')) ||
     (uVar1 = 1, *(int *)(param_1 + 0x10) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

