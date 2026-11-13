#define true 1


void fn_82AF5458(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  piVar1 = *(int **)(param_2 + 0x20);
  piVar3 = (int *)(param_2 + 0x20);
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    puVar2 = (unsigned int *)*piVar1;
    uVar5 = 0;
    if ((*puVar2 & 0x1fff) != 0) {
      puVar4 = puVar2 + 6;
      do {
        if (*puVar4 == param_2) {
          puVar2[uVar5 + 6] = param_3;
          *piVar3 = piVar1[1];
          piVar1[1] = *(int *)(param_3 + 0x20);
          *(int **)(param_3 + 0x20) = piVar1;
          break;
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar5 < (*puVar2 & 0x1fff));
    }
    if (uVar5 == (*puVar2 & 0x1fff)) {
      piVar3 = piVar1 + 1;
    }
    piVar1 = (int *)*piVar3;
  } while( true );
}

