extern int fn_8267C498();
extern int fn_8268F7C0();
extern int fn_82722C50();
extern int fn_82729B90();
extern int fn_8278FDC8();
extern int fn_827912D8();
extern int fn_82796EF8();
extern int fn_827A2EC8();
extern int fn_827A2F40();
extern int fn_827A3A50();


void fn_82729D40(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  int iVar6;
  unsigned __int64 uVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x14), iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    if ((param_2 & 0xffffffff) == 0) {
      param_2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x14);
      param_3 = fn_8278FDC8(iVar1 + 0x14);
    }
    else if ((int)param_3 == -1) {
      param_3 = thunk_FUN_82f64ce0(param_2);
    }
    if ((*(int *)(*(int *)(param_1 + 0xa0) + 0x108) != 0) &&
       (lVar4 = fn_827912D8(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 8)),
       (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x108) < (lVar4 + param_3 & 0xffffffffU))) {
      uVar2 = *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x108);
      param_3 = fn_827912D8(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 8));
      param_3 = (unsigned __int64)uVar2 - param_3;
    }
    iVar3 = *(int *)(iVar1 + 0x30);
    iVar6 = fn_8268F7C0(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x114));
    if (iVar3 != iVar6) {
      uVar5 = fn_8268F7C0(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x114));
      fn_827A2F40(iVar1,uVar5);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
    fn_82796EF8(iVar3,param_2,*(unsigned int *)(iVar1 + 0x30),param_3,1,*(unsigned int *)(iVar1 + 8)
                    ,*(unsigned int *)(iVar3 + 0x18));
    fn_827A2EC8(iVar1,0xffffffff820e975c,0xffffffffffffffff);
    param_3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x30) + param_3;
    fn_827A2F40(iVar1,param_3);
    fn_827A3A50(*(unsigned int *)(*(int *)(param_1 + 0xa0) + 0x114),param_3,0);
    fn_82722C50(param_1);
    fn_82729B90(param_1);
    fn_8267C498(iVar1);
  }
  return;
}

