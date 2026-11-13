extern int fn_822AC640();
extern int fn_82381BC0();
extern int fn_8243CE60();
extern int fn_82829C48();


unsigned int * fn_82831208(unsigned int *param_1,int param_2,int *param_3,int param_4)

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
        if (*(unsigned int *)(param_4 + 0xc) <= (unsigned int)param_3[3]) goto LAB_82831344;
        uVar6 = 0;
      }
      else {
        uVar3 = *(unsigned int *)(param_4 + 0xc);
        uVar4 = param_3[3];
        if ((uVar3 < uVar4) &&
           (apiStack_50[0] = param_3, fn_82829C48(apiStack_50), (unsigned int)apiStack_50[0][3] < uVar3)
           ) {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x15);
          piVar2 = apiStack_50[0];
        }
        else {
          if ((uVar3 <= uVar4) ||
             ((apiStack_50[0] = param_3, fn_82381BC0(apiStack_50), apiStack_50[0] != piVar2 &&
              ((unsigned int)apiStack_50[0][3] <= uVar3)))) goto LAB_82831344;
          cVar1 = *(char *)(param_3[2] + 0x15);
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
      goto LAB_82831244;
    }
    if ((unsigned int)param_3[3] <= *(unsigned int *)(param_4 + 0xc)) {
LAB_82831344:
      puVar5 = (unsigned int *)fn_8243CE60(apiStack_50,param_2,param_4,0);
      *param_1 = *puVar5;
      return param_1;
    }
  }
  uVar6 = 1;
LAB_82831244:
  fn_822AC640(param_1,param_2,uVar6,param_3,param_4);
  return param_1;
}

