extern int fn_82368C30();


unsigned __int64 fn_82368C80(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(param_1 + 0x41c);
  if (((iVar1 == 1) || (iVar1 == 0xb)) || (iVar1 == 0xc)) {
    if (param_2 != (unsigned int *)0x0) {
      uVar3 = fn_82368C30();
      *param_2 = uVar3;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

