extern unsigned int *auStack_40;
extern int fn_82279768();
extern int fn_82280798();
extern int fn_822C5B18();
extern int fn_8265C9E0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_822805D8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned char auStack_40 [32];
  
  if (*(int *)(param_1 + 0x44) == 1) {
    lVar3 = fn_8265C9E0(0x130);
    if (lVar3 == 0) {
      stack_pair_50.first = 0;
    }
    else {
      uVar1 = *(unsigned int *)(param_1 + 0x4c);
      uVar2 = *(unsigned int *)(param_1 + 0x7c);
      uVar4 = fn_822C5B18(auStack_40,(unsigned __int64)uVar1 + 0x110);
      stack_pair_50.first = fn_82279768(lVar3,(unsigned __int64)uVar1 + 0x1c,param_1,1,1,uVar4,uVar2,1);
    }
    stack_pair_50.second = *(unsigned int *)(param_1 + 0x50);
  }
  else {
    lVar3 = fn_8265C9E0(0x130);
    if (lVar3 == 0) {
      stack_pair_50.first = 0;
    }
    else {
      uVar1 = *(unsigned int *)(param_1 + 0x54);
      uVar2 = *(unsigned int *)(param_1 + 0x7c);
      uVar4 = fn_822C5B18(auStack_40,(unsigned __int64)uVar1 + 0x110);
      stack_pair_50.first = fn_82279768(lVar3,(unsigned __int64)uVar1 + 0x1c,param_1,1,1,uVar4,uVar2,1);
    }
    stack_pair_50.second = *(unsigned int *)(param_1 + 0x58);
  }
  fn_82280798(param_1,&stack_pair_50.first,0,0);
  return;
}

