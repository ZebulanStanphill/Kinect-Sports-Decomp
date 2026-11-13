extern int fn_8267BED0();


int fn_8275D158(int *param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  uVar3 = (unsigned int)*(unsigned short *)(param_1 + 2);
  if ((param_1[1] == 0) || (uVar3 < param_2)) {
    uVar3 = (unsigned int)*(unsigned short *)((int)param_1 + 10);
    if (*(unsigned short *)((int)param_1 + 10) < param_3) {
      uVar3 = param_3;
    }
    puVar2 = (unsigned int *)fn_8267BED0(param_1,uVar3 + 8,0);
    puVar2[1] = uVar3;
    *puVar2 = 0;
    if ((unsigned int *)param_1[1] != (unsigned int *)0x0) {
      *(unsigned int *)param_1[1] = puVar2;
      *(unsigned int *)(param_1[1] + 4) = *(int *)(param_1[1] + 4) - (unsigned int)*(unsigned short *)(param_1 + 2);
    }
    param_1[1] = (int)puVar2;
    param_2 = param_3;
    if (*param_1 == 0) {
      *param_1 = (int)puVar2;
    }
  }
  iVar1 = *(int *)(param_1[1] + 4);
  *(short *)(param_1 + 2) = (short)uVar3 - (short)param_2;
  return (iVar1 - uVar3) + param_1[1] + 8;
}

