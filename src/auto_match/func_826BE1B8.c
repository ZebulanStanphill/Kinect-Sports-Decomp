extern int fn_826944C8();
extern int fn_82695FA0();


int * fn_826BE1B8(int *param_1,int *param_2)

{
  int iVar1;
  __int64 lVar2;
  
  iVar1 = *param_2;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  lVar2 = (unsigned __int64)*(unsigned int *)(*param_1 + 8) - 1;
  *(int *)(*param_1 + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8();
  }
  *param_1 = iVar1;
  fn_82695FA0(param_1 + 2,param_2 + 2);
  *(unsigned char *)((int)param_1 + 9) = *(unsigned char *)((int)param_2 + 9);
  return param_1;
}

