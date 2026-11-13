extern int fn_82A1E6A0();
extern int fn_83037858();


unsigned int  fn_8300F458(int param_1)

{
  unsigned int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82A1E6A0(0,0,0,0);
  *(int *)(param_1 + 0xb0) = iVar2;
  if (iVar2 != 0) {
    uVar1 = fn_83037858(param_1 + 0x9c);
    return uVar1;
  }
  return 2;
}

