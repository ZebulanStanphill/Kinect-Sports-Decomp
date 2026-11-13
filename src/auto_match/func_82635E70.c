extern int fn_82634DF8();
extern int fn_82637090();


__int64 fn_82635E70(int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  fn_82634DF8(param_1 + iVar1 * 0x9b4 + 4,1,param_3 == 0,0,param_2);
  fn_82637090(param_1 + iVar1 * 0x9b4 + 0x1c,param_2,param_1 + iVar1 * 0x9b4 + 0x18);
  return (unsigned __int64)(unsigned int)param_1[iVar1 * 0x9b4 + 0x1d] - 1;
}

