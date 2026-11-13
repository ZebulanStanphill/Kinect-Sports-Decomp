extern int fn_8255A780();
extern unsigned int lbl_82193CC0;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8255A900(float *param_1)

{
  int iVar1;
  
  iVar1 = fn_8255A780((double)*param_1,(double)ltcg_pool_0_0f,(double)lbl_82193CC0);
  if (((iVar1 != 0) && (iVar1 = fn_8255A780((double)param_1[1]), iVar1 != 0)) &&
     (iVar1 = fn_8255A780((double)param_1[2]), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

