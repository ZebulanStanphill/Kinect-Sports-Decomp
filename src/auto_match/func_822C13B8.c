extern int fn_822C8C08();
extern int fn_8234E808();


void fn_822C13B8(int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (*(int *)(param_1 + 0x7a0) != 0) {
    return;
  }
  fn_822C8C08(*(unsigned int *)(param_1 + 0x114),0xffffffff821aca8c);
  iVar1 = *(int *)(param_1 + 0x770);
  for (pfVar2 = (float *)(iVar1 + 0x18); pfVar2 != (float *)(iVar1 + 0x60); pfVar2 = pfVar2 + 3) {
    pfVar2[2] = (pfVar2[1] - *pfVar2) + *pfVar2;
  }
  fn_8234E808();
  return;
}

