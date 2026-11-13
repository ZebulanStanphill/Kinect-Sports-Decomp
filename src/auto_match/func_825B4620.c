extern int fn_8251E530();
extern int fn_825715B8();
extern int fn_825A80A8();
extern int fn_82CE4118();
extern int fn_82D88AE0();


void fn_825B4620(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 != 0) {
    for (piVar3 = *(int **)(param_2 + 0x268); piVar3 < *(int **)(param_2 + 0x26c);
        piVar3 = piVar3 + 1) {
      if (*piVar3 == iVar1) {
        fn_8251E530(param_2 + 0x268,piVar3);
        goto LAB_825b4684;
      }
    }
    if (*(int *)(iVar1 + 8) != 0) {
      fn_82D88AE0(*(unsigned int *)(param_2 + 0x1f8));
    }
LAB_825b4684:
    fn_82CE4118(*(unsigned int *)(param_1 + 0x100));
    *(unsigned int *)(param_1 + 0x100) = 0;
  }
  fn_825A80A8((unsigned int *)(param_1 + 0x180),*(unsigned int *)(param_1 + 0xdc));
  puVar2 = *(unsigned int **)(param_1 + 0x180);
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,1);
    *(unsigned int *)(param_1 + 0x180) = 0;
  }
  fn_825715B8(param_1 + 0x2d0,*(unsigned int *)(param_1 + 0xd4),param_2);
  *(unsigned int *)(param_1 + 0xf0) = 0;
  return;
}

