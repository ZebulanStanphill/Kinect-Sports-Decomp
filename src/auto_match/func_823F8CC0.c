typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_48;
extern int fn_822509A0();
extern int fn_823FA890();
extern int fn_823FAB00();
extern int fn_823FACD8();


unsigned int * fn_823F8CC0(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
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
        if (((unsigned int)param_3[4] < *(unsigned int *)(param_4 + 0x10)) ||
           (((unsigned int)param_3[4] <= *(unsigned int *)(param_4 + 0x10) &&
            (param_3[5] < *(int *)(param_4 + 0x14))))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) goto LAB_823f8f00;
        uVar8 = 0;
        goto LAB_823f8d04;
      }
      uVar3 = *(unsigned int *)(param_4 + 0x10);
      if ((uVar3 < (unsigned int)param_3[4]) ||
         ((uVar3 <= (unsigned int)param_3[4] && (*(int *)(param_4 + 0x14) < param_3[5])))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        apiStack_50[0] = param_3;
        piVar6 = (int *)fn_823FACD8(apiStack_50);
        uVar4 = *(unsigned int *)(*piVar6 + 0x10);
        if ((uVar4 < uVar3) ||
           ((uVar4 <= uVar3 && (*(int *)(*piVar6 + 0x14) < *(int *)(param_4 + 0x14))))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) goto LAB_823f8e58;
        cVar1 = *(char *)(apiStack_50[0][2] + 0x49);
        piVar2 = apiStack_50[0];
      }
      else {
LAB_823f8e58:
        if (((unsigned int)param_3[4] < uVar3) ||
           (((unsigned int)param_3[4] <= uVar3 && (param_3[5] < *(int *)(param_4 + 0x14))))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) {
LAB_823f8f00:
          puVar7 = (unsigned int *)fn_823FA890(auStack_48,param_2,param_4);
          *param_1 = *puVar7;
          return param_1;
        }
        apiStack_50[0] = param_3;
        puVar7 = (unsigned int *)fn_822509A0(apiStack_50);
        if ((int *)*puVar7 != piVar2) {
          if ((uVar3 < (unsigned int)apiStack_50[0][4]) ||
             ((uVar3 <= (unsigned int)apiStack_50[0][4] && (*(int *)(param_4 + 0x14) < apiStack_50[0][5]))))
          {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (!bVar5) goto LAB_823f8f00;
        }
        cVar1 = *(char *)(param_3[2] + 0x49);
        piVar2 = param_3;
        param_3 = apiStack_50[0];
      }
      if (cVar1 == '\0') {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        param_3 = piVar2;
      }
      goto LAB_823f8d04;
    }
    if ((*(unsigned int *)(param_4 + 0x10) < (unsigned int)param_3[4]) ||
       ((*(unsigned int *)(param_4 + 0x10) <= (unsigned int)param_3[4] && (*(int *)(param_4 + 0x14) < param_3[5]))))
    {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_823f8f00;
  }
  uVar8 = 1;
LAB_823f8d04:
  fn_823FAB00(param_1,param_2,uVar8,param_3,param_4);
  return param_1;
}

