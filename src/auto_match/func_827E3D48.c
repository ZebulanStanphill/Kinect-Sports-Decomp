extern int fn_827E8528();
extern int fn_82F622A8();


void fn_827E3D48(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = fn_827E8528(param_1 + 4,iVar1,*(unsigned int *)(iVar1 + 4),param_2);
  if (*(int *)(param_1 + 8) == 0x3ffffffe) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff8219852c);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}

