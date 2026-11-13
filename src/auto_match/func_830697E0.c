extern int fn_82F691F0();
extern int fn_83065B90();


void fn_830697E0(unsigned __int64 param_1,int *param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_83065B90(*param_2 << 2);
  fn_83065B90(*param_2);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0,*param_2 << 2);
}

