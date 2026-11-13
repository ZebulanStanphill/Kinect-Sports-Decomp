extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82555938();
extern int fn_82575818();
extern int fn_825B15C0();
extern int fn_8265CA20();
extern int fn_82A1F238();
extern unsigned int lbl_8329618C;


void fn_82549C20(int param_1)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  
  piVar1 = *(int **)(param_1 + 0x1c4);
  if (*piVar1 != 0) {
    fn_825B15C0(*piVar1,piVar1[1],piVar1[6],piVar1[7]);
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar4 = (unsigned int *)(param_1 + 0x7c);
    lVar3 = 4;
    do {
      iVar2 = puVar4[1];
      if (*(int *)(iVar2 + 0x4c) != 0) {
        fn_82A1F238();
        *(unsigned int *)(iVar2 + 0x4c) = 0;
      }
      if (*(int *)(iVar2 + 0x50) != 0) {
        fn_82A1F238();
        *(unsigned int *)(iVar2 + 0x50) = 0;
      }
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    } while (lVar3 != 0);
  }
  fn_82555938(param_1 + 0x98);
  if (lbl_8329618C == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar2 == 0) goto LAB_82549d44;
  if ((*(int *)(iVar2 + 0x93c) == 0) || (*(int *)(param_1 + 0x138) == 0)) {
    if (*(unsigned int *)(param_1 + 0x130) != 0) {
      if (0x1000 < *(unsigned int *)(param_1 + 0x130)) {
        fn_82522ED8();
      }
      goto LAB_82549d24;
    }
  }
  else {
    fn_82575818(*(int *)(iVar2 + 0x93c),*(unsigned int *)(param_1 + 0x130));
LAB_82549d24:
    *(unsigned int *)(param_1 + 0x138) = 0;
    *(unsigned int *)(param_1 + 0x130) = 0;
  }
  *(unsigned int *)(param_1 + 0x128) = 0xd00dd00d;
  *(unsigned int *)(param_1 + 300) = 0xd00dd00d;
  *(unsigned int *)(param_1 + 0x134) = 0xd00dd00d;
  *(unsigned int *)(param_1 + 0x13c) = 0xd00dd00d;
LAB_82549d44:
  (**(int (***)())**(unsigned int **)(param_1 + 0x1a8))();
  fn_8265CA20(*(unsigned int *)(param_1 + 0x1a8));
  *(unsigned int *)(param_1 + 0x1a8) = 0;
  fn_8251FA58(*(unsigned int *)(param_1 + 0x1c0));
  if (*(int **)(param_1 + 0x1fc) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x1fc) + 8))();
    puVar4 = *(unsigned int **)(param_1 + 0x1fc);
    if (puVar4 != (unsigned int *)0x0) {
      (**(int (***)())*puVar4)(puVar4,1);
    }
    *(unsigned int *)(param_1 + 0x1fc) = 0;
  }
  if (*(int *)(param_1 + 0x1d0) != 0) {
    fn_82A1F238();
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    fn_82A1F238();
  }
  if (*(int *)(param_1 + 0x1c8) != 0) {
    fn_82522ED8();
  }
  return;
}

