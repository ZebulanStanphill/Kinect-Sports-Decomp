typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82FAD0A8();


int * fn_82FA9E80(int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x1c) == (int *)0x0) {
LAB_82fa9f1c:
    if (*(int *)(param_1 + 4) == 0) {
      piVar3 = (int *)(*(int (**)())**(unsigned int **)*param_3)((unsigned int *)*param_3,param_4);
    }
    else {
      piVar3 = *(int **)(param_1 + 4);
      if (*(char *)(*(int *)(param_1 + 4) + 0x10) == '\0') {
        piVar3 = (int *)(**(int (***)())(*piVar3 + 0xc))(piVar3,param_2,param_3,param_4);
      }
      else {
        *param_4 = piVar3[3];
      }
    }
  }
  else {
    iVar2 = param_2;
    if (param_2 != *(int *)(param_1 + 0x14)) {
      do {
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == *(int *)(param_1 + 0x14)) {
          bVar1 = true;
          break;
        }
        bVar1 = false;
      } while (iVar2 != 0);
      if (bVar1) goto LAB_82fa9f1c;
    }
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x18))();
    *param_3 = iVar2;
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      *param_4 = *(int *)(param_1 + 0xc);
      piVar3 = (int *)fn_82FAD0A8(*param_3);
    }
  }
  return piVar3;
}

