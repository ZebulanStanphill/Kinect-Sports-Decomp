extern int fn_82A1C098();


unsigned int fn_82A8B620(int param_1)

{
  unsigned int uVar1;
  
  if ((*(int *)(param_1 + 4) == -0x7ffffff6) && (*(unsigned int *)(param_1 + 8) != 0x3e5)) {
    uVar1 = fn_82A1C098(param_1 + 8);
    *(unsigned int *)(param_1 + 4) = uVar1;
  }
  return *(unsigned int *)(param_1 + 4);
}

