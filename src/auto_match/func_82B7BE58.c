extern int fn_82BA0310();


unsigned int fn_82B7BE58(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  
  uVar1 = fn_82BA0310(*(unsigned int *)(param_1 + 0xab0));
  (*(int (**)())(**(int **)(param_1 + 0x5d0) + 0x14))
            (*(int **)(param_1 + 0x5d0),param_2,uVar1,param_3,param_4);
  return *param_3;
}

