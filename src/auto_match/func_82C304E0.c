extern int fn_82A6CF00();


unsigned __int64 fn_82C304E0(int param_1,int *param_2)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x28) == 0) goto LAB_82c30560;
  do {
    lVar6 = 0;
    uVar4 = *(int *)(param_1 + 0x24) << (0x20U - *(int *)(param_1 + 0x28) & 0x3f);
    uVar5 = (unsigned __int64)uVar4;
    if ((uVar4 & 0x80000000) != 0) {
      do {
        uVar2 = uVar5 << 1;
        uVar5 = uVar2 & 0xfffffffe;
        lVar6 = lVar6 + 1;
      } while ((uVar2 & 0x80000000) != 0);
    }
    *param_2 = *param_2 + (int)lVar6;
    lVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) - lVar6) + -1;
    *(int *)(param_1 + 0x28) = (int)lVar6;
    if (-1 < lVar6) {
      return uVar7;
    }
LAB_82c30560:
    uVar4 = *(unsigned int *)(param_1 + 0x30);
    *(unsigned int *)(param_1 + 0x28) = 0;
    if (uVar4 != 0) {
      uVar3 = 0x20;
      if (uVar4 < 0x21) {
        uVar3 = uVar4;
      }
      uVar4 = uVar4 - uVar3;
      *(unsigned int *)(param_1 + 0x28) = uVar3;
      *(unsigned int *)(param_1 + 0x30) = uVar4;
      *(unsigned int *)(param_1 + 0x24) =
           *(unsigned int *)(param_1 + 0x2c) >> (uVar4 & 0x3f) | *(int *)(param_1 + 0x24) << (uVar3 & 0x3f);
      *(unsigned int *)(param_1 + 0x2c) = (1 << (uVar4 & 0x3f)) - 1U & *(unsigned int *)(param_1 + 0x2c);
    }
    uVar4 = *(unsigned int *)(param_1 + 0x28);
    while ((uVar4 < 0x19 && (*(int *)(param_1 + 0x20) != 0))) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) << 8;
      uVar1 = **(unsigned char **)(param_1 + 0x1c);
      *(unsigned char **)(param_1 + 0x1c) = *(unsigned char **)(param_1 + 0x1c) + 1;
      uVar3 = (**(int (***)())(param_1 + 0x54))(uVar1);
      uVar4 = *(int *)(param_1 + 0x28) + 8;
      *(unsigned int *)(param_1 + 0x28) = uVar4;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      *(unsigned int *)(param_1 + 0x24) = uVar3 & 0xff | *(unsigned int *)(param_1 + 0x24);
    }
  } while ((*(int *)(param_1 + 0x28) != 0) ||
          (uVar7 = fn_82A6CF00(param_1,2,1), -1 < (int)uVar7));
  return uVar7;
}

