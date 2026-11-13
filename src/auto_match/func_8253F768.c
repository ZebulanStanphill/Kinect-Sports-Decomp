extern unsigned int *auStack_30;
extern int fn_8251E530();
extern int fn_8253D5A0();
extern int fn_825715B8();
extern int fn_825A80A8();
extern int fn_825A8320();
extern int fn_82CE4118();
extern int fn_82D81240();
extern int fn_82D88AE0();
extern int fn_82DEDC40();


void fn_8253F768(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  __int64 lVar5;
  __int64 lVar6;
  unsigned char auStack_30 [1];
  
  fn_825715B8(param_1 + 0x380,*(unsigned int *)(param_1 + 0x7c0),*(unsigned int *)(param_1 + 0x4c)
                   );
  fn_825A8320(param_1);
  iVar1 = *(int *)(param_1 + 0x4e0);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
    for (piVar4 = *(int **)(iVar2 + 0x268); piVar4 < *(int **)(iVar2 + 0x26c); piVar4 = piVar4 + 1)
    {
      if (*piVar4 == iVar1) {
        fn_8251E530(iVar2 + 0x268);
        goto LAB_8253f7e4;
      }
    }
    if (*(int *)(iVar1 + 8) != 0) {
      fn_82D88AE0(*(unsigned int *)(iVar2 + 0x1f8),iVar1);
    }
LAB_8253f7e4:
    fn_82CE4118(iVar1);
    *(unsigned int *)(param_1 + 0x4e0) = 0;
  }
  fn_825A80A8(param_1 + 0x600,param_1);
  iVar1 = *(int *)(param_1 + 0x7c0);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0xe8) != '\a')) && (*(int *)(iVar1 + 8) != 0)) {
    fn_8253D5A0((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) + 0x1f0);
  }
  piVar4 = *(int **)(param_1 + 0x7b0);
  if (piVar4 != (int *)0x0) {
    uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x4c) + 0x1f8);
    fn_82DEDC40(uVar3,piVar4[3]);
    lVar6 = (unsigned __int64)*(unsigned int *)(*piVar4 + 4) - 1;
    if (-1 < lVar6) {
      lVar5 = lVar6 * 0x90;
      do {
        fn_82D81240(auStack_30,uVar3,*(unsigned int *)(piVar4[1] + (int)lVar5));
        lVar6 = lVar6 + -1;
        lVar5 = lVar5 + -0x90;
      } while (-1 < lVar6);
    }
  }
  return;
}

