extern int fn_82DBA1E0();


void fn_82D89930(int param_1)

{
  int aiStack_10;
  
  if ((*(unsigned int *)(param_1 + 8) != 0) && (*(unsigned int *)(param_1 + 0x10) != 0)) {
    aiStack_10 = param_1;
    fn_82DBA1E0(*(unsigned int *)(*(unsigned int *)(param_1 + 8) + 0x78),&aiStack_10,1);
  }
  return;
}

