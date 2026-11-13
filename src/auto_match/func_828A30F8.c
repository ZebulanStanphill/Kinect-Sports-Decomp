extern int fn_828A19E8();


__int64 fn_828A30F8(int *param_1)

{
  int *piStack00000014;
  
  if (*(char *)param_1[2] == '\0') {
    piStack00000014 = param_1;
    fn_828A19E8((unsigned __int64)*(unsigned int *)(*param_1 + 8) + 0x28,*(unsigned int *)(param_1[2] + 0x60));
    if (*(char *)param_1[2] == '\0') {
      *(char *)param_1[2] = '\x01';
    }
  }
  return (unsigned __int64)(unsigned int)param_1[2] + 1;
}

