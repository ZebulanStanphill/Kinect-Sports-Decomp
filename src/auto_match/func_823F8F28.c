extern unsigned int *auStack_48;
extern int fn_822509A0();
extern int fn_823FA9E8();
extern int fn_823FAB00();
extern int fn_823FACD8();


unsigned int * fn_823F8F28(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  int *apiStack_50 [2];
  unsigned char auStack_48 [72];
  
  apiStack_50[0] = (int *)0x0;
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar2 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar2) {
      if (param_3 == piVar2) {
        param_3 = (int *)piVar2[2];
        if (*(int *)(param_4 + 0x10) <= param_3[4]) goto LAB_823f9074;
        uVar7 = 0;
      }
      else {
        iVar3 = *(int *)(param_4 + 0x10);
        iVar4 = param_3[4];
        if ((iVar3 < iVar4) &&
           (apiStack_50[0] = param_3, piVar5 = (int *)fn_823FACD8(apiStack_50),
           *(int *)(*piVar5 + 0x10) < iVar3)) {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x49);
          piVar2 = apiStack_50[0];
        }
        else {
          if ((iVar3 <= iVar4) ||
             ((apiStack_50[0] = param_3, puVar6 = (unsigned int *)fn_822509A0(apiStack_50),
              (int *)*puVar6 != piVar2 && (apiStack_50[0][4] <= iVar3)))) goto LAB_823f9074;
          cVar1 = *(char *)(param_3[2] + 0x49);
          piVar2 = param_3;
          param_3 = apiStack_50[0];
        }
        if (cVar1 == '\0') {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
          param_3 = piVar2;
        }
      }
      goto LAB_823f8f6c;
    }
    if (param_3[4] <= *(int *)(param_4 + 0x10)) {
LAB_823f9074:
      puVar6 = (unsigned int *)fn_823FA9E8(auStack_48,param_2,param_4);
      *param_1 = *puVar6;
      return param_1;
    }
  }
  uVar7 = 1;
LAB_823f8f6c:
  fn_823FAB00(param_1,param_2,uVar7,param_3,param_4);
  return param_1;
}

