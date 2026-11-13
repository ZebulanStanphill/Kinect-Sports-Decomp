typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FF0F00();


void fn_82FF3FA8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  do {
    if (iVar2 == 0) {
      return;
    }
    piVar3 = *(int **)(param_2 + 0xc);
    iVar4 = *(int *)(param_2 + 4);
    if (piVar3 == (int *)0x0) {
      if (iVar4 != 0) goto LAB_82ff4038;
LAB_82ff4044:
      fn_82FF0F00(iVar2,param_2);
    }
    else {
      if (iVar4 == 0) {
        piVar5 = (int *)*piVar3;
        bVar1 = false;
        if (piVar5 == (int *)piVar3[1]) {
LAB_82ff4024:
          bVar1 = !bVar1;
        }
        else {
          do {
            if (*piVar5 == *(int *)(iVar2 + 0x70)) {
              bVar1 = true;
              goto LAB_82ff4024;
            }
            piVar5 = piVar5 + 1;
          } while (piVar5 != (int *)piVar3[1]);
          bVar1 = true;
        }
      }
      else {
LAB_82ff4038:
        bVar1 = *(int *)(iVar2 + 0x70) == iVar4;
      }
      if (bVar1) goto LAB_82ff4044;
    }
    iVar2 = *(int *)(iVar2 + 0x14);
  } while( true );
}

