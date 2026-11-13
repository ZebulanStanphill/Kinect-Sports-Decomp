#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define TBLr 0
extern int fn_82A1E968();
extern int iRam7fc86110;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82647950(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  uVar2 = KfAcquireSpinLock(param_1 + 0x4220);
  *(int *)(param_1 + 0x4178) = *(int *)(param_1 + 0x4178) + 1;
  uVar1 = TBLr;
  *(int *)(param_1 + 0x417c) = (int)uVar1;
  if (*(int *)(param_1 + 0x4214) != *(int *)(param_1 + 0x4218)) {
    do {
      iVar3 = (*(unsigned int *)(param_1 + 0x4214) & 0xf) * 8 + param_1;
      iVar4 = *(int *)(iVar3 + 0x4194);
      if (*(unsigned int *)(param_1 + 0x4178) < *(unsigned int *)(iVar3 + 0x4198)) break;
      *(int *)(param_1 + 0x4190) = *(int *)(param_1 + 0x4190) + 1;
      *(unsigned int *)(param_1 + 0x4184) = *(unsigned int *)(param_1 + 0x417c);
      if (iVar4 == 0) {
        *(unsigned int *)(*(int *)(param_1 + 0x2a94) + 4) = 0;
      }
      else {
        enforceInOrderExecutionIO();
        sync(0);
        iRam7fc86110 = iVar4;
      }
      uVar1 = TBLr;
      *(int *)(param_1 + 0x5c2c) = (int)uVar1;
      iVar4 = *(int *)(param_1 + 0x4214) + 1;
      *(int *)(param_1 + 0x4214) = iVar4;
    } while (iVar4 != *(int *)(param_1 + 0x4218));
  }
  if (*(int (***)())(param_1 + 0x4174) != (int (**)())0x0) {
    stack_pair_30.second = *(unsigned int *)(param_1 + 0x4190);
    stack_pair_30.first = *(unsigned int *)(param_1 + 0x4178);
    uStack_28 = 0;
    (**(int (***)())(param_1 + 0x4174))(&stack_pair_30.first);
  }
  fn_82A1E968(&stack_pair_30.first);
  *(int *)(param_1 + 0x5584) = (int)(CONCAT44(stack_pair_30.first,stack_pair_30.second) >> 10);
  KfReleaseSpinLock(param_1 + 0x4220,uVar2);
  return;
}

