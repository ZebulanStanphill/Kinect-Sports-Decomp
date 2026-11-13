extern int fn_828176F0();
extern int fn_82817868();
extern int fn_82817870();
extern int fn_8284FD98();
extern unsigned int uStack_28;


void fn_825B0BD0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  int aiStack_30 [2];
  unsigned __int64 uStack_28;
  
  fn_828176F0(*(unsigned int *)(param_1 + 0x124),0xffffffff821c7b34,aiStack_30);
  if ((aiStack_30[0] != 0) && (lVar3 = fn_82817868(), lVar3 != 0)) {
    iVar4 = fn_8284FD98(param_1);
    *(unsigned int *)(param_2 + 0x20) = iVar4 + ((int)lVar3 + 0xfU & 0xfffffff0) + *(int *)(param_2 + 0x20);
    fn_828176F0(*(unsigned int *)(param_1 + 0x124),0xffffffff821c7b44,aiStack_30);
    if (aiStack_30[0] != 0) {
      iVar4 = fn_82817868();
      uVar5 = fn_82817870(aiStack_30[0]);
      if (iVar4 != 0) {
        uVar1 = uVar5 - 1;
        uStack_28 = (unsigned __int64)(*(unsigned int *)(param_2 + 0x34) - uVar5);
        uVar2 = *(unsigned int *)(param_2 + 0x34);
        if ((double)uStack_28 < 0.0) {
          uVar2 = uVar5;
        }
        *(unsigned int *)(param_2 + 0x1c) =
             (uVar1 - (uVar1 + iVar4 & uVar1)) + iVar4 + *(int *)(param_2 + 0x1c);
        *(int *)(param_2 + 0x34) = (int)(__int64)(double)uVar2;
      }
    }
    fn_828176F0(*(unsigned int *)(param_1 + 0x124),0xffffffff821c7b60,aiStack_30);
    if (aiStack_30[0] != 0) {
      iVar4 = fn_82817868();
      uVar5 = fn_82817870(aiStack_30[0]);
      if (iVar4 != 0) {
        uVar1 = uVar5 - 1;
        *(unsigned int *)(param_2 + 0x18) =
             (*(int *)(param_2 + 0x18) - (uVar1 + iVar4 & uVar1)) + uVar1 + iVar4;
        uVar1 = *(unsigned int *)(param_2 + 0x30);
        if ((double)(*(unsigned int *)(param_2 + 0x30) - uVar5) < 0.0) {
          uVar1 = uVar5;
        }
        *(int *)(param_2 + 0x30) = (int)(__int64)(double)uVar1;
      }
    }
  }
  return;
}

