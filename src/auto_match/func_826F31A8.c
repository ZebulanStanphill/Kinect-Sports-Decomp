extern int fn_8267BE38();
extern int fn_82687270();


void fn_826F31A8(int param_1)

{
  unsigned __int64 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar2 = *(int **)(param_1 + 8);
    for (uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 4); uVar1 != 0; uVar1 = uVar1 - 1) {
      if (*piVar2 != 0) {
        fn_82687270();
      }
      piVar2 = piVar2 + 2;
    }
    fn_8267BE38(*(unsigned int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

