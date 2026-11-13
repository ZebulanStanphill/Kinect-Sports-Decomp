extern int fn_82468470();
extern int fn_82865170();
extern int fn_82866400();
extern int fn_82872B10();
extern unsigned int uStack_20;


unsigned __int64 fn_82871C50(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uStack_20;
  int aiStack_1c [3];
  
  uStack_20 = param_2;
  fn_82872B10(aiStack_1c,**(unsigned int **)(param_1 + 8),*(unsigned int **)(param_1 + 8),
                    &uStack_20);
  if (aiStack_1c[0] == *(int *)(param_1 + 8)) {
    uVar1 = 0xffffffffa0110000;
  }
  else {
    fn_82468470(aiStack_1c,param_1 + 4);
    fn_82865170();
    iVar2 = fn_82866400();
    uVar1 = 0x20110000;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
  }
  return uVar1;
}

