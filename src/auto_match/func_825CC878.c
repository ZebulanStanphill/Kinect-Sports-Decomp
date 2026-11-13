extern int fn_8262FE50();
extern int fn_82637B30();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_8263A1B8();
extern int fn_8263A508();


void fn_825CC878(int param_1,__int64 param_2,__int64 param_3,int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  param_3 = param_3 + -4;
  lVar4 = param_2 + 0x3148;
  lVar5 = 3;
  do {
    iVar3 = *(int *)lVar4;
    if (iVar3 != 0) {
      fn_8262FE50(iVar3);
    }
    lVar5 = lVar5 + -1;
    param_3 = param_3 + 4;
    *(int *)param_3 = iVar3;
    lVar4 = lVar4 + 4;
  } while (lVar5 != 0);
  fn_8263A1B8(param_2,0,*(unsigned int *)(param_1 + 0x68));
  iVar1 = (int)param_2;
  iVar3 = *(int *)(iVar1 + 0x3158);
  if (iVar3 != 0) {
    fn_8262FE50(iVar3);
  }
  *param_4 = iVar3;
  fn_8263A508(param_2,0);
  *(unsigned int *)(iVar1 + 0x2f08) = 0xf;
  *(unsigned int *)(iVar1 + 0x28dc) =
       (-(unsigned int)(*(int *)(iVar1 + 0x314c) != 0) & 0xf) << 4 | *(unsigned int *)(iVar1 + 0x28dc) & 0xffffff0f;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
  *(unsigned int *)(iVar1 + 0x2f0c) = 0xf;
  *(unsigned int *)(iVar1 + 0x28dc) =
       (-(unsigned int)(*(int *)(iVar1 + 0x3150) != 0) & 0xf) << 8 | *(unsigned int *)(iVar1 + 0x28dc) & 0xfffff0ff;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x2000000000;
  fn_82637B30(param_2,0);
  lVar5 = 0;
  lVar4 = param_2 + 0x468;
  *(unsigned int *)(iVar1 + 0x293c) = *(unsigned int *)(iVar1 + 0x293c) & 0xfffffff7;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x40200;
  *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffb;
  *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
  do {
    uVar2 = fn_82639528(param_2,lVar5,0);
    fn_82639380(uVar2,lVar5);
    uVar6 = lVar5 + 0x20;
    lVar5 = lVar5 + 1;
    uVar6 = 0x8000000000000000 >> (uVar6 & 0x7f);
    iVar3 = (int)lVar4;
    *(unsigned int *)(iVar3 + 0x24) = *(unsigned int *)(iVar3 + 0x24) & 0xfe7fffff;
    *(unsigned __int64 *)(iVar1 + 0x18) = uVar6 | *(unsigned __int64 *)(iVar1 + 0x18);
    *(unsigned int *)(iVar3 + 0x18) = *(unsigned int *)(iVar3 + 0x18) & 0xffffe3ff | 0x800;
    *(unsigned __int64 *)(iVar1 + 0x18) = uVar6 | *(unsigned __int64 *)(iVar1 + 0x18);
    lVar4 = lVar4 + 0x18;
    *(unsigned int *)lVar4 = *(unsigned int *)(iVar3 + 0x18) & 0xffff1fff | 0x4000;
    *(unsigned __int64 *)(iVar1 + 0x18) = uVar6 | *(unsigned __int64 *)(iVar1 + 0x18);
  } while ((int)lVar5 < 3);
  return;
}

