extern int fn_82F622E0();
extern int fn_82F63CA0();


unsigned int * fn_82230420(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  if ((unsigned int)param_1[4] < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_82F622E0(0xffffffff821961fc);
  }
  uVar2 = param_1[4] - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (param_3 != 0) {
    puVar3 = param_1;
    puVar4 = param_1;
    if (0xf < (unsigned int)param_1[5]) {
      puVar3 = (unsigned int *)*param_1;
      puVar4 = (unsigned int *)*param_1;
    }
    fn_82F63CA0((int)puVar3 + param_2,(int)puVar4 + param_3 + param_2,uVar2 - param_3);
    iVar1 = param_1[4];
    param_1[4] = iVar1 - param_3;
    puVar4 = param_1;
    if (0xf < (unsigned int)param_1[5]) {
      puVar4 = (unsigned int *)*param_1;
    }
    *(unsigned char *)((int)puVar4 + (iVar1 - param_3)) = 0;
  }
  return param_1;
}

