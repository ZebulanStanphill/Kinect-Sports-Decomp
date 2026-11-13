extern unsigned int *auStack_40;
extern int fn_82E498A0();
extern int fn_82E49E20();


unsigned __int64
fn_82E4A178(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 auStack_40 [8];
  
  uVar5 = *(unsigned __int64 *)(param_1 + 200);
  uVar1 = *(unsigned int *)(param_1 + 0x9c);
  uVar4 = 0;
  *(int *)(param_5 + 0xc) = (int)uVar5;
  *(int *)(param_5 + 0x10) = (int)(uVar5 >> 0x20);
  *(unsigned int *)(param_5 + 0x60) = uVar1;
  if (*(int *)(param_5 + 0x38) == 1) {
    uVar4 = fn_82E498A0(param_1,auStack_40);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar7 = *(unsigned __int64 *)(param_1 + 200);
    if (auStack_40[0] < (param_3 & 0xffffffff) + uVar7) {
      if (uVar7 < auStack_40[0]) {
        param_3 = (auStack_40[0] & 0xffffffff) - (uVar7 & 0xffffffff);
      }
      else {
        param_3 = 0;
      }
    }
    *(unsigned int *)(param_5 + 0x3c) = param_2;
    uVar7 = (uVar5 & 0xffffffff) + param_3;
    *(int *)(param_5 + 0x40) = (int)param_3;
    uVar2 = *(unsigned int *)(param_1 + 0xc0);
    trapWord(6,(unsigned __int64)uVar2,0);
    *(unsigned int *)(param_5 + 0x54) = (int)uVar5 - (int)((uVar5 & 0xffffffff) / (unsigned __int64)uVar2) * uVar2;
    uVar2 = *(unsigned int *)(param_1 + 0xc0);
    trapWord(6,(unsigned __int64)uVar2,0);
    lVar8 = uVar7 - (__int64)(int)((uVar7 & 0xffffffff) / (unsigned __int64)uVar2) * (__int64)(int)uVar2;
    iVar6 = (int)lVar8;
    *(int *)(param_5 + 0x58) = iVar6;
    if (lVar8 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xc0) - iVar6;
    }
    iVar3 = *(int *)(param_5 + 0x54);
    *(int *)(param_5 + 0x5c) = iVar6;
    if ((iVar3 != 0) || (*(int *)(param_5 + 0x58) != 0)) {
      *(int *)(param_5 + 0x4c) = iVar3 + iVar6 + (int)param_3;
      *(int *)(param_5 + 0xc) = *(int *)(param_5 + 0xc) - iVar3;
      if (*(int *)(param_1 + 0xb8) == 0) {
        return 0xffffffffc00d36bb;
      }
      uVar4 = fn_82E49E20(*(int *)(param_1 + 0xb8),*(unsigned int *)(param_5 + 0x4c),param_5 + 0x48)
      ;
      return uVar4;
    }
  }
  else {
    if (*(int *)(param_5 + 0x38) != 2) {
      return 0;
    }
    *(unsigned int *)(param_5 + 0x3c) = param_2;
    *(int *)(param_5 + 0x40) = (int)param_3;
  }
  *(int *)(param_5 + 0x4c) = (int)param_3;
  *(unsigned int *)(param_5 + 0x48) = param_2;
  return uVar4;
}

