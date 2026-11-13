extern int fn_82880A10();
extern int fn_8288A4B0();
extern int fn_828DF458();
extern int fn_828EA790();


unsigned int * fn_82880E08(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int * apiStack_50;
  
  if (*(int *)(param_2 + 8) == 0) {
    fn_828DF458(param_1,param_2,1,*(unsigned int *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar2) {
    if (*(unsigned int *)(param_4 + 0xc) < (unsigned int)param_3[3]) {
      fn_828DF458(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else {
    if (param_3 != piVar2) {
      uVar3 = *(unsigned int *)(param_4 + 0xc);
      uVar4 = param_3[3];
      if ((uVar3 < uVar4) &&
         (apiStack_50 = param_3, fn_8288A4B0(&apiStack_50), (unsigned int)apiStack_50[3] < uVar3))
      {
        cVar1 = *(char *)(apiStack_50[2] + 0x15);
        piVar2 = param_3;
        param_3 = apiStack_50;
      }
      else {
        if ((uVar3 <= uVar4) ||
           ((apiStack_50 = param_3, fn_828EA790(&apiStack_50), apiStack_50 != piVar2 &&
            ((unsigned int)apiStack_50[3] <= uVar3)))) goto LAB_82880f8c;
        cVar1 = *(char *)(param_3[2] + 0x15);
        piVar2 = apiStack_50;
      }
      if (cVar1 == '\0') {
        fn_828DF458(param_1,param_2,1,piVar2,param_4);
        return param_1;
      }
      fn_828DF458(param_1,param_2,0,param_3,param_4);
      return param_1;
    }
    if (*(unsigned int *)(piVar2[2] + 0xc) < *(unsigned int *)(param_4 + 0xc)) {
      fn_828DF458(param_1,param_2,0,piVar2[2],param_4);
      return param_1;
    }
  }
LAB_82880f8c:
  puVar5 = (unsigned int *)fn_82880A10(&apiStack_50,param_2,param_4,0);
  *param_1 = *puVar5;
  return param_1;
}

