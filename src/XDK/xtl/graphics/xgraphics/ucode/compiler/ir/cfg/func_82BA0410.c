extern int fn_82B7BD28();


unsigned int * fn_82BA0410(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82B7BD28(param_2,param_1 + 4);
  *puVar1 = (int)param_2;
  return puVar1 + 1;
}

