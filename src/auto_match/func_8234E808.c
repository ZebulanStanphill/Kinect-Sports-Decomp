#define true 1
extern int fn_82F63108();


void fn_8234E808(int param_1)

{
  int *piVar1;
  int *piVar2;
  __int64 lVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x60);
  piVar1 = *(int **)(param_1 + 100);
  lVar3 = 0;
  while( true ) {
    if (piVar4 == piVar1) {
      return;
    }
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 == (int *)0x0) break;
    (**(int (***)())(*piVar2 + 4))((double)*(float *)(*piVar4 * 0xc + param_1 + 0x20),piVar2,lVar3);
    piVar4 = piVar4 + 1;
    lVar3 = lVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

