extern int fn_82E80A68();


unsigned __int64 fn_82E80E58(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  if (param_2 <= uVar1) {
    uVar1 = (unsigned int)param_2;
  }
  *(unsigned int *)(param_1 + 8) = uVar1;
  fn_82E80A68();
  return 0;
}

