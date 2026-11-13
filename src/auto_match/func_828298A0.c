extern int fn_82829C48();


void fn_828298A0(unsigned int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned int uVar5;
  int * apiStack_40;
  
  *param_3 = 0;
  if (*(int *)(*(int *)(param_2 + 0x304) + 8) != 0) {
    piVar1 = *(int **)(*(int *)(param_2 + 0x304) + 4);
    piVar2 = (int *)*piVar1;
    apiStack_40 = piVar1;
    if (*(char *)(piVar1[1] + 0x15) == '\0') {
      piVar3 = (int *)piVar1[1];
      do {
        if ((unsigned int)piVar3[3] < *param_1) {
          piVar4 = (int *)piVar3[2];
        }
        else {
          piVar4 = (int *)*piVar3;
          apiStack_40 = piVar3;
        }
        piVar3 = piVar4;
      } while (*(char *)((int)piVar4 + 0x15) == '\0');
    }
    if ((apiStack_40 == piVar1) && (apiStack_40 != piVar2)) {
      fn_82829C48(&apiStack_40);
    }
    uVar5 = *param_1;
    if ((uVar5 < *(unsigned int *)(apiStack_40[4] + 0x18)) && (apiStack_40 != piVar2)) {
      fn_82829C48(&apiStack_40);
    }
    if ((*(unsigned int *)(apiStack_40[4] + 0x18) <= uVar5) &&
       (uVar5 <= *(unsigned int *)(apiStack_40[4] + 0x1c))) {
      *param_3 = apiStack_40[4];
      param_1[1] = *param_1 - *(int *)(apiStack_40[4] + 0x18);
      *(unsigned char *)(param_1 + 2) = 0;
    }
  }
  return;
}

