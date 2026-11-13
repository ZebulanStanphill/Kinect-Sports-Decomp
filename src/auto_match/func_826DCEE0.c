extern unsigned int *auStack_30;
extern int fn_82687270();
extern int fn_826DC448();
extern int fn_826F3210();
extern unsigned int iStack_24;
extern unsigned int iStack_28;


unsigned __int64 fn_826DCEE0(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  char cVar3;
  unsigned __int64 uVar2;
  unsigned int auStack_30 [2];
  struct { int first; int second; } stack_pair_28;

  
  auStack_30[0] = *param_2;
  stack_pair_28.first = 0;
  stack_pair_28.second = 0;
  cVar3 = fn_826DC448(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x20),&stack_pair_28.first,auStack_30);
  iVar1 = stack_pair_28.second;
  if (cVar3 == '\0') {
    if ((stack_pair_28.first == 0) && (stack_pair_28.second != 0)) {
      fn_82687270();
    }
    uVar2 = 0;
  }
  else {
    fn_826F3210(param_1 + 0x18,stack_pair_28.second,param_3);
    if ((stack_pair_28.first == 0) && (iVar1 != 0)) {
      fn_82687270(iVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

