extern unsigned int *auStack_40;
extern int fn_82F7FC58();
extern int fn_82F68240();
extern int fn_82F7FC58();
extern int fn_82F86648();
extern int fn_82F86888();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


unsigned __int64 fn_82F7FE10(unsigned __int64 *param_1,unsigned char *param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned char auStack_40 [32];

  fn_82F86888(*param_1,&stack_pair_50.first,auStack_40,0x16);
  if ((param_2 == (unsigned char *)0x0) || ((param_3 & 0xffffffff) == 0)) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F7FC58();
    uVar1 = 0x16;
  }
  else {
    if ((int)param_3 == -1) {
      lVar3 = -1;
    }
    else {
      lVar3 = param_3 - (stack_pair_50.first == 0x2d);
    }
    uVar1 = fn_82F86648(param_2 + (stack_pair_50.first == 0x2d),lVar3,(unsigned __int64)stack_pair_50.second + param_4,
                              &stack_pair_50.first);
    if ((int)uVar1 == 0) {
      uVar1 = fn_82F7FC58(param_2,param_3,param_4,&stack_pair_50.first,0);
    }
    else {
      *param_2 = 0;
    }
  }
  return uVar1;
}
