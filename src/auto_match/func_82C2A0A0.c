#define true 1
extern int fn_82C29390();
extern int fn_82C29788();
extern int fn_82C29E40();
extern unsigned int iStack_30;


unsigned __int64 fn_82C2A0A0(int param_1,unsigned int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
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
    uVar6 = *(unsigned __int64 *)(iVar1 + 0x48);
    uVar3 = fn_82C29788(param_1,uVar6,apiStack_2c,&iStack_30);
    piVar2 = apiStack_2c[0];
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (iStack_30 == 0) break;
    if ((uVar6 == *(unsigned __int64 *)(*apiStack_2c[0] + 8)) &&
       ((unsigned __int64)*(unsigned int *)(iVar1 + 0x88) <= uVar6 - *(__int64 *)(iVar1 + 0x80))) {
      uVar3 = fn_82C29390(param_1);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar6 = *(unsigned __int64 *)(iVar1 + 0x48);
      *(unsigned __int64 *)(iVar1 + 0x80) = uVar6;
    }
    uVar7 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x44);
    uVar9 = (unsigned __int64)*(unsigned int *)(*piVar2 + 4);
    uVar8 = *(unsigned __int64 *)(*piVar2 + 8);
    uVar4 = (uVar9 - uVar6) + uVar8;
    if (uVar4 < uVar7) {
      piVar2[1] = piVar2[1] + -1;
      uVar7 = ((uVar8 & 0xffffffff) - (uVar6 & 0xffffffff)) + uVar9;
    }
    else if (uVar4 == uVar7) {
      piVar2[1] = piVar2[1] + -1;
    }
    lVar5 = *(unsigned int *)(iVar1 + 0x44) - uVar7;
    uVar6 = (uVar7 & 0xffffffff) + *(__int64 *)(iVar1 + 0x48);
    *(int *)(iVar1 + 0x44) = (int)lVar5;
    *(unsigned __int64 *)(iVar1 + 0x48) = uVar6;
    if ((lVar5 == 0) || (*(unsigned __int64 *)(iVar1 + 0x20) < uVar6)) break;
  }
  if (*(int *)(iVar1 + 0x44) != 0) {
    uVar3 = fn_82C29E40(param_1);
    uVar3 = -(unsigned __int64)(uVar3 != 0xffffffff80500000) & uVar3;
  }
  *(unsigned __int64 *)(iVar1 + 0x28) = (unsigned __int64)param_2 + *(__int64 *)(iVar1 + 0x28);
  return uVar3;
}

