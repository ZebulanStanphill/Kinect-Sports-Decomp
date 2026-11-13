extern int fn_82FA5190();
extern unsigned int lbl_831BC978;


void fn_83052288(int param_1,char param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  
  RtlEnterCriticalSection(param_1 + 0x5c);
  piVar5 = (int *)0x0;
  piVar6 = (int *)0x0;
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    do {
      if (((unsigned int)piVar1[0x1d] >> 0x1b & 1) == 0) {
        if (((param_2 != '\0') &&
            (((piVar5 == (int *)0x0 || (*(char *)(piVar1 + 0x1c) < *(char *)(piVar5 + 0x1c))) &&
             (*(char *)(piVar1 + 0x1c) < param_3)))) && (((unsigned int)piVar1[0x1d] >> 0x18 & 1) != 0)) {
          piVar5 = piVar1;
        }
LAB_830523dc:
        piVar2 = (int *)piVar1[3];
        piVar6 = piVar1;
      }
      else {
        cVar4 = (**(int (***)())(*piVar1 + 4))(piVar1);
        if (cVar4 == '\0') goto LAB_830523dc;
        piVar2 = (int *)piVar1[3];
        if (piVar1 == *(int **)(param_1 + 0x58)) {
          *(int **)(param_1 + 0x58) = piVar2;
        }
        else {
          piVar6[3] = (int)piVar2;
        }
        uVar3 = lbl_831BC978;
        if (piVar1 != (int *)0x0) {
          (**(int (***)())*piVar1)(piVar1,0);
          fn_82FA5190(uVar3,piVar1);
        }
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
    if (piVar5 != (int *)0x0) {
      (**(int (***)())(*piVar5 + 0xc))(piVar5);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x5c);
  return;
}

