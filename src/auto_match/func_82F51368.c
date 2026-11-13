extern int fn_823D22D0();
extern int fn_82F4FF20();


unsigned int fn_82F51368(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_823D22D0(**(unsigned int **)(param_1 + 4));
  iVar2 = fn_82F4FF20(param_2);
  return *(unsigned int *)((iVar2 + 0x58) * 4 + iVar1);
}

