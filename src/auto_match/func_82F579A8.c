extern int fn_822509A0();
extern int fn_823FACD8();
extern int fn_82F56FC0();
extern int fn_82F57820();


unsigned int * fn_82F579A8(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  int *apiStack_50 [20];
  
  if (*(int *)(param_2 + 8) == 0) {
    param_3 = *(int **)(param_2 + 4);
  }
  else {
    piVar2 = *(int **)(param_2 + 4);
    if (param_3 != (int *)*piVar2) {
      if (param_3 == piVar2) {
        param_3 = (int *)piVar2[2];
        if (*(unsigned int *)(param_4 + 0x10) <= (unsigned int)param_3[4]) goto LAB_82f57ae4;
        uVar6 = 0;
      }
      else {
        uVar3 = *(unsigned int *)(param_4 + 0x10);
        uVar4 = param_3[4];
        if ((uVar3 < uVar4) &&
           (apiStack_50[0] = param_3, fn_823FACD8(apiStack_50), (unsigned int)apiStack_50[0][4] < uVar3)) {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x49);
          piVar2 = apiStack_50[0];
        }
        else {
          if ((uVar3 <= uVar4) ||
             ((apiStack_50[0] = param_3, fn_822509A0(apiStack_50), apiStack_50[0] != piVar2 &&
              ((unsigned int)apiStack_50[0][4] <= uVar3)))) goto LAB_82f57ae4;
          cVar1 = *(char *)(param_3[2] + 0x49);
          piVar2 = param_3;
          param_3 = apiStack_50[0];
        }
        if (cVar1 == '\0') {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
          param_3 = piVar2;
        }
      }
      goto LAB_82f579e4;
    }
    if ((unsigned int)param_3[4] <= *(unsigned int *)(param_4 + 0x10)) {
LAB_82f57ae4:
      puVar5 = (unsigned int *)fn_82F57820(apiStack_50,param_2,param_4,0);
      *param_1 = *puVar5;
      return param_1;
    }
  }
  uVar6 = 1;
LAB_82f579e4:
  fn_82F56FC0(param_1,param_2,uVar6,param_3,param_4);
  return param_1;
}

