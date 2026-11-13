extern int fn_82698C48();
extern int fn_826997B0();


unsigned __int64 fn_82699A08(int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int aiStack_30;
  
  iVar1 = *(int *)(param_2 + 0x14);
  uVar2 = param_1[1];
  aiStack_30 = iVar1;
  uVar4 = fn_82698C48(param_1,0,uVar2,&aiStack_30,0xffffffff82698c28);
  if (uVar4 < uVar2) {
    iVar6 = uVar4 * 4;
    iVar3 = *(int *)(*param_1 + iVar6);
    uVar5 = uVar4;
    while ((((iVar3 != 0 && (uVar5 = uVar5 + 1, iVar3 != param_2)) &&
            (iVar1 == *(int *)(iVar3 + 0x14))) && (uVar5 < uVar2))) {
      iVar6 = iVar6 + 4;
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar6 + *param_1);
    }
    if ((uVar4 < uVar2) && (iVar3 == param_2)) {
      fn_826997B0(param_1);
      param_1[3] = 0;
      return 1;
    }
  }
  return 0;
}

