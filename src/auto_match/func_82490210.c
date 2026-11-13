typedef unsigned char bool;
#define true 1


void fn_82490210(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  bool bVar8;
  
  uVar3 = param_2;
  while( true ) {
    uVar6 = uVar3 + 1 & 0x7fffffff;
    uVar5 = uVar6 * 2;
    if ((int)param_3 <= (int)uVar5) break;
    piVar4 = (int *)((int)(uVar6 << 3) + param_1);
    if (*piVar4 < piVar4[-1]) {
      uVar5 = uVar5 - 1;
    }
    *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + param_1) =
         *(unsigned int *)((int)((uVar5 & 0xffffffff) << 2) + param_1);
    uVar3 = uVar5;
  }
  if ((int)uVar5 == (int)param_3) {
    uVar6 = uVar3 & 0xffffffff;
    uVar3 = param_3 - 1;
    *(unsigned int *)((int)(uVar6 << 2) + param_1) =
         *(unsigned int *)((int)((param_3 & 0xffffffff) << 2) + param_1 + -4);
  }
  iVar2 = (int)uVar3;
  uVar7 = iVar2 - 1;
  bVar8 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
  while ((uVar6 = (__int64)((int)uVar7 >> 1) + (unsigned __int64)bVar8, (int)param_2 < iVar2 &&
         (iVar1 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + param_1), iVar1 < *param_4))) {
    iVar2 = (int)uVar6;
    uVar7 = iVar2 - 1;
    bVar8 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
    *(int *)((int)((uVar3 & 0xffffffff) << 2) + param_1) = iVar1;
    uVar3 = uVar6;
  }
  *(int *)((int)((uVar3 & 0xffffffff) << 2) + param_1) = *param_4;
  return;
}

