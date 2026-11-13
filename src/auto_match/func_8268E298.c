extern int fn_8268E240();


void fn_8268E298(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  
  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x10)) {
    fn_8268E298(param_1,*(unsigned int *)(param_2 + 0xc),param_3,param_4);
    iVar1 = param_2;
    do {
      fn_8268E240(param_1,iVar1,param_3,param_4);
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != param_2);
  }
  return;
}

