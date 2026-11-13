extern unsigned short fn_826A6A38();


void fn_826F6870(int param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  
  uVar1 = fn_826A6A38(param_2);
  *(unsigned short *)(param_1 + 4) = uVar1;
  uVar1 = fn_826A6A38(param_2);
  *(unsigned short *)(param_1 + 6) = uVar1;
  return;
}

