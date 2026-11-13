#define true 1
extern int fn_82F63108();


void fn_823DA0A0(double param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  
  param_2[6] = (int)(float)(param_1 + (double)(float)param_2[6]);
  while( true ) {
    if ((unsigned int)param_2[3] < (unsigned int)param_2[2]) {
      piVar4 = (int *)(param_2[3] * 0xc + param_2[1]);
    }
    else {
      piVar4 = (int *)0x0;
    }
    if ((piVar4 == (int *)0x0) || ((float)param_2[6] <= (float)piVar4[2])) break;
    (**(int (***)())(*param_2 + 0xc))(param_2,*piVar4,piVar4[1]);
    iVar2 = *piVar4 * 0x18 + param_2[5];
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar1 != 0) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))();
    }
    uVar3 = param_2[2];
    if (param_2[3] + 1U < (unsigned int)param_2[2]) {
      uVar3 = param_2[3] + 1U;
    }
    param_2[3] = uVar3;
  }
  return;
}

