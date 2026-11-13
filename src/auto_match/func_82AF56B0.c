extern int fn_82AF4AE0();
extern int fn_82B161E8();


unsigned __int64 fn_82AF56B0(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar3;
  char cVar4;
  unsigned __int64 uVar2;
  unsigned int uVar5;
  int *piVar6;
  
  uVar3 = param_3;
  if ((*(unsigned int *)(param_3 + 8) & 0x3f80) != 0x3700) {
    for (puVar1 = *(unsigned int **)(param_3 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
      uVar3 = puVar1[4];
      if (((uVar3 != 0) && ((*(unsigned int *)(uVar3 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar1 & 0xe000000) != 0)) goto LAB_82af5724;
    }
    uVar3 = 0;
  }
LAB_82af5724:
  if (uVar3 == 0) {
    uVar2 = fn_82AF4AE0(param_1,param_2,param_3,param_4);
  }
  else {
    if ((*(unsigned int *)(uVar3 + 8) >> 0x1a & 1) != 0) {
      uVar3 = fn_82B161E8(param_1,uVar3,*(unsigned int *)(param_1 + 0x294));
    }
    piVar6 = (int *)(uVar3 + 0x2c);
    for (uVar5 = 0; uVar5 < (*(unsigned int *)(uVar3 + 8) >> 0x13 & 7); uVar5 = uVar5 + 1) {
      cVar4 = fn_82AF4AE0(param_1,param_2,*(unsigned int *)(*piVar6 + 0xc),
                            -(unsigned __int64)(param_3 == *(unsigned int *)(*piVar6 + 0xc)) & param_4);
      if (cVar4 == '\0') {
        return 0;
      }
      piVar6 = piVar6 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

