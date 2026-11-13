extern int fn_826E7990();
extern int fn_826E7B08();


unsigned char fn_826F6710(int param_1)

{
  unsigned char bVar1;
  int iVar2;
  
  *(unsigned char *)(param_1 + 0x15) = 0;
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
    fn_826E7990();
  }
  iVar2 = *(int *)(param_1 + 0x2c) + 1;
  bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x2c) = iVar2;
  fn_826E7B08(param_1,(*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30)) + iVar2 + -1);
  return bVar1 >> 7;
}

