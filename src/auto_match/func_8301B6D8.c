extern int fn_82FA5190();
extern int fn_83029E70();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_8301B6D8(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  uVar3 = 0x24;
  for (piVar4 = *(int **)(param_1 + 4); (piVar4 != *(int **)(param_1 + 8) && (*piVar4 != param_2));
      piVar4 = piVar4 + 1) {
  }
  if (piVar4 != *(int **)(param_1 + 8)) {
    puVar1 = (unsigned int *)*piVar4;
    if (1 < (unsigned int)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)) {
      *piVar4 = *(int *)(*(int *)(param_1 + 8) + -4);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    fn_83029E70(puVar1);
    uVar2 = lbl_831BC768;
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,0);
      fn_82FA5190(uVar2,puVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

