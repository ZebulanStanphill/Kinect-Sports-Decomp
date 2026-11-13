extern int fn_82D000A0();


void fn_82E12520(__int64 param_1,int *param_2)

{
  int iVar1;
  
  if ((param_2 != (int *)0x0) && (iVar1 = *param_2, iVar1 != 0)) {
    do {
      fn_82D000A0(param_1 + 8,iVar1,param_2[1]);
      param_2 = param_2 + 2;
      iVar1 = *param_2;
    } while (iVar1 != 0);
  }
  return;
}

