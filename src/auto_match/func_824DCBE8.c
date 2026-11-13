extern unsigned int *auStack_70;
extern int fn_824E00B8();
extern int fn_82F50DA8();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_824DCBE8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char auStack_70 [112];
  
  puVar1 = (unsigned int *)fn_82F6A548();
  iVar2 = (**(int (***)())(*(int *)param_2 + 4))(param_2);
  if (iVar2 != 0) {
    iVar2 = (**(int (***)())(*(int *)param_2 + 4))(param_2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_824E00B8(param_2);
    }
    puVar1[0x15] = uVar3;
                    /* WARNING: Subroutine does not return */
    fn_82F50DA8(auStack_70,param_2,10,1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  fn_82F6A594();
  return;
}

