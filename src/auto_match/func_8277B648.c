extern int fn_8277B540();
extern int memcpy();


void fn_8277B648(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  if ((*(int *)param_1[3] == *(int *)param_2[3]) && (*(int *)param_1[3] != 0)) {
    fn_8277B540(param_1,(unsigned __int64)*param_2 + (unsigned __int64)*param_1,0);
    if (*param_2 + *param_1 <= param_1[1]) {
      *param_1 = *param_2 + *param_1;
      uVar1 = *param_2;
      if (uVar1 != 0) {
        memcpy((__int64)(int)(*param_1 - uVar1) * (__int64)*(int *)(param_1[3] + 4) +
                     (unsigned __int64)param_1[2],param_2[2],
                     (__int64)*(int *)(param_1[3] + 4) * (__int64)(int)uVar1);
      }
    }
  }
  return;
}

