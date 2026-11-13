extern int fn_826E7990();


unsigned char fn_826DF4E8(int param_1)

{
  unsigned char uVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x314);
  if (iVar2 == 0) {
    iVar2 = param_1 + 0x28;
  }
  *(unsigned char *)(iVar2 + 0x15) = 0;
  if (*(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) < 1) {
    fn_826E7990(iVar2);
  }
  uVar1 = *(unsigned char *)(*(int *)(iVar2 + 0x3c) + *(int *)(iVar2 + 0x2c));
  *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
  return uVar1;
}

