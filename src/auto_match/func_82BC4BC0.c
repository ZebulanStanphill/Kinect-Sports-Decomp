extern int fn_82B7BD28();
extern int fn_82BBFE28();


unsigned int * fn_82BC4BC0(unsigned int *param_1,int param_2)

{
  int iVar1;
  int lVar2;
  unsigned int uVar3;
  
  param_1[8] = (int)param_2;
  lVar2 = fn_82BBFE28(param_2 + 0x80);
  param_1[7] = (int)lVar2;
  lVar2 = (lVar2 + 1U & 0x3fffffff) << 2;
  iVar1 = *(int *)(param_1[8] + 0xc);
  param_1[9] = iVar1;
  uVar3 = fn_82B7BD28(*(unsigned int *)(iVar1 + 0x5b0),lVar2);
  param_1[2] = uVar3;
  uVar3 = fn_82B7BD28(*(unsigned int *)(param_1[9] + 0x5b0),lVar2);
  param_1[1] = uVar3;
  uVar3 = fn_82B7BD28(*(unsigned int *)(param_1[9] + 0x5b0),lVar2);
  param_1[4] = uVar3;
  uVar3 = fn_82B7BD28(*(unsigned int *)(param_1[9] + 0x5b0),lVar2);
  param_1[3] = uVar3;
  uVar3 = fn_82B7BD28(*(unsigned int *)(param_1[9] + 0x5b0),lVar2);
  *param_1 = uVar3;
  uVar3 = fn_82B7BD28(*(unsigned int *)(param_1[9] + 0x5b0),
                            ((unsigned __int64)(unsigned int)param_1[7] + 1 & 0x3fffffff) << 2);
  param_1[6] = uVar3;
  uVar3 = fn_82B7BD28(*(unsigned int *)(param_1[9] + 0x5b0),
                            ((unsigned __int64)(unsigned int)param_1[7] + 1 & 0x3fffffff) << 2);
  param_1[5] = uVar3;
  return param_1;
}

