extern int fn_82A1C098();


unsigned int  fn_8261C010(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x238) != 0) && (*(unsigned int *)(param_1 + 0x23c) != 0x3e5)) {
    *(unsigned int *)(param_1 + 0x238) = 0;
    uVar1 = fn_82A1C098(param_1 + 0x23c);
    iVar2 = (int)uVar1;
    *(int *)(param_1 + 600) = iVar2;
    if ((iVar2 != 0) && ((iVar2 != 0xb7 && (iVar2 != 0x3e5)))) {
      return uVar1;
    }
  }
  return 0;
}

