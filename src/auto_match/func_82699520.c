extern int fn_826994A8();


int fn_82699520(int *param_1,int param_2,unsigned char *param_3)

{
  int iVar1;
  
  iVar1 = fn_826994A8();
  if ((iVar1 == -1) || (iVar1 = *(int *)(iVar1 * 4 + *param_1), *(int *)(iVar1 + 0x14) != param_2))
  {
    iVar1 = 0;
  }
  else if (param_3 != (unsigned char *)0x0) {
    *param_3 = *(unsigned char *)(iVar1 + 0x66) >> 6 & 1;
  }
  return iVar1;
}

