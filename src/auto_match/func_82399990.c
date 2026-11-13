typedef unsigned char bool;
extern int fn_82260458();
extern int fn_82397FE0();
extern int fn_82398048();
extern unsigned int uRam831c996c;


void fn_82399990(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  bool bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  double dVar7;
  
  if (*(int *)(param_1 + 0x2a4) == 0) {
    return;
  }
  bVar2 = *(int *)(param_1 + 0x178) != 0;
  if ((bVar2) ||
     ((iVar4 = fn_82397FE0(param_1,1), iVar4 == 0 &&
      (iVar4 = fn_82398048(param_1,1), iVar4 == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  iVar4 = fn_82397FE0(param_1,0);
  if (iVar4 == 0) {
    iVar4 = fn_82398048(param_1,0);
    uVar6 = 0;
    if (iVar4 == 0) goto LAB_82399a20;
  }
  uVar6 = 1;
LAB_82399a20:
  uVar3 = uRam831c996c;
  if (bVar2) {
    iVar4 = 0;
  }
  else {
    piVar1 = *(int **)(**(int **)(param_1 + 8) + 4);
    iVar4 = (int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20);
  }
  dVar7 = (double)*(float *)(*(int *)((*(int **)**(unsigned int **)(param_1 + 8))[4] * 4 +
                                     **(int **)**(unsigned int **)(param_1 + 8)) + 0x20);
  (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x44))();
  fn_82260458(uVar3,(int)dVar7,iVar4,param_4,uVar6,uVar5);
  *(unsigned int *)(param_1 + 0x2a4) = 0;
  return;
}

