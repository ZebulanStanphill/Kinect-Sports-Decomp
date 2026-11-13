extern int fn_8288B760();


unsigned __int64 fn_824CD030(int param_1)

{
  char cVar2;
  unsigned __int64 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = ((~(unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0xffffffff) >> 0x1f) +
            (unsigned __int64)(5 < (unsigned __int64)*(unsigned int *)(param_1 + 0x28)) & 1;
  }
  else {
    cVar2 = fn_8288B760();
    uVar1 = (unsigned __int64)(cVar2 != '\0');
  }
  return uVar1;
}

