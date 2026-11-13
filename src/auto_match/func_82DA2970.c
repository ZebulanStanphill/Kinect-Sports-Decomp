extern int fn_82D8D988();


void fn_82DA2970(int param_1,int *param_2)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if (*param_2 != 0) {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x164) - 1;
    if (-1 < (__int64)uVar3) {
      lVar1 = (uVar3 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x160);
      do {
        if ((int *)*(unsigned int *)lVar1 == param_2) {
          fn_82D8D988(param_1,param_2,1);
          iVar2 = *(int *)(param_1 + 0x164) + -1;
          *(int *)(param_1 + 0x164) = iVar2;
          if (iVar2 != (int)uVar3) {
            *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + *(int *)(param_1 + 0x160)) =
                 *(unsigned int *)(iVar2 * 4 + *(int *)(param_1 + 0x160));
          }
          *(unsigned char *)(param_1 + 0x16c) = 1;
          return;
        }
        uVar3 = uVar3 - 1;
        lVar1 = lVar1 + -4;
      } while (-1 < (__int64)uVar3);
    }
    fn_82D8D988(param_1,param_2,0);
  }
  return;
}

