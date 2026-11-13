extern int fn_82F68B7C();


unsigned __int64 fn_82F801C8(unsigned __int64 param_1,unsigned int *param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if (((*(int *)(param_3 + 0xc) != 0) && (*(unsigned int **)(param_2[2] + 4) != (unsigned int *)0x0)) &&
     (uVar1 = **(unsigned int **)(param_2[2] + 4), uVar1 != 0xfffffffe)) {
    return (unsigned __int64)uVar1;
  }
  uVar2 = fn_82F68B7C(param_3,*param_2);
  return uVar2;
}

