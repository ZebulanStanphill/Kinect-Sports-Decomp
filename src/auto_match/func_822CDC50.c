extern int fn_82508078();


unsigned __int64 fn_822CDC50(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x170) != 0)) {
    uVar1 = fn_82508078(*(int *)(param_1 + 0x170),param_2,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

