extern unsigned int *auStack_40;
extern int fn_8265CA20();
extern int fn_8288E4B0();
extern int fn_828B22F0();
extern int fn_828C8DC8();
extern int fn_828C8F18();
extern int fn_82F622A8();


unsigned int *
fn_828C9DB8(unsigned int *param_1,int param_2,char param_3,unsigned int *param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  unsigned char auStack_40 [64];
  
  if (0x4924922 < *(unsigned int *)(param_2 + 8)) {
    fn_828B22F0(param_5 + 10);
    fn_8265CA20(param_5[10]);
    fn_8288E4B0(auStack_40,param_5 + 6,*(unsigned int *)param_5[7]);
    fn_8265CA20(param_5[7]);
    fn_8265CA20(param_5);
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82197e58);
  }
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) + 1;
  param_5[1] = (int)param_4;
  if (param_4 == *(unsigned int **)(param_2 + 4)) {
    (*(unsigned int **)(param_2 + 4))[1] = param_5;
    **(unsigned int **)(param_2 + 4) = param_5;
    *(int **)(*(int *)(param_2 + 4) + 8) = param_5;
  }
  else if (param_3 == '\0') {
    param_4[2] = param_5;
    if (param_4 == *(unsigned int **)(*(int *)(param_2 + 4) + 8)) {
      *(int **)(*(int *)(param_2 + 4) + 8) = param_5;
    }
  }
  else {
    *param_4 = param_5;
    if (param_4 == (unsigned int *)**(int **)(param_2 + 4)) {
      **(int **)(param_2 + 4) = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0x48);
  piVar5 = param_5;
  while (cVar1 == '\0') {
    piVar2 = (int *)piVar5[1];
    piVar3 = (int *)piVar2[1];
    if (piVar2 == (int *)*piVar3) {
      iVar4 = piVar3[2];
      if (*(char *)(iVar4 + 0x48) == '\0') {
        *(unsigned char *)(piVar2 + 0x12) = 1;
        *(unsigned char *)(iVar4 + 0x48) = 1;
        *(unsigned char *)(*(int *)(piVar5[1] + 4) + 0x48) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar2[2]) {
          fn_828C8F18(param_2);
          piVar5 = piVar2;
        }
        *(unsigned char *)(piVar5[1] + 0x48) = 1;
        *(unsigned char *)(*(int *)(piVar5[1] + 4) + 0x48) = 0;
        fn_828C8DC8(param_2,*(unsigned int *)(piVar5[1] + 4));
      }
    }
    else {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x48) == '\0') {
        *(unsigned char *)(piVar5[1] + 0x48) = 1;
        *(unsigned char *)(iVar4 + 0x48) = 1;
        *(unsigned char *)(*(int *)(piVar5[1] + 4) + 0x48) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)*piVar2) {
          fn_828C8DC8(param_2);
          piVar5 = piVar2;
        }
        *(unsigned char *)(piVar5[1] + 0x48) = 1;
        *(unsigned char *)(*(int *)(piVar5[1] + 4) + 0x48) = 0;
        fn_828C8F18(param_2,*(unsigned int *)(piVar5[1] + 4));
      }
    }
    cVar1 = *(char *)(piVar5[1] + 0x48);
  }
  iVar4 = *(int *)(param_2 + 4);
  *param_1 = param_5;
  *(unsigned char *)(*(int *)(iVar4 + 4) + 0x48) = 1;
  return param_1;
}

