extern int fn_82809558();


unsigned __int64 fn_8226AC08(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 4) == '\0') {
    dVar2 = (double)fn_82809558((double)(*(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) +
                                         *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14)));
    uVar1 = 1;
    if ((double)(*(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x28)) <= dVar2) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

