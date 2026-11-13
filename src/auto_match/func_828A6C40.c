extern int fn_8289DD28();
extern int fn_8289FA30();
extern int fn_828A6260();
extern int fn_828A6938();
extern int fn_828E5F60();


unsigned int * fn_828A6C40(unsigned int *param_1,int param_2,int *param_3,__int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  int *piVar3;
  char cVar5;
  unsigned int *puVar4;
  __int64 lVar6;
  int * apiStack_50;
  
  lVar6 = param_4 + 0xc;
  if (*(int *)(param_2 + 8) == 0) {
    fn_828A6260(param_1,param_2,1,*(unsigned int *)(param_2 + 4),param_4);
  }
  else {
    piVar1 = *(int **)(param_2 + 4);
    if (param_3 == (int *)*piVar1) {
      cVar5 = fn_8289FA30(lVar6,param_3 + 3);
      if (cVar5 != '\0') {
        fn_828A6260(param_1,param_2,1,param_3,param_4);
        return param_1;
      }
    }
    else if (param_3 == piVar1) {
      uVar2 = piVar1[2];
      cVar5 = fn_8289FA30((unsigned __int64)uVar2 + 0xc,lVar6);
      if (cVar5 != '\0') {
        fn_828A6260(param_1,param_2,0,(unsigned __int64)uVar2,param_4);
        return param_1;
      }
    }
    else {
      cVar5 = fn_8289FA30(lVar6,param_3 + 3);
      if (cVar5 != '\0') {
        apiStack_50 = param_3;
        fn_8289DD28(&apiStack_50);
        piVar3 = apiStack_50;
        cVar5 = fn_8289FA30(apiStack_50 + 3,lVar6);
        if (cVar5 != '\0') {
          if (*(char *)(piVar3[2] + 0x1d) != '\0') {
            fn_828A6260(param_1,param_2,0,piVar3,param_4);
            return param_1;
          }
          fn_828A6260(param_1,param_2,1,param_3,param_4);
          return param_1;
        }
      }
      cVar5 = fn_8289FA30(param_3 + 3,lVar6);
      if ((cVar5 != '\0') &&
         ((apiStack_50 = param_3, fn_828E5F60(&apiStack_50), piVar3 = apiStack_50,
          apiStack_50 == piVar1 ||
          (cVar5 = fn_8289FA30(lVar6,apiStack_50 + 3), cVar5 != '\0')))) {
        if (*(char *)(param_3[2] + 0x1d) != '\0') {
          fn_828A6260(param_1,param_2,0,param_3,param_4);
          return param_1;
        }
        fn_828A6260(param_1,param_2,1,piVar3,param_4);
        return param_1;
      }
    }
    puVar4 = (unsigned int *)fn_828A6938(&apiStack_50,param_2,param_4,0);
    *param_1 = *puVar4;
  }
  return param_1;
}

