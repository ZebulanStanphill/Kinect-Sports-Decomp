extern int fn_82CF7648();


int * fn_82CE6C08(int *param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  param_1[0x25b] = *param_2;
  param_1[0x25c] = param_2[1];
  if ((param_3 & 1) != 0) {
    (**(int (***)())(*param_1 + 0xc))(param_1,param_1 + 0x25e,0xffffffff821bbc7c,param_3);
  }
  if (((param_3 & 2) != 0) && (iVar1 = param_2[1], iVar1 != 0)) {
    uVar2 = (**(int (***)())(*(int *)param_1[1] + 4))((int *)param_1[1],iVar1);
    fn_82CF7648(param_1 + 0x267,uVar2,iVar1);
  }
  return param_1 + 0x25e;
}

