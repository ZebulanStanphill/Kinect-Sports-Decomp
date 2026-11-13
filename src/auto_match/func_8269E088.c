extern int fn_8268B610();
extern int fn_8268BEA8();
extern int fn_8269DCE8();
extern int fn_8269F500();
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_8269E088(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int aiStack_30;
  struct { unsigned int first; unsigned int second; } stack_pair_28;


  if (param_1[8] == 0) {
    iVar1 = (**(int (***)())(param_1[0x1a] + 8))(param_1 + 0x1a);
    if (iVar1 == 2) {
      aiStack_30 = param_1[0x6a];
      stack_pair_28.second = (unsigned int)param_2;
      stack_pair_28.first = 0;
      fn_8269DCE8(&stack_pair_28.first,0xffffffff82006aa4,&aiStack_30);
    }
    else {
      fn_8268BEA8(param_2);
    }
  }
  else {
    ((int (*)())fn_8269E088)();
    fn_8268B610(param_2,0xffffffff821c7f2c,0xffffffffffffffff);
    iVar1 = param_1[0x20];
    if (iVar1 == 0) {
      iVar1 = fn_8269F500(param_1);
    }
    if (iVar1 == 0) {
      iVar1 = (**(int (***)())(*param_1 + 0x58))(param_1);
      iVar1 = *(int *)(iVar1 + 0x78);
    }
    fn_8268B610(param_2,**(unsigned int **)(iVar1 + 8),0xffffffffffffffff);
  }
  return;
}
