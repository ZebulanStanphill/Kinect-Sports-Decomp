extern int fn_8289DD28();
extern int fn_828E5F60();
extern int fn_828E6160();
extern int fn_828E6F48();
extern int fn_828E7708();


unsigned int * fn_828E78D8(unsigned int *param_1,int param_2,int *param_3,__int64 param_4)

{
  int *piVar1;
  char cVar3;
  unsigned int *puVar2;
  __int64 lVar4;
  int *apiStack_50 [4];
  
  lVar4 = param_4 + 0xc;
  if (*(int *)(param_2 + 8) == 0) {
    fn_828E6F48(param_1,param_2,1,*(unsigned int *)(param_2 + 4),param_4);
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
    if (param_3 == (int *)*piVar1) {
      cVar3 = fn_828E6160(param_2,lVar4,param_3 + 3);
      if (cVar3 != '\0') {
        fn_828E6F48(param_1,param_2,1,param_3,param_4);
        return param_1;
      }
    }
    else if (param_3 == piVar1) {
      cVar3 = fn_828E6160(param_2,(unsigned __int64)(unsigned int)piVar1[2] + 0xc,lVar4);
      if (cVar3 != '\0') {
        fn_828E6F48(param_1,param_2,0,*(unsigned int *)(*(int *)(param_2 + 4) + 8),param_4);
        return param_1;
      }
    }
    else {
      cVar3 = fn_828E6160(param_2,lVar4,param_3 + 3);
      if (cVar3 != '\0') {
        apiStack_50[0] = param_3;
        fn_8289DD28(apiStack_50);
        piVar1 = apiStack_50[0];
        cVar3 = fn_828E6160(param_2,apiStack_50[0] + 3,lVar4);
        if (cVar3 != '\0') {
          if (*(char *)(piVar1[2] + 0x1d) != '\0') {
            fn_828E6F48(param_1,param_2,0,piVar1,param_4);
            return param_1;
          }
          fn_828E6F48(param_1,param_2,1,param_3,param_4);
          return param_1;
        }
      }
      cVar3 = fn_828E6160(param_2,param_3 + 3,lVar4);
      if ((cVar3 != '\0') &&
         ((apiStack_50[0] = param_3, fn_828E5F60(apiStack_50), piVar1 = apiStack_50[0],
          apiStack_50[0] == *(int **)(param_2 + 4) ||
          (cVar3 = fn_828E6160(param_2,lVar4,apiStack_50[0] + 3), cVar3 != '\0')))) {
        if (*(char *)(param_3[2] + 0x1d) != '\0') {
          fn_828E6F48(param_1,param_2,0,param_3,param_4);
          return param_1;
        }
        fn_828E6F48(param_1,param_2,1,piVar1,param_4);
        return param_1;
      }
    }
    puVar2 = (unsigned int *)fn_828E7708(apiStack_50,param_2,param_4,0);
    *param_1 = *puVar2;
  }
  return param_1;
}

