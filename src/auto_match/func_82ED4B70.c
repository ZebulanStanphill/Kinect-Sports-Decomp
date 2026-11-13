extern int fn_82F68CC0();


void fn_82ED4B70(int param_1,__int64 param_2,__int64 param_3,__int64 param_4,unsigned __int64 param_5,
                  unsigned int param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(unsigned int *)(param_1 + 0x4ef8);
  iVar7 = 0;
  uVar2 = (unsigned __int64)uVar1;
  if (0 < (int)param_6) {
    do {
      fn_82F68CC0(uVar2,(__int64)iVar7 * (__int64)*(int *)(param_1 + 0x564) + param_2,param_5);
      iVar7 = iVar7 + 1;
      uVar2 = uVar2 + param_5;
    } while (iVar7 < (int)param_6);
  }
  iVar6 = (int)param_5;
  uVar2 = (__int64)iVar6 * (__int64)(int)param_6;
  lVar4 = (__int64)((int)param_6 >> 1) + (unsigned __int64)((int)param_6 < 0 && (param_6 & 1) != 0);
  lVar3 = uVar2 + uVar1;
  iVar8 = 0;
  iVar7 = (int)lVar4;
  if (0 < lVar4) {
    uVar5 = 0;
    do {
      fn_82F68CC0((__int64)((int)uVar5 >> 1) + (unsigned __int64)((int)uVar5 < 0 && (uVar5 & 1) != 0) +
                   lVar3,(__int64)*(int *)(param_1 + 0x568) * (__int64)iVar8 + param_3,
                   (__int64)(iVar6 >> 1) + (unsigned __int64)(iVar6 < 0 && (param_5 & 1) != 0));
      iVar8 = iVar8 + 1;
      uVar5 = uVar5 + param_5;
    } while (iVar8 < iVar7);
  }
  iVar8 = 0;
  if (0 < iVar7) {
    uVar5 = 0;
    do {
      fn_82F68CC0((__int64)((int)uVar5 >> 1) + (unsigned __int64)((int)uVar5 < 0 && (uVar5 & 1) != 0) +
                   (__int64)((int)uVar2 >> 2) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 3) != 0) +
                   lVar3,(__int64)*(int *)(param_1 + 0x568) * (__int64)iVar8 + param_4,
                   (__int64)(iVar6 >> 1) + (unsigned __int64)(iVar6 < 0 && (param_5 & 1) != 0));
      iVar8 = iVar8 + 1;
      uVar5 = uVar5 + param_5;
    } while (iVar8 < iVar7);
  }
  return;
}

