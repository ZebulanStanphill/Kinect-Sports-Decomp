extern int fn_827E40D0();


int fn_827D67A8(int *param_1)

{
  int lVar1;
  int * apiStack_30;
  
  lVar1 = 0;
  apiStack_30 = (int *)0x0;
  if (param_1[0xb3] == 0) {
    param_1[0xd2] = 0;
    (*(int (**)())(*(int *)*param_1 + 8))((int *)*param_1,&apiStack_30);
    if (apiStack_30 != (int *)0x0) {
      do {
        lVar1 = lVar1 + 1;
        (*(int (**)())(*apiStack_30 + 4))(apiStack_30,param_1);
        RtlEnterCriticalSection(param_1 + 0x22);
        fn_827E40D0(param_1 + 1,param_1[1],&apiStack_30);
        RtlLeaveCriticalSection(param_1 + 0x22);
        if (param_1[0xb3] == 1) {
          return lVar1;
        }
        (*(int (**)())(*(int *)*param_1 + 8))((int *)*param_1,&apiStack_30);
      } while (apiStack_30 != (int *)0x0);
    }
  }
  else {
    param_1[0xd2] = 1;
    return 1;
  }
  return lVar1;
}

