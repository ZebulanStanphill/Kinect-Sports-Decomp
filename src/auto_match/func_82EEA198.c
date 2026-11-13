extern int fn_82EE80A8();
extern int fn_82EE9CA8();
extern int fn_82EE9EA8();


unsigned __int64 fn_82EEA198(int param_1,__int64 param_2,int *param_3,unsigned __int64 *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x1010);
  lVar3 = fn_82EE80A8(iVar1);
  lVar3 = lVar3 - *(__int64 *)(iVar1 + 0x28);
  RtlEnterCriticalSection(param_1);
  puVar4 = (unsigned int *)fn_82EE9CA8(param_1 + 0x82c);
  if (puVar4 == (unsigned int *)0x0) {
    uVar9 = 0xffffffff8007000e;
  }
  else {
    *puVar4 = param_3;
    (**(int (***)())(*param_3 + 4))(param_3);
    if (param_2 < 0) {
      param_2 = lVar3 - param_2;
    }
    else if (param_2 <= lVar3) {
      param_2 = lVar3;
    }
    uVar9 = 0;
    lVar3 = param_2 - *(__int64 *)(param_1 + 0x820);
    if (param_2 <= *(__int64 *)(param_1 + 0x820)) {
      lVar3 = 0;
    }
    uVar7 = 1;
    if (lVar3 < 0x2800) {
      uVar8 = lVar3 / 0x14 & 0xffffffff;
      if (uVar8 == 0) {
        uVar8 = 1;
      }
      uVar8 = *(unsigned int *)(param_1 + 0x81c) + uVar8;
      if (0x1ff < (uVar8 & 0xffffffff)) {
        uVar8 = uVar8 - 0x200;
      }
      iVar1 = (int)((uVar8 + 7 & 0xffffffff) << 2);
      puVar4[2] = *(unsigned int *)(iVar1 + param_1);
      *(unsigned int **)(iVar1 + param_1) = puVar4;
    }
    else {
      puVar4[2] = 0;
      *(__int64 *)(puVar4 + 4) = param_2;
      puVar4[3] = 0;
      puVar4[6] = 1;
      puVar2 = *(unsigned int **)(param_1 + 0x830);
      puVar5 = puVar4;
      if (puVar2 != (unsigned int *)0x0) {
        puVar5 = puVar2;
        puVar6 = puVar4;
        if (*(__int64 *)(puVar2 + 4) < param_2) {
          puVar5 = puVar4;
          puVar6 = puVar2;
        }
        puVar5 = (unsigned int *)fn_82EE9EA8(param_1,puVar6,puVar5);
      }
      *(unsigned int **)(param_1 + 0x830) = puVar5;
    }
    *(int *)(param_1 + 0x828) = *(int *)(param_1 + 0x828) + 1;
    if (param_4 == (unsigned __int64 *)0x0) {
      puVar4[7] = (int)uVar9;
    }
    else {
      iVar1 = ((int)(*(unsigned __int64 *)(param_1 + 0x1008) % 0x1f5) + 0x20d) * 4;
      puVar4[10] = *(unsigned int *)(iVar1 + param_1);
      *(unsigned int **)(iVar1 + param_1) = puVar4;
      *(unsigned __int64 *)(puVar4 + 8) = *(unsigned __int64 *)(param_1 + 0x1008);
      puVar4[7] = (int)uVar7;
      lVar3 = *(__int64 *)(param_1 + 0x1008) + 1;
      *(__int64 *)(param_1 + 0x1008) = lVar3;
      if (lVar3 == 0) {
        *(unsigned __int64 *)(param_1 + 0x1008) = uVar7;
      }
      *param_4 = *(unsigned __int64 *)(puVar4 + 8);
    }
  }
  RtlLeaveCriticalSection(param_1);
  return uVar9;
}

