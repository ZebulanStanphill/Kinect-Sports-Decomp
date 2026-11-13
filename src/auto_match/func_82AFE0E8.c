extern int fn_82AFA478();


unsigned __int64 fn_82AFE0E8(int param_1,int param_2,unsigned __int64 param_3,__int64 param_4,unsigned int param_5)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  
  uVar3 = (unsigned int)param_4;
  if ((param_5 < uVar3) && (*(unsigned int *)(param_1 + 0x298) < uVar3)) {
    if (uVar3 < 0x14) {
      if ((*(unsigned int *)(param_1 + 0x28) & 0x2000000) == 0) {
        if (uVar3 <= *(unsigned int *)(param_1 + 0x298) + 10) {
          for (puVar1 = *(unsigned int **)(param_2 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2])
          {
            if (((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) &&
               ((unsigned __int64)puVar1[4] != (param_3 & 0xffffffff))) goto LAB_82afe118;
          }
          goto LAB_82afe178;
        }
      }
      else {
        fn_82AFA478(param_1,param_3,param_4 + -10);
      }
    }
LAB_82afe118:
    uVar2 = 0;
  }
  else {
LAB_82afe178:
    uVar2 = 1;
  }
  return uVar2;
}

