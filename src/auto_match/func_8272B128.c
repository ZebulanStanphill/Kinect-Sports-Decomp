extern int fn_8267BE38();
extern int fn_82726628();


void fn_8272B128(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xec);
  if (iVar1 != 0) {
    fn_82726628(iVar1);
    fn_8267BE38(iVar1);
  }
  *(unsigned int *)(param_1 + 0xec) = 0;
  return;
}

