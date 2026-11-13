extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82E14CD8(int *param_1,int *param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82CE5410();
  if (param_2[1] != (param_2[2] & 0x3fffffffU)) {
    *(int **)(param_2[1] * 4 + *param_2) = param_1;
    param_2[1] = param_2[1] + 1;
    for (uVar1 = (**(int (***)())(*param_1 + 0x34))(param_1,0,0); (uVar1 & 0xffffffff) != 0;
        uVar1 = (**(int (***)())(*param_1 + 0x34))(param_1,0,uVar1)) {
      fn_82E14CD8(uVar1,param_2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),param_2,4);
}

