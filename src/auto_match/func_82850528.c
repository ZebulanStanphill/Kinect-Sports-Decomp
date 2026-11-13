extern int fn_8284FA10();
extern int fn_8284FBD0();
extern int fn_82F691F0();


void fn_82850528(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) == 0) {
      uVar2 = *(unsigned int *)(*(int *)(param_2 + 4) + 0x14);
      fn_8284FBD0(iVar1,uVar2,param_1,param_2);
      fn_8284FA10(*(unsigned int *)(param_1 + 0x90),uVar2,param_1,param_2);
    }
    else if (*(int *)(iVar1 + 0x1c) == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(param_2 + 0x1c),0,*(unsigned int *)(param_1 + 0x94));
    }
  }
  return;
}

