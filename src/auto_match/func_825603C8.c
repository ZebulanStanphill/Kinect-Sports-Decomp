extern int fn_825605B0();
extern int fn_82560690();
extern int fn_825611A8();
extern unsigned int lbl_83280B88;
extern unsigned int lbl_83280B98;


void fn_825603C8(int param_1,unsigned int *param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  
  iVar3 = fn_82560690(0);
  param_2[2] = param_3;
  iVar4 = param_1 * 8;
  puVar1 = *(unsigned int **)(&lbl_83280B88 + iVar4);
  puVar5 = (unsigned int *)(&lbl_83280B88 + iVar4);
  while (puVar2 = puVar1, puVar2 != (unsigned int *)0x0) {
    puVar5 = puVar2;
    puVar1 = (unsigned int *)*puVar2;
  }
  do {
    puVar1 = (unsigned int *)puVar5[1];
    if (puVar1 == (unsigned int *)0x0) goto LAB_82560438;
    puVar5 = puVar1;
  } while (param_3 < (int)puVar1[2]);
  puVar5 = (unsigned int *)*puVar1;
LAB_82560438:
  puVar1 = (unsigned int *)puVar5[1];
  puVar5[1] = param_2;
  *param_2 = puVar5;
  param_2[1] = puVar1;
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = param_2;
  }
  if (((&lbl_83280B98)[param_1] == 0) || (*(unsigned int **)(iVar4 + -0x7cd7f474) == param_2)) {
    fn_825605B0(param_1,param_2 + 0x21);
  }
  iVar4 = fn_82560690(0);
  if (iVar3 != iVar4) {
    fn_825611A8();
  }
  return;
}

