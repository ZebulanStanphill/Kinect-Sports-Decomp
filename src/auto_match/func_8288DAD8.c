extern int fn_82381BC0();
extern int fn_8265C9E0();
extern int fn_82897BD0();
extern int fn_828BE158();
extern int fn_828C77A8();
extern int fn_82A4AAA8();


void fn_8288DAD8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  int aiStack_40;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x230);
  aiStack_40 = *piVar1;
  if ((int *)aiStack_40 != piVar1) {
    do {
      uVar7 = (unsigned __int64)*(unsigned int *)(aiStack_40 + 0x10);
      if (uVar7 != (param_2 & 0xffffffff)) {
        iVar6 = fn_82A4AAA8(uVar7);
        if (iVar6 != 2) {
          uVar3 = fn_8265C9E0(0xa8);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_828C77A8(uVar3,param_1,uVar7,param_2,param_3);
          }
          uVar2 = *(unsigned int *)(param_1 + 0x10);
          uVar5 = fn_82897BD0(uVar7);
          fn_828BE158(uVar2,uVar4,uVar5,1);
        }
      }
      fn_82381BC0(&aiStack_40);
    } while (aiStack_40 != *(int *)(*(int *)(param_1 + 0x10) + 0x230));
  }
  return;
}

