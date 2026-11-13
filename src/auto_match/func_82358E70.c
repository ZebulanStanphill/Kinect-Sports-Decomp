extern int fn_822ABA88();
extern int fn_8288B760();


unsigned __int64 fn_82358E70(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  
  piVar3 = *(int **)(param_1 + 8);
  *param_2 = 0;
  *param_3 = 0;
  uVar4 = 0;
  iVar5 = 0;
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar6 = 0;
    do {
      uVar7 = 0;
      piVar3 = *(int **)(iVar6 + *piVar3);
      iVar1 = *(int *)(piVar3[4] * 4 + *piVar3);
      if (*(int *)(iVar1 + 8) != 0) {
        do {
          iVar1 = fn_822ABA88(iVar1,uVar7);
          if (*(int *)(iVar1 + 0x74) != 0) {
            if (*(int *)(iVar1 + 0x168) == 0) {
              uVar2 = *(unsigned int *)(iVar1 + 0x16c);
            }
            else {
              uVar2 = fn_8288B760();
              uVar2 = uVar2 & 0xff;
            }
            if (uVar2 != 0) {
              if (*param_2 == 0) {
                *param_2 = iVar1;
                uVar4 = 1;
              }
              else {
                *param_3 = iVar1;
                uVar4 = 2;
              }
            }
          }
          uVar7 = uVar7 + 1;
          iVar1 = *(int *)(piVar3[4] * 4 + *piVar3);
        } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 8));
      }
      piVar3 = *(int **)(param_1 + 8);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < piVar3[1] - *piVar3 >> 2);
  }
  return uVar4;
}

