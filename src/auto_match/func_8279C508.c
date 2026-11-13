extern void fn_82799A98(void);
extern int fn_8279A860();
extern void *fn_8279AD50();
extern int fn_8279C440();


void fn_8279C508(int param_1,int param_2)

{
  void *iVar2;
  int uVar1;
  struct { int first; unsigned int second; } stack_pair_20;

  
  iVar2 = fn_8279AD50(param_1,param_2,*(unsigned char *)(param_2 + 0x2c),0);
  if (iVar2 == 0) {
    stack_pair_20.second = (unsigned int)*(unsigned char *)(param_2 + 0x2c);
    stack_pair_20.first = param_2;
    uVar1 = fn_8279A860(param_1,0,*(unsigned int *)(param_1 + 4),&stack_pair_20.first,fn_82799A98);
    fn_8279C440(param_1,uVar1,param_2);
  }
  return;
}

