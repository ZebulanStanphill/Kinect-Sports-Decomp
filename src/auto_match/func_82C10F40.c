unsigned __int64 fn_82C10F40(int param_1,unsigned int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((param_2 & 0xff) * 4 + param_1);
  *param_3 = iVar1;
  return -(unsigned __int64)(iVar1 == 0) & 0xffffffff80500016;
}

