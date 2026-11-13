extern int fn_8223C3D0();
extern int fn_8265CA20();
extern int fn_82881B88();
extern int fn_82884498();
extern int memcpy();


void fn_82884568(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int aiStack_40 [4];
  
  aiStack_40[0] = 0;
  aiStack_40[1] = 0;
  aiStack_40[2] = 0;
  fn_82884498(param_1 + 4,aiStack_40);
  if (aiStack_40[0] != 0) {
    fn_8265CA20();
  }
  piVar2 = (int *)fn_82881B88(aiStack_40,param_1 + 4);
  piVar4 = (int *)0x0;
  if (((int *)*piVar2 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*piVar2, puVar1 != (unsigned int *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  iVar3 = 0;
  iVar5 = piVar2[2] + -1;
  if (piVar4 != (int *)0x0) {
    iVar3 = *piVar4;
  }
  if (*(unsigned int *)(iVar3 + 8) <= piVar2[2] - 1U) {
    iVar5 = iVar5 - *(unsigned int *)(iVar3 + 8);
  }
  puVar1 = *(unsigned int **)(*(int *)(iVar3 + 4) + iVar5 * 4);
  fn_8223C3D0(puVar1,param_3);
  memcpy(*puVar1,param_2,param_3);
  return;
}

