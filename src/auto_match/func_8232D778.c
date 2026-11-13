#define true 1
extern int fn_822315A0();
extern int fn_8223AAC0();
extern unsigned int ltcg_pool_0_0f;


void fn_8232D778(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  fVar1 = (float)((double)*(float *)(param_2 + 0x48) - param_1);
  *(float *)(param_2 + 0x48) = fVar1;
  if (ltcg_pool_0_0f < fVar1) {
    return;
  }
  iVar4 = *(int *)(param_2 + 0xc);
  piVar6 = *(int **)(iVar4 + 100);
  if (piVar6 != (int *)0x0) {
    if (piVar6[1] == 0) {
      return;
    }
    (**(int (***)())(*piVar6 + 8))();
  }
  piVar6 = *(int **)(iVar4 + 0x54);
  while( true ) {
    if (piVar6 == *(int **)(iVar4 + 0x58)) {
      return;
    }
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 4) == 0) break;
    piVar6 = piVar6 + 2;
  }
  iVar3 = piVar6[1];
  iVar8 = 0;
  iVar7 = 0;
  if ((iVar3 != 0) && (cVar5 = fn_8223AAC0(iVar3), cVar5 != '\0')) {
    iVar8 = iVar3;
    iVar7 = iVar2;
  }
  iVar2 = *(int *)(iVar4 + 0x68);
  *(int *)(iVar4 + 0x68) = iVar8;
  *(int *)(iVar4 + 100) = iVar7;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  (**(int (***)())(**(int **)(iVar4 + 100) + 4))();
  return;
}

