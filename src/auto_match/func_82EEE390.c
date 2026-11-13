#define true 1
extern int fn_82EEDD00();
extern int fn_82F41CE0();


__int64 fn_82EEE390(int param_1,short param_2,unsigned __int64 param_3,short param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int aiStack_50 [20];
  
  uVar1 = *(unsigned int *)(param_1 + 0x70);
  if ((param_2 == -1) || ((param_3 & 0xffffffff) == 0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    uVar5 = 0;
    if (uVar1 != 0) {
      while( true ) {
        aiStack_50[0] = 0;
        lVar2 = fn_82EEDD00(param_1,uVar5,aiStack_50);
        iVar4 = aiStack_50[0];
        if (lVar2 < 0) {
          return lVar2;
        }
        if (aiStack_50[0] == 0) break;
        if ((((param_2 == *(short *)(aiStack_50[0] + 0x14)) &&
             (param_4 == *(short *)(aiStack_50[0] + 0x40))) &&
            ((((iVar3 = fn_82F41CE0(param_3,*(unsigned int *)(aiStack_50[0] + 0x18)), iVar3 != 0
               || ((*(int *)(iVar4 + 0x20) != 0 &&
                   (iVar3 = fn_82F41CE0(param_3,*(int *)(iVar4 + 0x20)), iVar3 != 0)))) ||
              ((*(int *)(iVar4 + 0x28) != 0 &&
               (iVar3 = fn_82F41CE0(param_3,*(int *)(iVar4 + 0x28)), iVar3 != 0)))) ||
             (((*(int *)(iVar4 + 0x30) != 0 &&
               (iVar3 = fn_82F41CE0(param_3,*(int *)(iVar4 + 0x30)), iVar3 != 0)) ||
              ((*(int *)(iVar4 + 0x38) != 0 &&
               (iVar4 = fn_82F41CE0(param_3,*(int *)(iVar4 + 0x38)), iVar4 != 0)))))))) ||
           (uVar5 = uVar5 + 1, (unsigned __int64)uVar1 <= (uVar5 & 0xffffffff))) goto LAB_82eee4c0;
      }
      lVar2 = -0x3ff2c945;
LAB_82eee4c0:
      if ((int)lVar2 < 0) {
        return lVar2;
      }
      if ((uVar5 & 0xffffffff) < (unsigned __int64)uVar1) {
        return lVar2;
      }
    }
    lVar2 = 1;
  }
  return lVar2;
}

