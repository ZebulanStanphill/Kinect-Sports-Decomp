extern int fn_82AA1C90();


void fn_82AA2720(int param_1,unsigned __int64 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
    fn_82AA1C90(param_1,"%s",param_2);
    *(unsigned int *)(param_1 + 0x10) = 1;
  }
  return;
}

