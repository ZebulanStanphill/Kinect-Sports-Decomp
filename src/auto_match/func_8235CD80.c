extern int fn_8241CFA0();


void fn_8235CD80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc04)) {
    iVar2 = param_1 + 0x1ec0;
    do {
      fn_8241CFA0(iVar2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x420;
    } while (iVar1 < *(int *)(param_1 + 0xc04));
  }
  return;
}

