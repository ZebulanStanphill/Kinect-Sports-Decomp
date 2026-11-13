extern int fn_82687270();
extern int fn_82687F98();
extern int fn_826F30F0();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


int fn_826D7CA0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  struct { int first; int second; } stack_pair_20;

  
  if (*param_1 == 0) {
    *param_3 = param_2;
    iVar1 = param_1[1];
  }
  else {
    stack_pair_20.first = 0;
    stack_pair_20.second = 0;
    if ((*(char *)(param_2 + 0x28) == '\0') || (*(unsigned int *)(param_2 + 4) <= (unsigned int)param_1[1])) {
      fn_826F30F0(param_2,&stack_pair_20.first);
    }
    else {
      fn_82687F98(&stack_pair_20.first,
                        (unsigned __int64)*(unsigned int *)(param_2 + 8) +
                        ((unsigned __int64)(unsigned int)param_1[1] & 0x1fffffff) * 8);
    }
    iVar1 = stack_pair_20.first;
    *param_3 = stack_pair_20.second;
    if (stack_pair_20.first != 0) {
      fn_82687270();
    }
  }
  return iVar1;
}

