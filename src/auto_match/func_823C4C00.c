extern int fn_823CC298();
extern int fn_82508078();


void fn_823C4C00(int param_1,int param_2)

{
  struct Vec { unsigned int *begin,*end; } *piVar1;
  unsigned __int64 uVar2;
  unsigned int target;
  
  if (*(unsigned int *)(param_1 + 0x4c0) == 0) {
    fn_82508078(*(unsigned int *)(param_1 + 0xa4),"interception",0);
  }
  target = *(unsigned int *)(param_1 + 0x4b8);
  uVar2 = 0x10;
  piVar1 = *(struct Vec **)(*(int *)(param_1 + 0x20) + param_2 * 4);
  if ((unsigned int)(piVar1->end - piVar1->begin) <= 0) {
    uVar2 = 0x22;
  }
  fn_823CC298(target,uVar2);
  return;
}

