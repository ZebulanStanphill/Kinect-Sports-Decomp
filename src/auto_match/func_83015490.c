extern int fn_82FFE0F0();


unsigned __int64
fn_83015490(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82FFE0F0(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0xe;
  }
  else {
    uVar1 = (**(int (***)())(**(int **)(iVar2 + 4) + 4))(*(int **)(iVar2 + 4),param_3,param_4,param_5);
  }
  return uVar1;
}

