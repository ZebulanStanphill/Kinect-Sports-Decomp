typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_3c;
extern int fn_828A6F90();


void fn_828A7138(unsigned int *param_1,char param_2,unsigned int *param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  unsigned int *puVar6;
  int iVar7;
  int *piStack_40;
  unsigned char auStack_3c [60];
  
  piStack_40 = (int *)*param_3;
  if (piStack_40 != (int *)**(unsigned int **)*param_1) {
    do {
      piVar5 = piStack_40;
      piVar2 = (int *)piStack_40[2];
      (**(int (***)())(*piVar2 + 8))(piVar2);
      if (param_2 != '\0') {
        iVar3 = piVar5[2];
        for (iVar7 = *(int *)(iVar3 + 0x10); iVar7 != *(int *)(iVar3 + 0x14); iVar7 = iVar7 + 8) {
          if ((*(int *)(iVar7 + 4) == 0) || (*(int *)(*(int *)(iVar7 + 4) + 4) == 0)) {
            bVar4 = true;
            goto LAB_828a71cc;
          }
        }
        bVar4 = false;
LAB_828a71cc:
        if (bVar4) {
          *(unsigned char *)(iVar3 + 4) = 0;
        }
      }
      cVar1 = *(char *)(piVar5[2] + 4);
      (**(int (***)())(*piVar2 + 0xc))(piVar2);
      if (cVar1 == '\0') {
        puVar6 = (unsigned int *)
                 fn_828A6F90(auStack_3c,*(unsigned int *)*param_1,(unsigned __int64)(unsigned int)piVar5[2] + 100,
                               &piStack_40);
        piStack_40 = (int *)*puVar6;
      }
      else {
        piStack_40 = (int *)*piVar5;
        if (param_4 != '\0') break;
      }
    } while (piStack_40 != (int *)**(unsigned int **)*param_1);
  }
  param_1[2] = piStack_40;
  return;
}

