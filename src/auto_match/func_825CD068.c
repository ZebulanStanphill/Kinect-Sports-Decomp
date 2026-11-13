extern int fn_825A23C0();


unsigned int * fn_825CD068(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    uVar2 = fn_825A23C0(0x80,10);
    *(unsigned int *)(param_1 + 8) = uVar2;
  }
  else {
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 4);
  }
  return (unsigned int *)(param_1 + 8);
}

