extern int fn_82F68CC0();


void fn_82CFC5C0(__int64 param_1,__int64 param_2,__int64 param_3,int param_4,
                  unsigned int *param_5,int *param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  uVar1 = param_5[1];
  lVar4 = (unsigned __int64)*(unsigned int *)(param_4 + 4) - 1;
  iVar3 = param_6[1];
  lVar6 = 0;
  lVar5 = 0;
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      if (iVar8 == 0) {
        uVar7 = (unsigned __int64)*(unsigned int *)*param_6;
      }
      else {
        puVar2 = (unsigned int *)(iVar8 * 4 + *param_6);
        uVar7 = ((unsigned __int64)*puVar2 - (unsigned __int64)puVar2[-1]) - lVar4;
      }
      fn_82F68CC0(lVar5 + param_1,lVar6 + param_2,uVar7);
      lVar6 = uVar7 + lVar4 + lVar6;
      fn_82F68CC0(uVar7 + lVar5 + param_1,*param_5,(unsigned __int64)uVar1 - 1);
      iVar3 = param_6[1];
      iVar8 = iVar8 + 1;
      lVar5 = ((unsigned __int64)uVar1 - 1) + uVar7 + lVar5;
    } while (iVar8 < iVar3);
  }
  fn_82F68CC0(lVar5 + param_1,lVar6 + param_2,
               (param_3 - (unsigned __int64)*(unsigned int *)(iVar3 * 4 + *param_6 + -4)) - lVar4);
  return;
}

