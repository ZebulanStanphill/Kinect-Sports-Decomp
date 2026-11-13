extern int fn_82CE3870();
extern int fn_82CE38A0();


void fn_82CE2498(unsigned __int64 param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int auStack_30;
  
  auStack_30 = 2;
  iVar1 = fn_82CE38A0(param_1,param_2,&auStack_30);
  if ((iVar1 >= 0) && ((*param_2 & 0x40) != 0)) {
    fn_82CE3870(param_1,param_3);
  }
  return;
}

