extern int fn_82BD1AA8();


void fn_82BD1BE8(unsigned int *param_1,__int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  
  iVar1 = param_1[2];
  uVar5 = (unsigned __int64)(unsigned int)param_1[1];
  if ((int)param_1[1] <= iVar1) {
    puVar4 = (unsigned int *)fn_82BD1AA8(*param_1,uVar5 * 0xc + param_2,param_2);
    uVar2 = puVar4[1];
    uVar3 = *puVar4;
    if ((int)(uVar2 - uVar3) <= iVar1 - (int)uVar5) {
      do {
        *param_1 = puVar4;
        uVar6 = ((unsigned __int64)uVar2 - (unsigned __int64)uVar3) + uVar5 + 1;
        uVar5 = uVar6 & 0xffffffff;
        iVar7 = (int)uVar6;
        param_1[1] = iVar7;
        if (iVar7 <= iVar1) {
          puVar4 = (unsigned int *)fn_82BD1AA8(puVar4,uVar5 * 0xc + param_2);
        }
        uVar2 = puVar4[1];
        uVar3 = *puVar4;
      } while ((int)(uVar2 - uVar3) <= (int)(param_1[2] - param_1[1]));
    }
  }
  return;
}

