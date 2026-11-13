extern int fn_82F622E0();
extern int fn_82F63CA0();


unsigned int * fn_822974F0(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  if ((unsigned int)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821961fc);
  }
  uVar4 = param_1[4] - param_2;
  if (uVar4 < param_3) {
    param_3 = uVar4;
  }
  if (param_3 != 0) {
    puVar3 = param_1;
    puVar2 = param_1;
    if (7 < (unsigned int)param_1[5]) {
      puVar3 = (unsigned int *)*param_1;
      puVar2 = (unsigned int *)*param_1;
    }
    fn_82F63CA0(param_2 * 2 + (int)puVar2,(param_2 + param_3) * 2 + (int)puVar3,
                 uVar4 - param_3 & 0x7fffffff);
    iVar1 = param_1[4];
    param_1[4] = iVar1 - param_3;
    puVar3 = param_1;
    if (7 < (unsigned int)param_1[5]) {
      puVar3 = (unsigned int *)*param_1;
    }
    *(unsigned short *)((iVar1 - param_3) * 2 + (int)puVar3) = 0;
  }
  return param_1;
}

