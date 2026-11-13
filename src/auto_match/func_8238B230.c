extern unsigned int *auStack_20;
extern int fn_822AF200();
extern unsigned int ltcg_pool_0_0f;


void fn_8238B230(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  char cVar5;
  unsigned int uVar6;
  unsigned int auStack_20 [2];
  
  iVar3 = *(int *)(param_2 + 8);
  if (*(int *)(*(int *)(*(int *)(iVar3 + 0xd4) + 0x18) + 0xc) != 0) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
  *(float *)(param_2 + 0xc) = fVar1;
  if (ltcg_pool_0_0f < fVar1) {
    return;
  }
  uVar4 = *(unsigned int *)(iVar3 + 0x204);
  if (uVar4 == 0) {
    uVar6 = 2;
  }
  else if (uVar4 == 1) {
    uVar6 = 0x10;
  }
  else {
    if (2 < uVar4) {
      return;
    }
    uVar6 = 0x11;
  }
  auStack_20[0] = 0;
  fn_822AF200(iVar3 + 0x80,auStack_20);
  piVar2 = *(int **)(*(int *)(iVar3 + 0x7c) + 8);
  if (piVar2 == (int *)0x0) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = (**(int (***)())(*piVar2 + 8))(piVar2,uVar6);
  }
  if (cVar5 != '\0') {
    *(unsigned int *)(iVar3 + 0x58) = uVar6;
  }
  return;
}

