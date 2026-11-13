#define TBLr 0
extern int fn_82645110();
extern int fn_82646E80();
extern int fn_82646F48();
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


void fn_826452A8(int param_1,int param_2,unsigned int param_3,char param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  int in_r13;
  struct { int first; unsigned int second; } stack_pair_40;

  int iStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  iVar2 = *(int *)(param_1 + 0x2a9c);
  if ((unsigned int)(iVar2 - param_2) < (unsigned int)(iVar2 - **(int **)(param_1 + 0x2a90))) {
    if ((param_4 == '\0') && (param_2 == iVar2)) {
      if (*(int *)(param_1 + 0x3460) != 0) {
        return;
      }
      fn_82645110();
    }
    if ((unsigned int)(*(int *)(param_1 + 0x2a9c) - param_2) <
        (unsigned int)(*(int *)(param_1 + 0x2a9c) - **(int **)(param_1 + 0x2a90))) {
      iStack_38 = **(int **)(param_1 + 0x2a90);
      uStack_34 = *(unsigned int *)(*(int *)(in_r13 + 0x100) + 0x58);
      uVar1 = TBLr;
      uStack_2c = (unsigned int)uVar1;
      stack_pair_40.first = param_1;
      stack_pair_40.second = param_3;
      uStack_30 = uStack_34;
      if ((unsigned int)(*(int *)(param_1 + 0x2a9c) - param_2) <
          (unsigned int)(*(int *)(param_1 + 0x2a9c) - **(int **)(param_1 + 0x2a90))) {
        do {
          iVar2 = fn_82646F48(&stack_pair_40.first);
          if (iVar2 == 0) break;
        } while ((unsigned int)(*(int *)(param_1 + 0x2a9c) - param_2) <
                 (unsigned int)(*(int *)(param_1 + 0x2a9c) - **(int **)(param_1 + 0x2a90)));
      }
      fn_82646E80(&stack_pair_40.first);
    }
  }
  return;
}

