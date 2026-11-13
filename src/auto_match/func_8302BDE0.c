extern int fn_8302BCE0();


unsigned __int64 fn_8302BDE0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  unsigned char cVar2;
  
  if ((((param_2 != 0) || (param_3 != 0)) || (param_4 != 0)) || (*(unsigned int *)(param_1 + 0x18) != 0)) {
    cVar2 = fn_8302BCE0(param_1);
    if (cVar2 == '\0') {
      return 2;
    }
    piVar1 = *(int **)(param_1 + 0x18);
    *piVar1 = param_2;
    piVar1[1] = param_3;
    piVar1[2] = param_4;
  }
  return 1;
}

