typedef unsigned char bool;
extern int fn_8239D490();


void fn_823AA990(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  piVar2 = *(int **)(**(int **)(param_2 + 8) + param_3 * 4);
  fn_8239D490(param_2,param_3,
                    (unsigned __int64)(unsigned int)(int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20) + 1);
  piVar2 = (int *)((int *)**(int **)(param_2 + 8))[1];
  piVar1 = *(int **)**(int **)(param_2 + 8);
  iVar4 = (**(int (***)())(*param_1 + 0x74))
                    (param_1,(int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20),
                     (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20));
  if (iVar4 != 0) {
    param_1[0x18] = param_1[0x18] + 1;
  }
  bVar3 = param_3 == 0;
  piVar2 = *(int **)((unsigned int)bVar3 * 4 + **(int **)(param_2 + 8));
  piVar1 = *(int **)(**(int **)(param_2 + 8) + param_3 * 4);
  iVar4 = (**(int (***)())(*param_1 + 0xc))
                    (param_1,(int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20),
                     (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20));
  uVar5 = 0;
  if (iVar4 != param_1[4]) {
    param_1[4] = iVar4;
    param_1[6] = 0;
  }
  param_1[1] = 2;
  if (param_1[0xf] != param_3) {
    param_1[0x10] = 0;
  }
  param_1[0xf] = param_3;
  param_1[0x15] = param_4;
  param_1[0x10] = param_1[0x10] + 1;
  if (((param_4 == 0) || ((1 < param_4 && (param_4 < 9)))) &&
     (piVar2 = *(int **)(**(int **)(param_2 + 8) + (unsigned int)bVar3 * 4),
     *(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) != 0)) {
    do {
      iVar4 = ((unsigned int)bVar3 * 2 + uVar5) * 0xb0 + param_2 + 0x8d4;
      *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + 1;
      uVar6 = *(int *)(iVar4 + 0x8c) + 1;
      *(unsigned int *)(iVar4 + 0x8c) = uVar6;
      if (*(unsigned int *)(iVar4 + 0x14) < uVar6) {
        *(unsigned int *)(iVar4 + 0x14) = uVar6;
      }
      uVar5 = uVar5 + 1;
      piVar2 = *(int **)(**(int **)(param_2 + 8) + (unsigned int)bVar3 * 4);
    } while (uVar5 < *(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8));
  }
  return;
}

