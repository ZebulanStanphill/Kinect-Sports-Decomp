extern int fn_82F691F0();


void fn_8234E6D8(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else {
    iVar2 = param_1;
    if (*(int *)(param_2 + 0x10) != param_2) {
      iVar2 = 0;
    }
    uVar1 = (**(int (***)())**(unsigned int **)(param_2 + 0x10))(*(unsigned int **)(param_2 + 0x10),iVar2);
    *(unsigned int *)(param_1 + 0x10) = uVar1;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x18,0,0x48);
}

