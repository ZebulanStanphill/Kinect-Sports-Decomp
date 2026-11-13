unsigned __int64 fn_824486C0(double param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x48) + 0x1c);
  if (uVar1 != 0) {
    do {
      if (param_1 < (double)(*(float *)(*(int *)(param_2 + 0x48) + 0x18) *
                             (float)(uVar2 & 0xffffffff) +
                            *(float *)(*(int *)(param_2 + 0x48) + 0x14))) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  return 0xffffffffffffffff;
}

