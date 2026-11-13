#define true 1
extern int fn_82C2A820();
extern int fn_82C2AC98();
extern int fn_82C2B040();
extern unsigned int iStack_30;


unsigned __int64 fn_82C2B248(int param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iStack_30;
  int *apiStack_2c [11];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apiStack_2c[0] = (int *)0x0;
  iStack_30 = 0;
  *(unsigned int *)(iVar1 + 0x44) = param_2;
  *(unsigned __int64 *)(iVar1 + 0x48) = *(unsigned __int64 *)(iVar1 + 0x28);
  while( true ) {
    lVar4 = *(__int64 *)(iVar1 + 0x48);
    uVar3 = fn_82C2AC98(param_1,lVar4,apiStack_2c,&iStack_30);
    piVar2 = apiStack_2c[0];
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (iStack_30 == 0) break;
    if ((lVar4 == *(__int64 *)(*apiStack_2c[0] + 8)) &&
       (uVar3 = fn_82C2A820(param_1), (int)uVar3 < 0)) {
      return uVar3;
    }
    uVar9 = *(unsigned __int64 *)(iVar1 + 0x48);
    uVar5 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x44);
    uVar7 = (unsigned __int64)*(unsigned int *)(*piVar2 + 4);
    uVar6 = *(unsigned __int64 *)(*piVar2 + 8);
    uVar8 = uVar5;
    if ((uVar7 - uVar9) + uVar6 < uVar5) {
      uVar8 = ((uVar6 & 0xffffffff) - (uVar9 & 0xffffffff)) + uVar7;
    }
    uVar9 = (uVar8 & 0xffffffff) + uVar9;
    *(int *)(iVar1 + 0x44) = (int)(uVar5 - uVar8);
    *(unsigned __int64 *)(iVar1 + 0x48) = uVar9;
    if ((uVar5 - uVar8 == 0) || (*(unsigned __int64 *)(iVar1 + 0x20) < uVar9)) break;
  }
  if (*(int *)(iVar1 + 0x44) != 0) {
    uVar3 = fn_82C2B040(param_1);
    uVar3 = -(unsigned __int64)(uVar3 != 0xffffffff80500000) & uVar3;
  }
  *(unsigned __int64 *)(iVar1 + 0x28) = (unsigned __int64)param_2 + *(__int64 *)(iVar1 + 0x28);
  return uVar3;
}

