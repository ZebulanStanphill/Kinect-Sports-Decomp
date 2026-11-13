extern int fn_82E0BFD8();


unsigned __int64 fn_82E0C288(int param_1,int *param_2,int param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = (**(int (***)())(*param_2 + 0x28))
                    (param_2,(unsigned __int64)*(unsigned int *)(param_3 * 0x30 + *(int *)(param_1 + 0x20) + 0x14)
                             + (unsigned __int64)*(unsigned int *)(param_1 + 0x70),0);
  if (iVar2 == 0) {
    uVar1 = fn_82E0BFD8(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

