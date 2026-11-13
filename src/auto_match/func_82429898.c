extern unsigned int *auStack_20;


void fn_82429898(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int auStack_20 [4];
  
  (*(int (**)())(*(int *)(param_1 + 8) + 0x14))(param_1 + 8,param_2,auStack_20);
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = auStack_20[0];
  }
  return;
}

