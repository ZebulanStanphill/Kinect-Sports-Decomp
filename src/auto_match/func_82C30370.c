extern int fn_82A6CF00();
extern unsigned int lbl_820ED378;


unsigned __int64 fn_82C30370(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  if (param_2 < 0x19) {
    uVar2 = *(unsigned int *)(param_1 + 0x28);
    if (uVar2 < param_2) {
      uVar3 = *(unsigned int *)(param_1 + 0x30);
      if (uVar3 != 0) {
        uVar4 = 0x20 - uVar2;
        if (uVar3 <= 0x20 - uVar2) {
          uVar4 = uVar3;
        }
        uVar3 = uVar3 - uVar4;
        *(unsigned int *)(param_1 + 0x30) = uVar3;
        *(unsigned int *)(param_1 + 0x24) =
             *(int *)(param_1 + 0x24) << (uVar4 & 0x3f) |
             *(unsigned int *)(param_1 + 0x2c) >> (uVar3 & 0x3f);
        *(unsigned int *)(param_1 + 0x2c) = (1 << (uVar3 & 0x3f)) - 1U & *(unsigned int *)(param_1 + 0x2c);
        *(unsigned int *)(param_1 + 0x28) = uVar2 + uVar4;
      }
      uVar2 = *(unsigned int *)(param_1 + 0x28);
      while ((uVar2 < 0x19 && (*(int *)(param_1 + 0x20) != 0))) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 8;
        uVar1 = **(unsigned char **)(param_1 + 0x1c);
        *(unsigned char **)(param_1 + 0x1c) = *(unsigned char **)(param_1 + 0x1c) + 1;
        uVar3 = (**(int (***)())(param_1 + 0x54))(uVar1);
        uVar2 = *(int *)(param_1 + 0x28) + 8;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        *(unsigned int *)(param_1 + 0x28) = uVar2;
        *(unsigned int *)(param_1 + 0x24) = uVar3 & 0xff | *(unsigned int *)(param_1 + 0x24);
      }
      if ((*(unsigned int *)(param_1 + 0x28) < param_2) &&
         (uVar5 = fn_82A6CF00(param_1,2,param_2), (int)uVar5 < 0)) {
        return uVar5;
      }
    }
    uVar2 = *(int *)(param_1 + 0x28) - param_2;
    *(unsigned int *)(param_1 + 0x28) = uVar2;
    *param_3 = *(unsigned int *)(param_1 + 0x24) >> (uVar2 & 0x3f) & *(unsigned int *)(&lbl_820ED378 + param_2 * 4);
  }
  else {
    uVar5 = 0xffffffff80070057;
  }
  return uVar5;
}

