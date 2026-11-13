typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B7BD28();
extern int fn_82BBFDF0();


void fn_82BC73C8(int *param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  bool bVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  
  if (*(int *)(param_2 + 0x578) == 0) {
    uVar1 = *(unsigned int *)(param_2 + 0x5b0);
    puVar4 = (unsigned int *)fn_82B7BD28(uVar1,0x28);
    puVar6 = puVar4 + 1;
    *puVar4 = uVar1;
    if (puVar6 == (unsigned int *)0x0) {
      puVar6 = (unsigned int *)0x0;
    }
    else {
      puVar4[2] = param_1;
      *puVar6 = 0;
      puVar4[3] = 0;
      fn_82BBFDF0(puVar4 + 4);
    }
    *(unsigned int **)(param_2 + 0x578) = puVar6;
  }
  iVar5 = *(int *)(param_2 + 0x578);
  if (iVar5 != 0) {
    do {
      piVar2 = *(int **)(iVar5 + 4);
      if (((*param_1 != *piVar2) || (param_1[1] != piVar2[1])) ||
         (bVar3 = true, param_1[2] != piVar2[2])) {
        bVar3 = false;
      }
      if (bVar3) {
        return;
      }
      iVar5 = *(int *)(iVar5 + 8);
    } while (iVar5 != 0);
  }
  uVar1 = *(unsigned int *)(param_2 + 0x5b0);
  puVar4 = (unsigned int *)fn_82B7BD28(uVar1,0x28);
  puVar6 = puVar4 + 1;
  *puVar4 = uVar1;
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar4[2] = param_1;
    *puVar6 = 0;
    puVar4[3] = 0;
    fn_82BBFDF0(puVar4 + 4);
  }
  puVar6[2] = *(unsigned int *)(*(int *)(param_2 + 0x578) + 8);
  *(unsigned int **)(*(int *)(param_2 + 0x578) + 8) = puVar6;
  return;
}

