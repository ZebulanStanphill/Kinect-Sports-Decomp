unsigned __int64
fn_82EEAE00(__int64 *param_1,unsigned int param_2,__int64 param_3,__int64 param_4,__int64 *param_5)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  if (((param_2 == 0) || (param_3 < param_4)) || (param_3 < param_1[3])) {
LAB_82eeae14:
    uVar4 = 0xffffffffc00d36bb;
  }
  else {
    uVar4 = 0;
    if (param_3 < param_1[2]) {
      if ((*(unsigned int *)((int)param_1 + 0xc) & 1) == 0) {
        return 0xffffffffc00d4651;
      }
      uVar5 = param_3 - param_1[3];
      if (uVar5 == 0) {
        uVar5 = param_1[5];
        if ((__int64)uVar5 < 1) goto LAB_82eeae14;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 6) + *(int *)(param_1 + 4);
      }
      uVar1 = *(unsigned int *)(param_1 + 4);
      trapDoubleWordImmediate(6,uVar5,0);
      param_1[2] = param_3;
      iVar2 = *(int *)(param_1 + 1);
      param_1[5] = uVar5;
      *(unsigned int *)(param_1 + 6) = uVar1;
      iVar3 = (int)((__int64)((unsigned __int64)uVar1 * 80000000) / (__int64)uVar5);
      *(int *)(param_1 + 1) = iVar3;
      trapDoubleWordImmediate(5,uVar5 & ~((unsigned __int64)uVar1 * 160000000 - 1),0xffff);
      *(int *)((int)param_1 + 0x24) = (iVar3 - iVar2) + *(int *)((int)param_1 + 0x24);
    }
    else if (*param_1 + param_1[2] < param_3) {
      param_1[2] = param_3 - *param_1;
    }
    lVar6 = param_1[2];
    if (param_1[2] < param_4) {
      lVar6 = param_4;
    }
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 1);
    param_1[3] = lVar6;
    *(unsigned int *)(param_1 + 4) = param_2;
    trapDoubleWordImmediate(6,uVar5,0);
    param_1[2] = ((unsigned __int64)param_2 * 80000000) / uVar5 + lVar6;
    trapDoubleWordImmediate(5,uVar5 & ~((unsigned __int64)param_2 * 160000000 - 1),0xffff);
    if (param_5 != (__int64 *)0x0) {
      *param_5 = lVar6;
    }
  }
  return uVar4;
}

