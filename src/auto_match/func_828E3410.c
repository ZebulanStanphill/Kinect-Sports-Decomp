extern int fn_828E2958();


__int64 fn_828E3410(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6)

{
  int *piStack00000014;
  
  if (*(char *)param_1[2] == '\0') {
    piStack00000014 = param_1;
    fn_828E2958((unsigned __int64)*(unsigned int *)(*param_1 + 8) + 0x28,*(unsigned int *)(param_1[2] + 0x60),
                  *(unsigned int *)(param_1[2] + 100),param_4,param_5,param_6);
    if (*(char *)param_1[2] == '\0') {
      *(char *)param_1[2] = '\x01';
    }
  }
  return (unsigned __int64)(unsigned int)param_1[2] + 1;
}

