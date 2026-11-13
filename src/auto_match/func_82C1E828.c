extern unsigned int *auStack_40;


unsigned __int64 fn_82C1E828(int param_1,unsigned char *param_2,int *param_3,unsigned int *param_4,int *param_5)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_40 [16];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar2 = 0;
  if ((((piVar1 == (int *)0x0) || (param_2 == (unsigned char *)0x0)) || (param_4 == (unsigned int *)0x0)) ||
     ((param_5 == (int *)0x0 || (param_3 == (int *)0x0)))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if (*param_4 == 0) {
      uVar2 = (**(int (***)())(*piVar1 + 0x10))(*piVar1,*param_5,param_3,param_4,auStack_40);
      if (-1 < (int)uVar2) {
        *(unsigned __int64 *)(piVar1 + 2) = (unsigned __int64)*param_4 + *(__int64 *)(piVar1 + 2);
        *param_5 = *param_5 - *param_4;
        *param_2 = *(unsigned char *)*param_3;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
      }
    }
    else {
      *param_2 = *(unsigned char *)*param_3;
      *param_3 = *param_3 + 1;
      *param_4 = *param_4 - 1;
    }
  }
  return uVar2;
}

