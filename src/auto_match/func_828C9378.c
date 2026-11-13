void fn_828C9378(unsigned __int64 *param_1,unsigned __int64 *param_2,unsigned __int64 *param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 *puVar6;
  unsigned int uVar7;
  
  iVar1 = (int)param_3 - (int)param_1 >> 3;
  if (iVar1 < 0x29) {
    uVar4 = *param_2;
    if (uVar4 < *param_1) {
      *param_2 = *param_1;
      *param_1 = uVar4;
    }
    uVar4 = *param_3;
    if (uVar4 < *param_2) {
      *param_3 = *param_2;
      *param_2 = uVar4;
    }
    uVar4 = *param_2;
    if (*param_1 <= uVar4) {
      return;
    }
    *param_2 = *param_1;
    *param_1 = uVar4;
    return;
  }
  uVar7 = iVar1 + 1;
  uVar4 = (__int64)((int)uVar7 >> 3) + (unsigned __int64)((int)uVar7 < 0 && (uVar7 & 7) != 0);
  iVar1 = (int)((uVar4 & 0x1fffffff) << 3);
  uVar5 = *(unsigned __int64 *)(iVar1 + (int)param_1);
  if (uVar5 < *param_1) {
    *(unsigned __int64 *)(iVar1 + (int)param_1) = *param_1;
    *param_1 = uVar5;
  }
  iVar2 = (int)((uVar4 & 0xfffffff) << 4);
  uVar4 = *(unsigned __int64 *)(iVar2 + (int)param_1);
  if (uVar4 < *(unsigned __int64 *)(iVar1 + (int)param_1)) {
    *(unsigned __int64 *)(iVar2 + (int)param_1) = *(unsigned __int64 *)(iVar1 + (int)param_1);
    *(unsigned __int64 *)(iVar1 + (int)param_1) = uVar4;
  }
  uVar4 = *(unsigned __int64 *)(iVar1 + (int)param_1);
  if (uVar4 < *param_1) {
    *(unsigned __int64 *)(iVar1 + (int)param_1) = *param_1;
    *param_1 = uVar4;
  }
  puVar3 = (unsigned __int64 *)((int)param_2 - iVar1);
  uVar4 = *param_2;
  if (uVar4 < *puVar3) {
    *param_2 = *puVar3;
    *puVar3 = uVar4;
  }
  uVar4 = *(unsigned __int64 *)(iVar1 + (int)param_2);
  if (uVar4 < *param_2) {
    *(unsigned __int64 *)(iVar1 + (int)param_2) = *param_2;
    *param_2 = uVar4;
  }
  uVar4 = *param_2;
  if (uVar4 < *puVar3) {
    *param_2 = *puVar3;
    *puVar3 = uVar4;
  }
  puVar6 = (unsigned __int64 *)((int)param_3 - iVar1);
  puVar3 = (unsigned __int64 *)((int)param_3 - iVar2);
  uVar4 = *puVar6;
  if (uVar4 < *puVar3) {
    *puVar6 = *puVar3;
    *puVar3 = uVar4;
  }
  uVar4 = *param_3;
  if (uVar4 < *puVar6) {
    *param_3 = *puVar6;
    *puVar6 = uVar4;
  }
  uVar4 = *puVar6;
  if (uVar4 < *puVar3) {
    *puVar6 = *puVar3;
    *puVar3 = uVar4;
  }
  uVar4 = *param_2;
  if (uVar4 < *(unsigned __int64 *)(iVar1 + (int)param_1)) {
    *param_2 = *(unsigned __int64 *)(iVar1 + (int)param_1);
    *(unsigned __int64 *)(iVar1 + (int)param_1) = uVar4;
  }
  uVar4 = *puVar6;
  if (uVar4 < *param_2) {
    *puVar6 = *param_2;
    *param_2 = uVar4;
  }
  uVar4 = *param_2;
  if (*(unsigned __int64 *)(iVar1 + (int)param_1) <= uVar4) {
    return;
  }
  *param_2 = *(unsigned __int64 *)(iVar1 + (int)param_1);
  *(unsigned __int64 *)(iVar1 + (int)param_1) = uVar4;
  return;
}

