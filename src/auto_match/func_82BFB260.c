extern int fn_82BF39E8();
extern int fn_82BF6D88();
extern unsigned int iStack_20;
extern unsigned int lbl_831751CC;
extern unsigned int uStack_1c;


void fn_82BFB260(int param_1)

{
  char *pcVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  int iStack_20;
  unsigned int uStack_1c;
  
  pcVar1 = *(char **)(param_1 + 0xc);
  iStack_20 = 0;
  uStack_1c = 0;
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    iVar3 = fn_82BF39E8(pcVar1,&iStack_20,&uStack_1c);
    if (iVar3 != 0) {
      uVar2 = thunk_FUN_82be5550(0x1c);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82BF6D88(uVar2,iStack_20,uStack_1c);
      }
      *(int *)(param_1 + 0x10) = iVar3;
      if (iVar3 != 0) {
        uVar4 = 1;
        goto LAB_82bfb308;
      }
    }
    if (iStack_20 != 0) {
      (*(int (**)())lbl_831751CC)();
    }
  }
  uVar4 = 2;
LAB_82bfb308:
  *(unsigned int *)(param_1 + 8) = uVar4;
  return;
}

