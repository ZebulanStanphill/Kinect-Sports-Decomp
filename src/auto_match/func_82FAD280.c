extern int fn_82FA96C8();


void fn_82FAD280(int param_1,__int64 param_2,unsigned int param_3)

{
  unsigned int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    param_2 = *(unsigned int *)(iVar1 + 0xc) + param_2;
    fn_82FA96C8(iVar1,param_2,&param_3,0);
  }
  return;
}

