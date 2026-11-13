extern int fn_82AFA478();


unsigned __int64 fn_82AFE190(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  if ((0 < *(int *)(param_3 + 200)) && (*(int *)(param_4 + 200) <= *(int *)(param_3 + 200))) {
    if (2 < *(unsigned int *)(param_3 + 0x1c)) {
      return 1;
    }
    if ((*(unsigned int *)(param_1 + 0x28) & 0x2000000) == 0) {
      iVar1 = *(int *)(*(int *)(param_3 + 0xa0) * 0x10 + param_3 + 0x1c);
      if ((iVar1 == 0) || ((*(unsigned int *)(iVar1 + 8) & 0x1c000) == 0x4000)) {
        uVar2 = *(unsigned int *)(param_3 + 0xc4);
        uVar3 = 0;
        if (uVar2 != 0) {
          do {
            if ((*(unsigned int *)(*(int *)(((uVar2 - uVar3) + -1) * 4 + param_3 + 0xa4) + 8) & 0x1c000) ==
                0x4000) break;
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar2);
        }
        if (uVar3 != uVar2) {
          return 1;
        }
        return 0;
      }
    }
    else {
      fn_82AFA478(param_1,param_2,10);
    }
  }
  return 0;
}

