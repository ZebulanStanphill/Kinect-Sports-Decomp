void fn_822CA560(int *param_1,unsigned int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (*(int (**)())(*param_1 + 8))();
  if ((param_4 == 1) && (param_2 == iVar1 + 0x144)) {
    *(unsigned char *)((int)param_1 + 0x83) = 1;
  }
  return;
}

