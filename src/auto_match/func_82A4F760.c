extern int fn_82A68BE8();
extern int fn_82F68CC0();


void fn_82A4F760(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  unsigned short uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  int aiStack_50 [20];
  
  if (param_3[1] == 1) {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
    uVar7 = (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x28) * (__int64)(int)param_5[2];
    uVar5 = (unsigned __int64)*param_3;
    uVar9 = (unsigned __int64)*param_5;
    lVar2 = (*(unsigned int *)(param_1 + 0x30) - uVar3) + (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
    if (uVar3 < (uVar7 & 0xffffffff)) {
      uVar7 = 0;
      if (uVar3 != 0) {
        fn_82F68CC0(uVar9,lVar2);
        uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34);
        uVar9 = uVar7 + uVar9;
      }
      trapWord(6,(unsigned __int64)*(unsigned short *)(param_1 + 0x28),0);
      lVar2 = (unsigned __int64)param_5[2] - uVar7 / *(unsigned short *)(param_1 + 0x28);
      iVar4 = fn_82A68BE8(*(unsigned short *)(param_1 + 0x26),*(unsigned short *)(param_1 + 0x24),lVar2,
                           aiStack_50);
      uVar1 = *(unsigned short *)(param_1 + 0x26);
      lVar2 = (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x28) * (__int64)(int)lVar2;
      if (aiStack_50[0] == 0) {
        (**(int (***)())(param_1 + 0x38))
                  (uVar5,(__int64)(int)(unsigned int)uVar1 * (__int64)iVar4,uVar9,lVar2);
        iVar4 = 0;
      }
      else {
        lVar8 = (__int64)*(int *)(param_1 + 0x30) * (__int64)(iVar4 + -1);
        lVar6 = (__int64)(int)(unsigned int)uVar1 * (__int64)(iVar4 + -1);
        (**(int (***)())(param_1 + 0x38))
                  (uVar5,lVar6,uVar9,lVar8,uVar1,*(int (***)())(param_1 + 0x38),uVar1);
        lVar2 = lVar2 - lVar8;
        (**(int (***)())(param_1 + 0x38))
                  (lVar6 + uVar5,*(unsigned short *)(param_1 + 0x26),*(unsigned int *)(param_1 + 0x2c),
                   *(unsigned int *)(param_1 + 0x30),*(unsigned short *)(param_1 + 0x26));
        fn_82F68CC0(lVar8 + uVar9,*(unsigned int *)(param_1 + 0x2c),lVar2);
        iVar4 = *(int *)(param_1 + 0x30) - (int)lVar2;
      }
    }
    else {
      fn_82F68CC0(uVar9,lVar2,uVar7);
      iVar4 = *(int *)(param_1 + 0x34) - (int)uVar7;
    }
    *(int *)(param_1 + 0x34) = iVar4;
  }
  param_5[1] = param_3[1];
  return;
}

