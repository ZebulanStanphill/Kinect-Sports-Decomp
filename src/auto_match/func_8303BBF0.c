typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FAB9C0();
extern int fn_83004FC0();
extern unsigned int lbl_832642E0;


void fn_8303BBF0(int param_1,unsigned int *param_2)

{
  unsigned int *piVar1;
  bool bVar2;
  int *piVar3;
  
  if (param_2 != (unsigned int *)0x0) {
    for (param_2 = (unsigned int *)*param_2; param_2 != (unsigned int *)0x0;
        param_2 = (unsigned int *)*param_2) {
      piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,param_2[1]);
      if (piVar1 != (int *)0x0) {
        piVar3 = *(int **)(param_1 + 0x1c);
        bVar2 = false;
        if (piVar3 != *(int **)(param_1 + 0x20)) {
          do {
            if (*piVar3 == piVar1[3]) {
              bVar2 = true;
              break;
            }
            piVar3 = piVar3 + 1;
          } while (piVar3 != *(int **)(param_1 + 0x20));
        }
        if (!bVar2) {
          fn_83004FC0(piVar1,*(unsigned int *)(param_1 + 0x2c),0);
        }
        (*(int (**)())(*piVar1 + 8))(piVar1);
      }
    }
  }
  return;
}

