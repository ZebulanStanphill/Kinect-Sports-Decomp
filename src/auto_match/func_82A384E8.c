extern unsigned int *auStack_50;
extern int fn_82A381F0();


__int64 fn_82A384E8(unsigned int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned int auStack_50 [20];
  
  lVar4 = fn_82A381F0(param_1,param_2,0);
  iVar10 = 0;
  if (lVar4 == 0) {
    lVar5 = -0x3ffffddb;
  }
  else {
    lVar5 = (**(int (***)())(*(int *)*param_1 + 8))(param_2,auStack_50,0);
    if (-1 < lVar5) {
      RtlEnterCriticalSection(param_1 + 5);
      uVar1 = param_1[2];
      uVar6 = (unsigned __int64)uVar1;
      if ((unsigned int)param_1[3] == uVar6) {
        lVar5 = -0x3ffffee1;
        (**(int (***)())(*(int *)*param_1 + 4))(auStack_50[0]);
        iVar10 = 0;
      }
      else {
        iVar2 = param_1[1];
        uVar9 = (param_2 & 0x7ffffff) / 0xc;
        iVar8 = ((int)lVar4 - iVar2) / 0x58;
        lVar4 = uVar9 - (__int64)(int)(uVar9 / uVar6) * (__int64)(int)uVar1;
        trapWord(6,uVar6,0);
        iVar10 = (int)lVar4 * 0x58;
        iVar7 = 0;
        iVar3 = *(int *)(iVar10 + iVar2);
        while (iVar3 != -1) {
          iVar7 = iVar7 + 1;
          trapWord(6,uVar6,0);
          lVar4 = (lVar4 + 1U) -
                  (__int64)(int)((lVar4 + 1U & 0xffffffff) / (unsigned __int64)uVar1) *
                  (__int64)(int)uVar1;
          iVar10 = (int)lVar4 * 0x58;
          iVar3 = *(int *)(iVar2 + iVar10);
        }
        *(unsigned int *)(iVar10 + iVar2) = auStack_50[0];
        *(unsigned int *)(iVar10 + param_1[1] + 4) = 0xffffffff;
        *(int *)(iVar10 + param_1[1] + 8) = iVar7;
        *(int *)(iVar10 + param_1[1] + 0x10) = iVar8;
        iVar8 = iVar8 * 0x58 + param_1[1];
        *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
        iVar10 = iVar10 + param_1[1];
        param_1[3] = param_1[3] + 1;
      }
      RtlLeaveCriticalSection(param_1 + 5);
    }
  }
  *param_3 = iVar10;
  return lVar5;
}

