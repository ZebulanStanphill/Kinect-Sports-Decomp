extern int fn_82CED5B8();
extern int fn_82CFBBF0();


void fn_82E14DE8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = fn_82CFBBF0(*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x10)) & 0xfffffffe,param_2);
      if (iVar1 == 0) {
        iVar2 = *(int *)(param_1 + 0x10) + iVar4 * 8;
        fn_82CED5B8(iVar2 + 4);
        fn_82CED5B8(iVar2);
        iVar2 = *(int *)(param_1 + 0x14) + -1;
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 == iVar4) {
          return;
        }
        puVar3 = (unsigned int *)(*(int *)(param_1 + 0x10) + iVar4 * 8);
        iVar4 = (iVar2 * 8 + *(int *)(param_1 + 0x10)) - (int)puVar3;
        lVar5 = 2;
        do {
          *puVar3 = *(unsigned int *)(iVar4 + (int)puVar3);
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  return;
}

