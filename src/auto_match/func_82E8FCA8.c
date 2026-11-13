typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82E82358();
extern int fn_82E83368();
extern int fn_82E8D780();
extern int fn_82F65350();


void fn_82E8FCA8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  lVar6 = *(__int64 *)(param_1 + 0x1e30) - *(__int64 *)(param_1 + 0x1e38);
  *(__int64 *)(param_1 + 0x1e40) = lVar6;
  if ((lVar6 < 0) && (*(int *)(param_1 + 0x76c8) != 0)) {
    *(unsigned __int64 *)(param_1 + 0x1e40) = 0;
  }
  bVar4 = false;
  lVar6 = *(__int64 *)(param_1 + 0x1e40) + *(__int64 *)(param_1 + 0x1e20);
  *(__int64 *)(param_1 + 0x1e38) = *(__int64 *)(param_1 + 0x1e30);
  *(__int64 *)(param_1 + 0x1e20) = lVar6;
  if (((*(int *)(param_1 + 0x1dac) == 3) && (*(int *)(param_1 + 0x1c14) != 0)) &&
     (*(int *)(param_1 + 0x1db0) == 2)) {
    bVar4 = true;
  }
  if (*(int *)(param_1 + 0x1e10) == 0) {
LAB_82e8fdb0:
    if (((*(int *)(param_1 + 0x1a78) != 0) && (*(int *)(param_1 + 0x1a84) == 0)) &&
       (uVar1 = fn_82F65350(), (uVar1 & 1) != 0)) {
      fn_82E82358(param_1);
      *(unsigned int *)(param_1 + 0x1a84) = 1;
    }
    *(unsigned int *)(param_1 + 0xaf0) = 0;
    *(unsigned int *)(param_1 + 0xaf4) = 0;
    *(unsigned int *)(param_1 + 0xaf8) = 1;
  }
  else {
    if ((!bVar4) || (*(int *)(param_1 + 0x1e14) != 0)) {
      lVar7 = *(__int64 *)(param_1 + 0x1e18);
      if (*(int *)(param_1 + 0x35c) != 0) {
        lVar5 = 10;
        if (0x5db < lVar7) {
          lVar5 = 0xf;
        }
        lVar7 = *(__int64 *)(param_1 + 0x1e28) * lVar5 + lVar7;
      }
      if (((lVar7 <= lVar6) && (*(int *)(param_1 + 0x1acc) == 0)) ||
         ((*(int *)(param_1 + 0x4c08) != 0 || (*(int *)(param_1 + 0x1e14) != 0))))
      goto LAB_82e8fdb0;
    }
    if ((*(int *)(param_1 + 0x84c) == 0) || (*(int *)(param_1 + 0x1acc) == 0)) {
      *(unsigned int *)(param_1 + 0xaf0) = 1;
      *(unsigned int *)(param_1 + 0xaf8) = 1;
      *(unsigned int *)(param_1 + 0xaf4) = 1;
      if ((*(int *)(param_1 + 0x1a74) != 0) && (uVar2 = fn_82F65350(), (uVar2 & 3) == 3)) {
        *(unsigned int *)(param_1 + 0xaf8) = 0;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0xaf0) = 2;
      *(unsigned int *)(param_1 + 0xaf8) = 2;
      *(unsigned int *)(param_1 + 0xaf4) = 2;
    }
  }
  iVar3 = fn_82E83368(param_1);
  if (((iVar3 != 0) && (iVar3 = *(int *)(param_1 + 0x1dd0), iVar3 != 0)) &&
     (iVar3 <= *(int *)(param_1 + 0x84c))) {
    *(int *)(param_1 + 0x1acc) = iVar3;
    *(unsigned int *)(param_1 + 0xaf0) = 2;
    *(unsigned int *)(param_1 + 0xaf8) = 2;
    *(unsigned int *)(param_1 + 0xaf4) = 2;
  }
  fn_82E8D780(param_1);
  return;
}

