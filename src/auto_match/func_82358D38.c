#define true 1
extern __declspec(noreturn) void fn_82F63108(void);


void fn_82358D38(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *piVar4;
  
  piVar3 = *(int **)(param_1 + 0x20);
  piVar1 = *(int **)(param_1 + 0x24);
  do {
    if (piVar3 >= piVar1) {
      return;
    }
    piVar4 = *(unsigned int **)*piVar3;
    piVar2 = (int *)((unsigned int *)*piVar3)[1];
    for (; piVar4 < piVar2; piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        if (*(unsigned *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (*(int (**)())(**(int **)(param_2 + 0x10) + 4))((int *)*(unsigned *)(param_2+0x10),*piVar4);
      }
    }
    piVar3 = piVar3 + 1;
  } while( true );
}

