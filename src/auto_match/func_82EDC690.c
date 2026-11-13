extern int fn_82EDB498();
extern int fn_82EDB820();


unsigned __int64
fn_82EDC690(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  if (iVar1 == 0) {
    uVar3 = fn_82EDB498();
    return uVar3;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x160) == 0) {
      return 1;
    }
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
    uVar4 = (unsigned __int64)uVar2;
    if ((int)uVar2 < 1) {
      uVar4 = -uVar4;
    }
    fn_82EDB820(param_1,*(int *)(param_1 + 0x160),param_2,*(unsigned int *)(param_1 + 0x28),
                    *(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(*(int *)(param_1 + 4) + 4),uVar4
                    ,*(unsigned int *)(param_1 + 8));
    uVar3 = fn_82EDB498(param_1,*(unsigned int *)(param_1 + 0x160),param_3,param_4,param_5,param_6
                            ,param_7);
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x164) == 0) {
      return 0xffffffff80004005;
    }
    uVar3 = fn_82EDB498(param_1,param_2,param_3,param_4,*(int *)(param_1 + 0x164),param_6,
                            param_7);
    fn_82EDB820(param_1,param_5,*(unsigned int *)(param_1 + 0x164),*(unsigned int *)(param_1 + 0x20)
                    ,*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x30),
                    *(unsigned int *)(param_1 + 0x34),0);
  }
  else {
    if (iVar1 != 3) {
      return 1;
    }
    if (*(int *)(param_1 + 0x164) == 0) {
      return 0xffffffff80004005;
    }
    if (*(int *)(param_1 + 0x160) == 0) {
      return 0xffffffff80004005;
    }
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
    uVar4 = (unsigned __int64)uVar2;
    if ((int)uVar2 < 1) {
      uVar4 = -uVar4;
    }
    fn_82EDB820(param_1,*(int *)(param_1 + 0x160),param_2,*(unsigned int *)(param_1 + 0x28),
                    *(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(*(int *)(param_1 + 4) + 4),uVar4
                    ,*(unsigned int *)(param_1 + 8));
    uVar3 = fn_82EDB498(param_1,*(unsigned int *)(param_1 + 0x160),param_3,param_4,
                            *(unsigned int *)(param_1 + 0x164),param_6,param_7);
    fn_82EDB820(param_1,param_5,*(unsigned int *)(param_1 + 0x164),*(unsigned int *)(param_1 + 0x20)
                    ,*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x30),
                    *(unsigned int *)(param_1 + 0x34),0);
  }
  if (*param_4 == 0) {
    return 0xffffffff80004005;
  }
  return uVar3;
}

