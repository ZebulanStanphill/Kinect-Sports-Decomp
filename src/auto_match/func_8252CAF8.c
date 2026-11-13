extern int fn_82547C80();


void fn_8252CAF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  if (*(int (***)())(param_1 + 0x924) != (int (**)())0x0) {
    (*(int (**)())(param_1 + 0x924))();
  }
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c0) != 0) {
    fn_82547C80((unsigned int)*(unsigned int *)(param_1 + 0x8c0) + 0xd0,param_2,param_3);
  }
  return;
}

