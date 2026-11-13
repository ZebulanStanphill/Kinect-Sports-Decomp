__int64 fn_825AEE38(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = (unsigned int)param_1[1] >> 2;
  uVar1 = *(unsigned int *)(*param_1 + 8);
  if (uVar1 <= uVar2) {
    uVar2 = uVar2 - uVar1;
  }
  return (unsigned __int64)*(unsigned int *)(*(int *)(*param_1 + 4) + uVar2 * 4) +
         ((unsigned __int64)(unsigned int)param_1[1] & 3) * 4;
}

