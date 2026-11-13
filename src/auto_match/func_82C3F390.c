extern int fn_82F691F0();


void fn_82C3F390(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  param_2[2] = iVar1 >> 4;
  param_2[1] = iVar1 >> 3;
  param_2[8] = iVar1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_2[0xc],0,iVar1 << 1);
}

