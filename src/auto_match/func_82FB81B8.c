extern int fn_82FB7AC0();
extern int fn_82FB9630();
extern unsigned int iStack_20;
extern unsigned int uStack_1c;


unsigned __int64 fn_82FB81B8(__int64 param_1)

{
  int iVar1;
  int *piVar2;
  struct { int first; unsigned int second; } stack_pair_20;

  int *piStack_18;
  
  piStack_18 = (int *)0x0;
  stack_pair_20.second = ((((unsigned __int64)(stack_pair_20.second)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)((((unsigned __int64)(stack_pair_20.second) >> 16) & 0xFFFF) & 0x3fff)) & ((unsigned __int64)0xFFFF)) << 16));
  stack_pair_20.second = (unsigned int)(((unsigned __int64)(stack_pair_20.second) >> 16) & 0xFFFF);
  iVar1 = fn_82FB7AC0(&stack_pair_20.first);
  if ((iVar1 == 1) && (piVar2 = (int *)fn_82FB9630(param_1 + 4), piVar2 != (int *)0x0)) {
    *piVar2 = stack_pair_20.first;
    piVar2[1] = stack_pair_20.second;
    piVar2[2] = (int)piStack_18;
    return 1;
  }
  if ((*(int *)(stack_pair_20.first + 0x1c) == 0) || (*(int *)(stack_pair_20.first + 0x1c) == 2)) {
    if (piStack_18 != (int *)0x0) {
      (**(int (***)())(*piStack_18 + 4))();
    }
  }
  return 2;
}

