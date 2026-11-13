extern int fn_82FEFC50();


void fn_82FF4388(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x7c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
    fn_82FEFC50(iVar1,param_2,param_3,param_4,param_5);
  }
  return;
}

