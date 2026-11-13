extern int fn_829B6EA8();
extern int fn_82F691F0();


void fn_829B7138(int param_1)

{
  unsigned __int64 uVar1;
  
  fn_829B6EA8();
  uVar1 = (*(int (**)())**(unsigned int **)(param_1 + 4))(param_1,1,0x580);
  *(int *)(param_1 + 0x148) = (int)uVar1 + 0x100;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0,0x100);
}

