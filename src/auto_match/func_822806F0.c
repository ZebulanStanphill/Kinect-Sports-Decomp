extern unsigned int *auStack_60;
extern int fn_82279768();
extern int fn_82280798();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_822806F0(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned char auStack_60 [48];
  
  lVar2 = fn_8265C9E0(0x130);
  if (lVar2 == 0) {
    stack_pair_70.first = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x7c);
    uVar3 = fn_822C5B18(auStack_60,param_4);
    stack_pair_70.first = fn_82279768(lVar2,param_2,param_1,1,1,uVar3,uVar1,1);
  }
  stack_pair_70.second = param_3;
  fn_82280798(param_1,&stack_pair_70.first,param_5,1);
  fn_82359C18(param_4);
  return;
}

