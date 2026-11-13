extern unsigned int *auStack_48;
extern int fn_82248B90();
extern int fn_8225EB60();
extern int fn_8225EC58();
extern int fn_8225F028();


unsigned int * fn_8225E870(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
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
        if (*(unsigned int *)(param_4 + 0xc) <= (unsigned int)param_3[3]) goto LAB_8225e9bc;
        uVar7 = 0;
      }
      else {
        uVar3 = *(unsigned int *)(param_4 + 0xc);
        uVar4 = param_3[3];
        if ((uVar3 < uVar4) &&
           (apiStack_50[0] = param_3, piVar5 = (int *)fn_8225F028(apiStack_50),
           *(unsigned int *)(*piVar5 + 0xc) < uVar3)) {
          cVar1 = *(char *)(apiStack_50[0][2] + 0x19);
          piVar2 = apiStack_50[0];
        }
        else {
          if ((uVar3 <= uVar4) ||
             ((apiStack_50[0] = param_3, puVar6 = (unsigned int *)fn_82248B90(apiStack_50),
              (int *)*puVar6 != piVar2 && ((unsigned int)apiStack_50[0][3] <= uVar3)))) goto LAB_8225e9bc;
          cVar1 = *(char *)(param_3[2] + 0x19);
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
      goto LAB_8225e8b4;
    }
    if ((unsigned int)param_3[3] <= *(unsigned int *)(param_4 + 0xc)) {
LAB_8225e9bc:
      puVar6 = (unsigned int *)fn_8225EB60(auStack_48,param_2,param_4);
      *param_1 = *puVar6;
      return param_1;
    }
  }
  uVar7 = 1;
LAB_8225e8b4:
  fn_8225EC58(param_1,param_2,uVar7,param_3,param_4);
  return param_1;
}

